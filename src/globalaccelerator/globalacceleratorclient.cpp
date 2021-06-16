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

#include "globalacceleratorclient.h"
#include "globalacceleratorclient_p.h"

#include "core/awssignaturev4.h"
#include "createacceleratorrequest.h"
#include "createacceleratorresponse.h"
#include "createendpointgrouprequest.h"
#include "createendpointgroupresponse.h"
#include "createlistenerrequest.h"
#include "createlistenerresponse.h"
#include "deleteacceleratorrequest.h"
#include "deleteacceleratorresponse.h"
#include "deleteendpointgrouprequest.h"
#include "deleteendpointgroupresponse.h"
#include "deletelistenerrequest.h"
#include "deletelistenerresponse.h"
#include "describeacceleratorrequest.h"
#include "describeacceleratorresponse.h"
#include "describeacceleratorattributesrequest.h"
#include "describeacceleratorattributesresponse.h"
#include "describeendpointgrouprequest.h"
#include "describeendpointgroupresponse.h"
#include "describelistenerrequest.h"
#include "describelistenerresponse.h"
#include "listacceleratorsrequest.h"
#include "listacceleratorsresponse.h"
#include "listendpointgroupsrequest.h"
#include "listendpointgroupsresponse.h"
#include "listlistenersrequest.h"
#include "listlistenersresponse.h"
#include "updateacceleratorrequest.h"
#include "updateacceleratorresponse.h"
#include "updateacceleratorattributesrequest.h"
#include "updateacceleratorattributesresponse.h"
#include "updateendpointgrouprequest.h"
#include "updateendpointgroupresponse.h"
#include "updatelistenerrequest.h"
#include "updatelistenerresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::GlobalAccelerator
 * \brief Contains classess for accessing AWS Global Accelerator.
 *
 * \inmodule QtAwsGlobalAccelerator
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace GlobalAccelerator {

/*!
 * \class QtAws::GlobalAccelerator::GlobalAcceleratorClient
 * \brief The GlobalAcceleratorClient class provides access to the AWS Global Accelerator service.
 *
 * \ingroup aws-clients
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
 */

/*!
 * \brief Constructs a GlobalAcceleratorClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GlobalAcceleratorClient::GlobalAcceleratorClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GlobalAcceleratorClientPrivate(this), parent)
{
    Q_D(GlobalAcceleratorClient);
    d->apiVersion = QStringLiteral("2018-08-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("globalaccelerator");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Global Accelerator");
    d->serviceName = QStringLiteral("globalaccelerator");
}

/*!
 * \overload GlobalAcceleratorClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GlobalAcceleratorClient::GlobalAcceleratorClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GlobalAcceleratorClientPrivate(this), parent)
{
    Q_D(GlobalAcceleratorClient);
    d->apiVersion = QStringLiteral("2018-08-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("globalaccelerator");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Global Accelerator");
    d->serviceName = QStringLiteral("globalaccelerator");
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * CreateAcceleratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an accelerator. An accelerator includes one or more listeners that process inbound connections and direct traffic
 * to one or more endpoint groups, each of which includes endpoints, such as Network Load Balancers. To see an AWS CLI
 * example of creating an accelerator, scroll down to
 */
CreateAcceleratorResponse * GlobalAcceleratorClient::createAccelerator(const CreateAcceleratorRequest &request)
{
    return qobject_cast<CreateAcceleratorResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * CreateEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an endpoint group for the specified listener. An endpoint group is a collection of endpoints in one AWS Region.
 * To see an AWS CLI example of creating an endpoint group, scroll down to
 */
CreateEndpointGroupResponse * GlobalAcceleratorClient::createEndpointGroup(const CreateEndpointGroupRequest &request)
{
    return qobject_cast<CreateEndpointGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * CreateListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a listener to process inbound connections from clients to an accelerator. Connections arrive to assigned static
 * IP addresses on a port, port range, or list of port ranges that you specify. To see an AWS CLI example of creating a
 * listener, scroll down to
 */
CreateListenerResponse * GlobalAcceleratorClient::createListener(const CreateListenerRequest &request)
{
    return qobject_cast<CreateListenerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DeleteAcceleratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an accelerator. Note: before you can delete an accelerator, you must disable it and remove all dependent
 * resources (listeners and endpoint
 */
DeleteAcceleratorResponse * GlobalAcceleratorClient::deleteAccelerator(const DeleteAcceleratorRequest &request)
{
    return qobject_cast<DeleteAcceleratorResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DeleteEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an endpoint group from a
 */
DeleteEndpointGroupResponse * GlobalAcceleratorClient::deleteEndpointGroup(const DeleteEndpointGroupRequest &request)
{
    return qobject_cast<DeleteEndpointGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DeleteListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a listener from an
 */
DeleteListenerResponse * GlobalAcceleratorClient::deleteListener(const DeleteListenerRequest &request)
{
    return qobject_cast<DeleteListenerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DescribeAcceleratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an accelerator. To see an AWS CLI example of describing an accelerator, scroll down to
 */
DescribeAcceleratorResponse * GlobalAcceleratorClient::describeAccelerator(const DescribeAcceleratorRequest &request)
{
    return qobject_cast<DescribeAcceleratorResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DescribeAcceleratorAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe the attributes of an
 */
DescribeAcceleratorAttributesResponse * GlobalAcceleratorClient::describeAcceleratorAttributes(const DescribeAcceleratorAttributesRequest &request)
{
    return qobject_cast<DescribeAcceleratorAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DescribeEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an endpoint
 */
DescribeEndpointGroupResponse * GlobalAcceleratorClient::describeEndpointGroup(const DescribeEndpointGroupRequest &request)
{
    return qobject_cast<DescribeEndpointGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DescribeListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe a
 */
DescribeListenerResponse * GlobalAcceleratorClient::describeListener(const DescribeListenerRequest &request)
{
    return qobject_cast<DescribeListenerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ListAcceleratorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the accelerators for an AWS
 */
ListAcceleratorsResponse * GlobalAcceleratorClient::listAccelerators(const ListAcceleratorsRequest &request)
{
    return qobject_cast<ListAcceleratorsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ListEndpointGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the endpoint groups that are associated with a
 */
ListEndpointGroupsResponse * GlobalAcceleratorClient::listEndpointGroups(const ListEndpointGroupsRequest &request)
{
    return qobject_cast<ListEndpointGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ListListenersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the listeners for an
 */
ListListenersResponse * GlobalAcceleratorClient::listListeners(const ListListenersRequest &request)
{
    return qobject_cast<ListListenersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * UpdateAcceleratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an
 */
UpdateAcceleratorResponse * GlobalAcceleratorClient::updateAccelerator(const UpdateAcceleratorRequest &request)
{
    return qobject_cast<UpdateAcceleratorResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * UpdateAcceleratorAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the attributes for an accelerator. To see an AWS CLI example of updating an accelerator to enable flow logs,
 * scroll down to
 */
UpdateAcceleratorAttributesResponse * GlobalAcceleratorClient::updateAcceleratorAttributes(const UpdateAcceleratorAttributesRequest &request)
{
    return qobject_cast<UpdateAcceleratorAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * UpdateEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an endpoint group. To see an AWS CLI example of updating an endpoint group, scroll down to
 */
UpdateEndpointGroupResponse * GlobalAcceleratorClient::updateEndpointGroup(const UpdateEndpointGroupRequest &request)
{
    return qobject_cast<UpdateEndpointGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * UpdateListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a
 */
UpdateListenerResponse * GlobalAcceleratorClient::updateListener(const UpdateListenerRequest &request)
{
    return qobject_cast<UpdateListenerResponse *>(send(request));
}

/*!
 * \class QtAws::GlobalAccelerator::GlobalAcceleratorClientPrivate
 * \brief The GlobalAcceleratorClientPrivate class provides private implementation for GlobalAcceleratorClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGlobalAccelerator
 */

/*!
 * Constructs a GlobalAcceleratorClientPrivate object with public implementation \a q.
 */
GlobalAcceleratorClientPrivate::GlobalAcceleratorClientPrivate(GlobalAcceleratorClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace GlobalAccelerator
} // namespace QtAws
