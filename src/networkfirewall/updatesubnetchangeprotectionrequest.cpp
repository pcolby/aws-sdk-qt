/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatesubnetchangeprotectionrequest.h"
#include "updatesubnetchangeprotectionrequest_p.h"
#include "updatesubnetchangeprotectionresponse.h"
#include "networkfirewallrequest_p.h"

namespace QtAws {
namespace NetworkFirewall {

/*!
 * \class QtAws::NetworkFirewall::UpdateSubnetChangeProtectionRequest
 * \brief The UpdateSubnetChangeProtectionRequest class provides an interface for NetworkFirewall UpdateSubnetChangeProtection requests.
 *
 * \inmodule QtAwsNetworkFirewall
 *
 *  This is the API Reference for Network Firewall. This guide is for developers who need detailed information about the
 *  Network Firewall API actions, data types, and errors.
 * 
 *  </p <ul> <li>
 * 
 *  The REST API requires you to handle connection details, such as calculating signatures, handling request retries, and
 *  error handling. For general information about using the Amazon Web Services REST APIs, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/aws-apis.html">Amazon Web Services APIs</a>.
 * 
 *  </p
 * 
 *  To access Network Firewall using the REST API endpoint: <code>https://network-firewall.<region>.amazonaws.com </code>
 * 
 *  </p </li> <li>
 * 
 *  Alternatively, you can use one of the Amazon Web Services SDKs to access an API that's tailored to the programming
 *  language or platform that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">Amazon Web
 *  Services
 * 
 *  SDKs</a>> </li> <li>
 * 
 *  For descriptions of Network Firewall features, including and step-by-step instructions on how to use them through the
 *  Network Firewall console, see the <a href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/">Network
 *  Firewall Developer
 * 
 *  Guide</a>> </li> </ul>
 * 
 *  Network Firewall is a stateful, managed, network firewall and intrusion detection and prevention service for Amazon
 *  Virtual Private Cloud (Amazon VPC). With Network Firewall, you can filter traffic at the perimeter of your VPC. This
 *  includes filtering traffic going to and coming from an internet gateway, NAT gateway, or over VPN or Direct Connect.
 *  Network Firewall uses rules that are compatible with Suricata, a free, open source intrusion detection system (IDS)
 *  engine. Network Firewall supports Suricata version 5.0.2. For information about Suricata, see the <a
 *  href="https://suricata-ids.org/">Suricata
 * 
 *  website</a>>
 * 
 *  You can use Network Firewall to monitor and protect your VPC traffic in a number of ways. The following are just a few
 *  examples:
 * 
 *  </p <ul> <li>
 * 
 *  Allow domains or IP addresses for known Amazon Web Services service endpoints, such as Amazon S3, and block all other
 *  forms of
 * 
 *  traffic> </li> <li>
 * 
 *  Use custom lists of known bad domains to limit the types of domain names that your applications can
 * 
 *  access> </li> <li>
 * 
 *  Perform deep packet inspection on traffic entering or leaving your
 * 
 *  VPC> </li> <li>
 * 
 *  Use stateful protocol detection to filter protocols like HTTPS, regardless of the port
 * 
 *  used> </li> </ul>
 * 
 *  To enable Network Firewall for your VPCs, you perform steps in both Amazon VPC and in Network Firewall. For information
 *  about using Amazon VPC, see <a href="https://docs.aws.amazon.com/vpc/latest/userguide/">Amazon VPC User
 * 
 *  Guide</a>>
 * 
 *  To start using Network Firewall, do the following:
 * 
 *  </p <ol> <li>
 * 
 *  (Optional) If you don't already have a VPC that you want to protect, create it in Amazon VPC.
 * 
 *  </p </li> <li>
 * 
 *  In Amazon VPC, in each Availability Zone where you want to have a firewall endpoint, create a subnet for the sole use of
 *  Network Firewall.
 * 
 *  </p </li> <li>
 * 
 *  In Network Firewall, create stateless and stateful rule groups, to define the components of the network traffic
 *  filtering behavior that you want your firewall to have.
 * 
 *  </p </li> <li>
 * 
 *  In Network Firewall, create a firewall policy that uses your rule groups and specifies additional default traffic
 *  filtering behavior.
 * 
 *  </p </li> <li>
 * 
 *  In Network Firewall, create a firewall and specify your new firewall policy and VPC subnets. Network Firewall creates a
 *  firewall endpoint in each subnet that you specify, with the behavior that's defined in the firewall
 * 
 *  policy> </li> <li>
 * 
 *  In Amazon VPC, use ingress routing enhancements to route traffic through the new firewall
 *
 * \sa NetworkFirewallClient::updateSubnetChangeProtection
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSubnetChangeProtectionRequest::UpdateSubnetChangeProtectionRequest(const UpdateSubnetChangeProtectionRequest &other)
    : NetworkFirewallRequest(new UpdateSubnetChangeProtectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSubnetChangeProtectionRequest object.
 */
UpdateSubnetChangeProtectionRequest::UpdateSubnetChangeProtectionRequest()
    : NetworkFirewallRequest(new UpdateSubnetChangeProtectionRequestPrivate(NetworkFirewallRequest::UpdateSubnetChangeProtectionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSubnetChangeProtectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSubnetChangeProtectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSubnetChangeProtectionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSubnetChangeProtectionResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkFirewall::UpdateSubnetChangeProtectionRequestPrivate
 * \brief The UpdateSubnetChangeProtectionRequestPrivate class provides private implementation for UpdateSubnetChangeProtectionRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkFirewall
 */

/*!
 * Constructs a UpdateSubnetChangeProtectionRequestPrivate object for NetworkFirewall \a action,
 * with public implementation \a q.
 */
UpdateSubnetChangeProtectionRequestPrivate::UpdateSubnetChangeProtectionRequestPrivate(
    const NetworkFirewallRequest::Action action, UpdateSubnetChangeProtectionRequest * const q)
    : NetworkFirewallRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSubnetChangeProtectionRequest
 * class' copy constructor.
 */
UpdateSubnetChangeProtectionRequestPrivate::UpdateSubnetChangeProtectionRequestPrivate(
    const UpdateSubnetChangeProtectionRequestPrivate &other, UpdateSubnetChangeProtectionRequest * const q)
    : NetworkFirewallRequestPrivate(other, q)
{

}

} // namespace NetworkFirewall
} // namespace QtAws
