self.description = "Replace one package with another providing it"

sp = pmpkg("bar")
sp.provides = ["foo"]
sp.conflicts = ["foo"]
self.addpkg2db("sync", sp)

lp = pmpkg("foo")
lp.requiredby = ["lp1", "lp2"]
self.addpkg2db("local", lp)

lp1 = pmpkg("pkg1")
lp1.depends = ["foo"]
self.addpkg2db("local", lp1)

lp2 = pmpkg("pkg2")
lp2.depends = ["foo"]
self.addpkg2db("local", lp2)

self.args = "-S %s" % sp.name

self.addrule("PACMAN_RETCODE=0")
self.addrule("!PKG_EXIST=foo")
self.addrule("PKG_EXIST=bar")
self.addrule("PKG_EXIST=pkg1")
self.addrule("PKG_REQUIREDBY=bar|pkg1")
self.addrule("PKG_EXIST=pkg2")
self.addrule("PKG_REQUIREDBY=bar|pkg2")