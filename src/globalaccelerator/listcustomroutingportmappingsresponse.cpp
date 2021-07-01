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

#include "listcustomroutingportmappingsresponse.h"
#include "listcustomroutingportmappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlobalAccelerator {

/*!
 * \class QtAws::GlobalAccelerator::ListCustomRoutingPortMappingsResponse
 * \brief The ListCustomRoutingPortMappingsResponse class provides an interace for GlobalAccelerator ListCustomRoutingPortMappings responses.
 *
 * \inmodule QtAwsGlobalAccelerator
 *
 *  <fullname>AWS Global Accelerator</fullname>
 * 
 *  This is the <i>AWS Global Accelerator API Reference</i>. This guide is for developers who need detailed information
 *  about AWS Global Accelerator API actions, data types, and errors. For more information about Global Accelerator
 *  features, see the <a href="https://docs.aws.amazon.com/global-accelerator/latest/dg/Welcome.html">AWS Global Accelerator
 *  Developer
 * 
 *  Guide</a>>
 * 
 *  AWS Global Accelerator is a service in which you create <i>accelerators</i> to improve the performance of your
 *  applications for local and global users. Depending on the type of accelerator you choose, you can gain additional
 *  benefits.
 * 
 *  </p <ul> <li>
 * 
 *  By using a standard accelerator, you can improve availability of your internet applications that are used by a global
 *  audience. With a standard accelerator, Global Accelerator directs traffic to optimal endpoints over the AWS global
 *  network.
 * 
 *  </p </li> <li>
 * 
 *  For other scenarios, you might choose a custom routing accelerator. With a custom routing accelerator, you can use
 *  application logic to directly map one or more users to a specific endpoint among many
 * 
 *  endpoints> </li> </ul> <b>
 * 
 *  Global Accelerator is a global service that supports endpoints in multiple AWS Regions but you must specify the US West
 *  (Oregon) Region to create or update
 * 
 *  accelerators> </b>
 * 
 *  By default, Global Accelerator provides you with two static IP addresses that you associate with your accelerator. With
 *  a standard accelerator, instead of using the IP addresses that Global Accelerator provides, you can configure these
 *  entry points to be IPv4 addresses from your own IP address ranges that you bring to Global Accelerator. The static IP
 *  addresses are anycast from the AWS edge network. For a standard accelerator, they distribute incoming application
 *  traffic across multiple endpoint resources in multiple AWS Regions, which increases the availability of your
 *  applications. Endpoints for standard accelerators can be Network Load Balancers, Application Load Balancers, Amazon EC2
 *  instances, or Elastic IP addresses that are located in one AWS Region or multiple Regions. For custom routing
 *  accelerators, you map traffic that arrives to the static IP addresses to specific Amazon EC2 servers in endpoints that
 *  are virtual private cloud (VPC)
 * 
 *  subnets> <b>
 * 
 *  The static IP addresses remain assigned to your accelerator for as long as it exists, even if you disable the
 *  accelerator and it no longer accepts or routes traffic. However, when you <i>delete</i> an accelerator, you lose the
 *  static IP addresses that are assigned to it, so you can no longer route traffic by using them. You can use IAM policies
 *  like tag-based permissions with Global Accelerator to limit the users who have permissions to delete an accelerator. For
 *  more information, see <a
 *  href="https://docs.aws.amazon.com/global-accelerator/latest/dg/access-control-manage-access-tag-policies.html">Tag-based
 * 
 *  policies</a>> </b>
 * 
 *  For standard accelerators, Global Accelerator uses the AWS global network to route traffic to the optimal regional
 *  endpoint based on health, client location, and policies that you configure. The service reacts instantly to changes in
 *  health or configuration to ensure that internet traffic from clients is always directed to healthy
 * 
 *  endpoints>
 * 
 *  For a list of the AWS Regions where Global Accelerator and other services are currently supported, see the <a
 *  href="https://docs.aws.amazon.com/about-aws/global-infrastructure/regional-product-services/">AWS Region
 * 
 *  Table</a>>
 * 
 *  AWS Global Accelerator includes the following
 * 
 *  components> <dl> <dt>Static IP addresses</dt> <dd>
 * 
 *  Global Accelerator provides you with a set of two static IP addresses that are anycast from the AWS edge network. If you
 *  bring your own IP address range to AWS (BYOIP) to use with a standard accelerator, you can instead assign IP addresses
 *  from your own pool to use with your accelerator. For more information, see <a
 *  href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html"> Bring your own IP addresses (BYOIP) in
 *  AWS Global
 * 
 *  Accelerator</a>>
 * 
 *  The IP addresses serve as single fixed entry points for your clients. If you already have Elastic Load Balancing load
 *  balancers, Amazon EC2 instances, or Elastic IP address resources set up for your applications, you can easily add those
 *  to a standard accelerator in Global Accelerator. This allows Global Accelerator to use static IP addresses to access the
 * 
 *  resources>
 * 
 *  The static IP addresses remain assigned to your accelerator for as long as it exists, even if you disable the
 *  accelerator and it no longer accepts or routes traffic. However, when you <i>delete</i> an accelerator, you lose the
 *  static IP addresses that are assigned to it, so you can no longer route traffic by using them. You can use IAM policies
 *  like tag-based permissions with Global Accelerator to delete an accelerator. For more information, see <a
 *  href="https://docs.aws.amazon.com/global-accelerator/latest/dg/access-control-manage-access-tag-policies.html">Tag-based
 * 
 *  policies</a>> </dd> <dt>Accelerator</dt> <dd>
 * 
 *  An accelerator directs traffic to endpoints over the AWS global network to improve the performance of your internet
 *  applications. Each accelerator includes one or more
 * 
 *  listeners>
 * 
 *  There are two types of
 * 
 *  accelerators> <ul> <li>
 * 
 *  A <i>standard</i> accelerator directs traffic to the optimal AWS endpoint based on several factors, including the user’s
 *  location, the health of the endpoint, and the endpoint weights that you configure. This improves the availability and
 *  performance of your applications. Endpoints can be Network Load Balancers, Application Load Balancers, Amazon EC2
 *  instances, or Elastic IP
 * 
 *  addresses> </li> <li>
 * 
 *  A <i>custom routing</i> accelerator directs traffic to one of possibly thousands of Amazon EC2 instances running in a
 *  single or multiple virtual private clouds (VPCs). With custom routing, listener ports are mapped to statically associate
 *  port ranges with VPC subnets, which allows Global Accelerator to determine an EC2 instance IP address at the time of
 *  connection. By default, all port mapping destinations in a VPC subnet can't receive traffic. You can choose to configure
 *  all destinations in the subnet to receive traffic, or to specify individual port mappings that can receive
 * 
 *  traffic> </li> </ul>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/global-accelerator/latest/dg/introduction-accelerator-types.html">Types of
 * 
 *  accelerators</a>> </dd> <dt>DNS name</dt> <dd>
 * 
 *  Global Accelerator assigns each accelerator a default Domain Name System (DNS) name, similar to
 *  <code>a1234567890abcdef.awsglobalaccelerator.com</code>, that points to the static IP addresses that Global Accelerator
 *  assigns to you or that you choose from your own IP address range. Depending on the use case, you can use your
 *  accelerator's static IP addresses or DNS name to route traffic to your accelerator, or set up DNS records to route
 *  traffic using your own custom domain
 * 
 *  name> </dd> <dt>Network zone</dt> <dd>
 * 
 *  A network zone services the static IP addresses for your accelerator from a unique IP subnet. Similar to an AWS
 *  Availability Zone, a network zone is an isolated unit with its own set of physical infrastructure. When you configure an
 *  accelerator, by default, Global Accelerator allocates two IPv4 addresses for it. If one IP address from a network zone
 *  becomes unavailable due to IP address blocking by certain client networks, or network disruptions, then client
 *  applications can retry on the healthy static IP address from the other isolated network
 * 
 *  zone> </dd> <dt>Listener</dt> <dd>
 * 
 *  A listener processes inbound connections from clients to Global Accelerator, based on the port (or port range) and
 *  protocol (or protocols) that you configure. A listener can be configured for TCP, UDP, or both TCP and UDP protocols.
 *  Each listener has one or more endpoint groups associated with it, and traffic is forwarded to endpoints in one of the
 *  groups. You associate endpoint groups with listeners by specifying the Regions that you want to distribute traffic to.
 *  With a standard accelerator, traffic is distributed to optimal endpoints within the endpoint groups associated with a
 * 
 *  listener> </dd> <dt>Endpoint group</dt> <dd>
 * 
 *  Each endpoint group is associated with a specific AWS Region. Endpoint groups include one or more endpoints in the
 *  Region. With a standard accelerator, you can increase or reduce the percentage of traffic that would be otherwise
 *  directed to an endpoint group by adjusting a setting called a <i>traffic dial</i>. The traffic dial lets you easily do
 *  performance testing or blue/green deployment testing, for example, for new releases across different AWS Regions.
 * 
 *  </p </dd> <dt>Endpoint</dt> <dd>
 * 
 *  An endpoint is a resource that Global Accelerator directs traffic
 * 
 *  to>
 * 
 *  Endpoints for standard accelerators can be Network Load Balancers, Application Load Balancers, Amazon EC2 instances, or
 *  Elastic IP addresses. An Application Load Balancer endpoint can be internet-facing or internal. Traffic for standard
 *  accelerators is routed to endpoints based on the health of the endpoint along with configuration options that you
 *  choose, such as endpoint weights. For each endpoint, you can configure weights, which are numbers that you can use to
 *  specify the proportion of traffic to route to each one. This can be useful, for example, to do performance testing
 *  within a
 * 
 *  Region>
 * 
 *  Endpoints for custom routing accelerators are virtual private cloud (VPC) subnets with one or many EC2
 *
 * \sa GlobalAcceleratorClient::listCustomRoutingPortMappings
 */

