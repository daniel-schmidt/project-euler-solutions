(defproject euler-clojure "0.1.0-SNAPSHOT"
  :description "Solutions to the puzzles on https://projecteuler.net written in Clojure."
  :url "https://github.com/daniel-schmidt/project-euler-solutions"
  :license {:name "EPL-2.0 OR GPL-2.0-or-later WITH Classpath-exception-2.0"
            :url "https://www.eclipse.org/legal/epl-2.0/"}
  :dependencies [[org.clojure/clojure "1.10.3"]]
  :main ^:skip-aot euler-clojure.core
  :target-path "target/%s"
  :profiles {:uberjar {:aot :all
                       :jvm-opts ["-Dclojure.compiler.direct-linking=true"]}})
