(ns euler-clojure.core
  (:gen-class))
(require '[euler-clojure.prob-1 :as prob-1])

(defn -main
  "I don't do a whole lot ... yet."
  [& args]
  (println "Solution to problem 1:")
  (println (prob-1/precalculated))
  (println (prob-1/filtered)))
