(ns euler-clojure.core
  "Main executable printing all solutions to the command line."
  (:gen-class)
  (:require 
   [euler-clojure.prob-1 :as prob-1] 
   [euler-clojure.prob-2 :as prob-2]))

(defn -main
  "I don't do a whole lot ... yet."
  [& args]
  (println "Solution to problem 1:") 
  (println (prob-1/precalculated))
  (println (prob-1/filtered)) 
  (println (prob-2/filtered 4e6)))