/*!
 * Constructs a ListCustomRoutingPortMappingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCustomRoutingPortMappingsResponse::ListCustomRoutingPortMappingsResponse(
        const ListCustomRoutingPortMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlobalAcceleratorResponse(new ListCustomRoutingPortMappingsResponsePrivate(this), parent)
{
    setRequest(new ListCustomRoutingPortMappingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCustomRoutingPortMappingsRequest * ListCustomRoutingPortMappingsResponse::request() const
{
    Q_D(const ListCustomRoutingPortMappingsResponse);
    return static_cast<const ListCustomRoutingPortMappingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlobalAccelerator ListCustomRoutingPortMappings \a response.
 */
void ListCustomRoutingPortMappingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCustomRoutingPortMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlobalAccelerator::ListCustomRoutingPortMappingsResponsePrivate
 * \brief The ListCustomRoutingPortMappingsResponsePrivate class provides private implementation for ListCustomRoutingPortMappingsResponse.
 * \internal
 *
 * \inmodule QtAwsGlobalAccelerator
 */

/*!
 * Constructs a ListCustomRoutingPortMappingsResponsePrivate object with public implementation \a q.
 */
ListCustomRoutingPortMappingsResponsePrivate::ListCustomRoutingPortMappingsResponsePrivate(
    ListCustomRoutingPortMappingsResponse * const q) : GlobalAcceleratorResponsePrivate(q)
{

}

/*!
 * Parses a GlobalAccelerator ListCustomRoutingPortMappings response element from \a xml.
 */
void ListCustomRoutingPortMappingsResponsePrivate::parseListCustomRoutingPortMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCustomRoutingPortMappingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlobalAccelerator
} // namespace QtAws
