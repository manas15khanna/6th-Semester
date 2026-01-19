# Unit 1
## Attack Surfaces
Attack surfaces are the points through which an attack can be made into a system
Types of attack surfaces:
- network attack surface 
- application attack surface 
- physical attack surface 
- human attack surface 
Larger the attack surface, more is the risk
## OSI layer and its surfaces 

| Layer           | Devices                   | Method of Control                         | Attacks Possible                |
| --------------- | ------------------------- | ----------------------------------------- | ------------------------------- |
| Physical        | wires, hubs               | physical restrictions like data rates     | Wiretapping, Jamming            |
| Data Link Layer | switches, bridges         | Physical addressing (MAC addresses)       | MAC spoofing                    |
| Network         | routers                   | Routing protocols, IP addressing          | IP spoofing, DoS, DDoS          |
| Transport       | Firewalls, Load Balancers | TCP/UDP protocols, Flow and error control | TCP Flooding Attack through DoS |
| Session         |                           |                                           |                                 |
| Presentation    |                           |                                           |                                 |
| Application     |                           |                                           |                                 |
