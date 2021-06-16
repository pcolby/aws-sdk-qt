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

#include "describeacceleratorattributesresponse.h"
#include "describeacceleratorattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlobalAccelerator {

/*!
 * \class QtAws::GlobalAccelerator::DescribeAcceleratorAttributesResponse
 * \brief The DescribeAcceleratorAttributesResponse class provides an interace for GlobalAccelerator DescribeAcceleratorAttributes responses.
 *
 * \inmodule QtAwsGlobalAccelerator
 *
 *  <fullname>AWS Global Accelerator</fullname>
 * 
 *  This is the <i>AWS Global Accelerator API Reference</i>. This guide is for developers who need detailed information
 *  about AWS Global Accelerator API actions, data types, and errors. For more information about Global Accelerator
 *  features, see the <a href="https://docs.aws.amazon.com/global-accelerator/latest/dg/Welcome.html">AWS Global Accelerator
 *  Developer Guide</a>.
 * 
 *  </p
 * 
 *  AWS Global Accelerator is a network layer service in which you create accelerators to improve availability and
 *  performance for internet applications used by a global audience.
 * 
 *  </p
 * 
 *  Global Accelerator provides you with static IP addresses that you associate with your accelerator. These IP addresses
 *  are anycast from the AWS edge network and distribute incoming application traffic across multiple endpoint resources in
 *  multiple AWS Regions, which increases the availability of your applications. Endpoints can be Elastic IP addresses,
 *  Network Load Balancers, and Application Load Balancers that are located in one AWS Region or multiple
 * 
 *  Regions>
 * 
 *  Global Accelerator uses the AWS global network to route traffic to the optimal regional endpoint based on health, client
 *  location, and policies that you configure. The service reacts instantly to changes in health or configuration to ensure
 *  that internet traffic from clients is directed to only healthy
 * 
 *  endpoints>
 * 
 *  Global Accelerator includes components that work together to help you improve performance and availability for your
 * 
 *  applications> <dl> <dt>Static IP address</dt> <dd>
 * 
 *  AWS Global Accelerator provides you with a set of static IP addresses which are anycast from the AWS edge network and
 *  serve as the single fixed entry points for your clients. If you already have Elastic Load Balancing or Elastic IP
 *  address resources set up for your applications, you can easily add those to Global Accelerator to allow the resources to
 *  be accessed by a Global Accelerator static IP
 * 
 *  address> </dd> <dt>Accelerator</dt> <dd>
 * 
 *  An accelerator directs traffic to optimal endpoints over the AWS global network to improve availability and performance
 *  for your internet applications that have a global audience. Each accelerator includes one or more
 * 
 *  listeners> </dd> <dt>Network zone</dt> <dd>
 * 
 *  A network zone services the static IP addresses for your accelerator from a unique IP subnet. Similar to an AWS
 *  Availability Zone, a network zone is an isolated unit with its own set of physical infrastructure. When you configure an
 *  accelerator, Global Accelerator allocates two IPv4 addresses for it. If one IP address from a network zone becomes
 *  unavailable due to IP address blocking by certain client networks, or network disruptions, then client applications can
 *  retry on the healthy static IP address from the other isolated network
 * 
 *  zone> </dd> <dt>Listener</dt> <dd>
 * 
 *  A listener processes inbound connections from clients to Global Accelerator, based on the protocol and port that you
 *  configure. Each listener has one or more endpoint groups associated with it, and traffic is forwarded to endpoints in
 *  one of the groups. You associate endpoint groups with listeners by specifying the Regions that you want to distribute
 *  traffic to. Traffic is distributed to optimal endpoints within the endpoint groups associated with a
 * 
 *  listener> </dd> <dt>Endpoint group</dt> <dd>
 * 
 *  Each endpoint group is associated with a specific AWS Region. Endpoint groups include one or more endpoints in the
 *  Region. You can increase or reduce the percentage of traffic that would be otherwise directed to an endpoint group by
 *  adjusting a setting called a <i>traffic dial</i>. The traffic dial lets you easily do performance testing or blue/green
 *  deployment testing for new releases across different AWS Regions, for example.
 * 
 *  </p </dd> <dt>Endpoint</dt> <dd>
 * 
 *  An endpoint is an Elastic IP address, Network Load Balancer, or Application Load Balancer. Traffic is routed to
 *  endpoints based on several factors, including the geo-proximity to the user, the health of the endpoint, and the
 *  configuration options that you choose, such as endpoint weights. For each endpoint, you can configure weights, which are
 *  numbers that you can use to specify the proportion of traffic to route to each one. This can be useful, for example, to
 *  do performance testing within a
 *
 * \sa GlobalAcceleratorClient::describeAcceleratorAttributes
 */

/*!
 * Constructs a DescribeAcceleratorAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAcceleratorAttributesResponse::DescribeAcceleratorAttributesResponse(
        const DescribeAcceleratorAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlobalAcceleratorResponse(new DescribeAcceleratorAttributesResponsePrivate(this), parent)
{
    setRequest(new DescribeAcceleratorAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAcceleratorAttributesRequest * DescribeAcceleratorAttributesResponse::request() const
{
    Q_D(const DescribeAcceleratorAttributesResponse);
    return static_cast<const DescribeAcceleratorAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlobalAccelerator DescribeAcceleratorAttributes \a response.
 */
void DescribeAcceleratorAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAcceleratorAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlobalAccelerator::DescribeAcceleratorAttributesResponsePrivate
 * \brief The DescribeAcceleratorAttributesResponsePrivate class provides private implementation for DescribeAcceleratorAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsGlobalAccelerator
 */

/*!
 * Constructs a DescribeAcceleratorAttributesResponsePrivate object with public implementation \a q.
 */
DescribeAcceleratorAttributesResponsePrivate::DescribeAcceleratorAttributesResponsePrivate(
    DescribeAcceleratorAttributesResponse * const q) : GlobalAcceleratorResponsePrivate(q)
{

}

/*!
 * Parses a GlobalAccelerator DescribeAcceleratorAttributes response element from \a xml.
 */
void DescribeAcceleratorAttributesResponsePrivate::parseDescribeAcceleratorAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAcceleratorAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlobalAccelerator
} // namespace QtAws
