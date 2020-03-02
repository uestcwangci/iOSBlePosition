//
//  ViewController.swift
//  TestFramework
//
//  Created by 🙊忘词 on 2020/2/29.
//  Copyright © 2020 忘词. All rights reserved.
//
import UIKit

class ViewController: UIViewController {
    @IBOutlet weak var label: UILabel!
    
    private var ble:BlePosition!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        ble = BlePosition(finger: "figurePrint Library");
    }
    
    
    @IBAction func onClick(_ sender: UIButton) {
        if sender.restorationIdentifier == "start" {
            ble.start { (loc) in
                self.label.text = "x: \(loc[0]), y: \(loc[1])"
            }
        } else {
            ble.stop()
        }
    }
    

}

