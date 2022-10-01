// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "globalacceleratorclient.h"
#include "globalacceleratorclient_p.h"

#include "core/awssignaturev4.h"
#include "addcustomroutingendpointsrequest.h"
#include "addcustomroutingendpointsresponse.h"
#include "advertisebyoipcidrrequest.h"
#include "advertisebyoipcidrresponse.h"
#include "allowcustomroutingtrafficrequest.h"
#include "allowcustomroutingtrafficresponse.h"
#include "createacceleratorrequest.h"
#include "createacceleratorresponse.h"
#include "createcustomroutingacceleratorrequest.h"
#include "createcustomroutingacceleratorresponse.h"
#include "createcustomroutingendpointgrouprequest.h"
#include "createcustomroutingendpointgroupresponse.h"
#include "createcustomroutinglistenerrequest.h"
#include "createcustomroutinglistenerresponse.h"
#include "createendpointgrouprequest.h"
#include "createendpointgroupresponse.h"
#include "createlistenerrequest.h"
#include "createlistenerresponse.h"
#include "deleteacceleratorrequest.h"
#include "deleteacceleratorresponse.h"
#include "deletecustomroutingacceleratorrequest.h"
#include "deletecustomroutingacceleratorresponse.h"
#include "deletecustomroutingendpointgrouprequest.h"
#include "deletecustomroutingendpointgroupresponse.h"
#include "deletecustomroutinglistenerrequest.h"
#include "deletecustomroutinglistenerresponse.h"
#include "deleteendpointgrouprequest.h"
#include "deleteendpointgroupresponse.h"
#include "deletelistenerrequest.h"
#include "deletelistenerresponse.h"
#include "denycustomroutingtrafficrequest.h"
#include "denycustomroutingtrafficresponse.h"
#include "deprovisionbyoipcidrrequest.h"
#include "deprovisionbyoipcidrresponse.h"
#include "describeacceleratorrequest.h"
#include "describeacceleratorresponse.h"
#include "describeacceleratorattributesrequest.h"
#include "describeacceleratorattributesresponse.h"
#include "describecustomroutingacceleratorrequest.h"
#include "describecustomroutingacceleratorresponse.h"
#include "describecustomroutingacceleratorattributesrequest.h"
#include "describecustomroutingacceleratorattributesresponse.h"
#include "describecustomroutingendpointgrouprequest.h"
#include "describecustomroutingendpointgroupresponse.h"
#include "describecustomroutinglistenerrequest.h"
#include "describecustomroutinglistenerresponse.h"
#include "describeendpointgrouprequest.h"
#include "describeendpointgroupresponse.h"
#include "describelistenerrequest.h"
#include "describelistenerresponse.h"
#include "listacceleratorsrequest.h"
#include "listacceleratorsresponse.h"
#include "listbyoipcidrsrequest.h"
#include "listbyoipcidrsresponse.h"
#include "listcustomroutingacceleratorsrequest.h"
#include "listcustomroutingacceleratorsresponse.h"
#include "listcustomroutingendpointgroupsrequest.h"
#include "listcustomroutingendpointgroupsresponse.h"
#include "listcustomroutinglistenersrequest.h"
#include "listcustomroutinglistenersresponse.h"
#include "listcustomroutingportmappingsrequest.h"
#include "listcustomroutingportmappingsresponse.h"
#include "listcustomroutingportmappingsbydestinationrequest.h"
#include "listcustomroutingportmappingsbydestinationresponse.h"
#include "listendpointgroupsrequest.h"
#include "listendpointgroupsresponse.h"
#include "listlistenersrequest.h"
#include "listlistenersresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "provisionbyoipcidrrequest.h"
#include "provisionbyoipcidrresponse.h"
#include "removecustomroutingendpointsrequest.h"
#include "removecustomroutingendpointsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateacceleratorrequest.h"
#include "updateacceleratorresponse.h"
#include "updateacceleratorattributesrequest.h"
#include "updateacceleratorattributesresponse.h"
#include "updatecustomroutingacceleratorrequest.h"
#include "updatecustomroutingacceleratorresponse.h"
#include "updatecustomroutingacceleratorattributesrequest.h"
#include "updatecustomroutingacceleratorattributesresponse.h"
#include "updatecustomroutinglistenerrequest.h"
#include "updatecustomroutinglistenerresponse.h"
#include "updateendpointgrouprequest.h"
#include "updateendpointgroupresponse.h"
#include "updatelistenerrequest.h"
#include "updatelistenerresponse.h"
#include "withdrawbyoipcidrrequest.h"
#include "withdrawbyoipcidrresponse.h"

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
 *  <fullname>Global Accelerator</fullname>
 * 
 *  This is the <i>Global Accelerator API Reference</i>. This guide is for developers who need detailed information about
 *  Global Accelerator API actions, data types, and errors. For more information about Global Accelerator features, see the
 *  <a href="https://docs.aws.amazon.com/global-accelerator/latest/dg/what-is-global-accelerator.html">Global Accelerator
 *  Developer
 * 
 *  Guide</a>>
 * 
 *  Global Accelerator is a service in which you create <i>accelerators</i> to improve the performance of your applications
 *  for local and global users. Depending on the type of accelerator you choose, you can gain additional benefits.
 * 
 *  </p <ul> <li>
 * 
 *  By using a standard accelerator, you can improve availability of your internet applications that are used by a global
 *  audience. With a standard accelerator, Global Accelerator directs traffic to optimal endpoints over the Amazon Web
 *  Services global network.
 * 
 *  </p </li> <li>
 * 
 *  For other scenarios, you might choose a custom routing accelerator. With a custom routing accelerator, you can use
 *  application logic to directly map one or more users to a specific endpoint among many
 * 
 *  endpoints> </li> </ul> <b>
 * 
 *  Global Accelerator is a global service that supports endpoints in multiple Amazon Web Services Regions but you must
 *  specify the US West (Oregon) Region to create, update, or otherwise work with accelerators. That is, for example,
 *  specify <code>--region us-west-2</code> on AWS CLI
 * 
 *  commands> </b>
 * 
 *  By default, Global Accelerator provides you with static IP addresses that you associate with your accelerator. The
 *  static IP addresses are anycast from the Amazon Web Services edge network. For IPv4, Global Accelerator provides two
 *  static IPv4 addresses. For dual-stack, Global Accelerator provides a total of four addresses: two static IPv4 addresses
 *  and two static IPv6 addresses. With a standard accelerator for IPv4, instead of using the addresses that Global
 *  Accelerator provides, you can configure these entry points to be IPv4 addresses from your own IP address ranges that you
 *  bring toGlobal Accelerator (BYOIP).
 * 
 *  </p
 * 
 *  For a standard accelerator, they distribute incoming application traffic across multiple endpoint resources in multiple
 *  Amazon Web Services Regions , which increases the availability of your applications. Endpoints for standard accelerators
 *  can be Network Load Balancers, Application Load Balancers, Amazon EC2 instances, or Elastic IP addresses that are
 *  located in one Amazon Web Services Region or multiple Amazon Web Services Regions. For custom routing accelerators, you
 *  map traffic that arrives to the static IP addresses to specific Amazon EC2 servers in endpoints that are virtual private
 *  cloud (VPC)
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
 *  For standard accelerators, Global Accelerator uses the Amazon Web Services global network to route traffic to the
 *  optimal regional endpoint based on health, client location, and policies that you configure. The service reacts
 *  instantly to changes in health or configuration to ensure that internet traffic from clients is always directed to
 *  healthy
 * 
 *  endpoints>
 * 
 *  For more information about understanding and using Global Accelerator, see the <a
 *  href="https://docs.aws.amazon.com/global-accelerator/latest/dg/what-is-global-accelerator.html">Global Accelerator
 *  Developer
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
 * AddCustomRoutingEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate a virtual private cloud (VPC) subnet endpoint with your custom routing
 *
 * accelerator>
 *
 * The listener port range must be large enough to support the number of IP addresses that can be specified in your subnet.
 * The number of ports required is: subnet size times the number of ports per destination EC2 instances. For example, a
 * subnet defined as /24 requires a listener port range of at least 255 ports.
 *
 * </p
 *
 * Note: You must have enough remaining listener ports available to map to the subnet ports, or the call will fail with a
 *
 * LimitExceededException>
 *
 * By default, all destinations in a subnet in a custom routing accelerator cannot receive traffic. To enable all
 * destinations to receive traffic, or to specify individual port mappings that can receive traffic, see the <a
 * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_AllowCustomRoutingTraffic.html">
 * AllowCustomRoutingTraffic</a>
 */
AddCustomRoutingEndpointsResponse * GlobalAcceleratorClient::addCustomRoutingEndpoints(const AddCustomRoutingEndpointsRequest &request)
{
    return qobject_cast<AddCustomRoutingEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * AdvertiseByoipCidrResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Advertises an IPv4 address range that is provisioned for use with your Amazon Web Services resources through bring your
 * own IP addresses (BYOIP). It can take a few minutes before traffic to the specified addresses starts routing to Amazon
 * Web Services because of propagation delays.
 *
 * </p
 *
 * To stop advertising the BYOIP address range, use <a
 * href="https://docs.aws.amazon.com/global-accelerator/latest/api/WithdrawByoipCidr.html">
 *
 * WithdrawByoipCidr</a>>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring your
 * own IP addresses (BYOIP)</a> in the <i>Global Accelerator Developer
 */
AdvertiseByoipCidrResponse * GlobalAcceleratorClient::advertiseByoipCidr(const AdvertiseByoipCidrRequest &request)
{
    return qobject_cast<AdvertiseByoipCidrResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * AllowCustomRoutingTrafficResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specify the Amazon EC2 instance (destination) IP addresses and ports for a VPC subnet endpoint that can receive traffic
 * for a custom routing accelerator. You can allow traffic to all destinations in the subnet endpoint, or allow traffic to
 * a specified list of destination IP addresses and ports in the subnet. Note that you cannot specify IP addresses or ports
 * outside of the range that you configured for the endpoint
 *
 * group>
 *
 * After you make changes, you can verify that the updates are complete by checking the status of your accelerator: the
 * status changes from IN_PROGRESS to
 */
AllowCustomRoutingTrafficResponse * GlobalAcceleratorClient::allowCustomRoutingTraffic(const AllowCustomRoutingTrafficRequest &request)
{
    return qobject_cast<AllowCustomRoutingTrafficResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * CreateAcceleratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an accelerator. An accelerator includes one or more listeners that process inbound connections and direct traffic
 * to one or more endpoint groups, each of which includes endpoints, such as Network Load Balancers.
 *
 * </p <b>
 *
 * Global Accelerator is a global service that supports endpoints in multiple Amazon Web Services Regions but you must
 * specify the US West (Oregon) Region to create, update, or otherwise work with accelerators. That is, for example,
 * specify <code>--region us-west-2</code> on AWS CLI
 */
CreateAcceleratorResponse * GlobalAcceleratorClient::createAccelerator(const CreateAcceleratorRequest &request)
{
    return qobject_cast<CreateAcceleratorResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * CreateCustomRoutingAcceleratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a custom routing accelerator. A custom routing accelerator directs traffic to one of possibly thousands of Amazon
 * EC2 instance destinations running in a single or multiple virtual private clouds (VPC) subnet
 *
 * endpoints>
 *
 * Be aware that, by default, all destination EC2 instances in a VPC subnet endpoint cannot receive traffic. To enable all
 * destinations to receive traffic, or to specify individual port mappings that can receive traffic, see the <a
 * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_AllowCustomRoutingTraffic.html">
 * AllowCustomRoutingTraffic</a>
 *
 * operation> <b>
 *
 * Global Accelerator is a global service that supports endpoints in multiple Amazon Web Services Regions but you must
 * specify the US West (Oregon) Region to create, update, or otherwise work with accelerators. That is, for example,
 * specify <code>--region us-west-2</code> on AWS CLI
 */
CreateCustomRoutingAcceleratorResponse * GlobalAcceleratorClient::createCustomRoutingAccelerator(const CreateCustomRoutingAcceleratorRequest &request)
{
    return qobject_cast<CreateCustomRoutingAcceleratorResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * CreateCustomRoutingEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an endpoint group for the specified listener for a custom routing accelerator. An endpoint group is a collection
 * of endpoints in one Amazon Web Services Region.
 */
CreateCustomRoutingEndpointGroupResponse * GlobalAcceleratorClient::createCustomRoutingEndpointGroup(const CreateCustomRoutingEndpointGroupRequest &request)
{
    return qobject_cast<CreateCustomRoutingEndpointGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * CreateCustomRoutingListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a listener to process inbound connections from clients to a custom routing accelerator. Connections arrive to
 * assigned static IP addresses on the port range that you specify.
 */
CreateCustomRoutingListenerResponse * GlobalAcceleratorClient::createCustomRoutingListener(const CreateCustomRoutingListenerRequest &request)
{
    return qobject_cast<CreateCustomRoutingListenerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * CreateEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an endpoint group for the specified listener. An endpoint group is a collection of endpoints in one Amazon Web
 * Services Region. A resource must be valid and active when you add it as an
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
 * IP addresses on a port, port range, or list of port ranges that you specify.
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
 * Delete an accelerator. Before you can delete an accelerator, you must disable it and remove all dependent resources
 * (listeners and endpoint groups). To disable the accelerator, update the accelerator to set <code>Enabled</code> to
 *
 * false> <b>
 *
 * When you create an accelerator, by default, Global Accelerator provides you with a set of two static IP addresses.
 * Alternatively, you can bring your own IP address ranges to Global Accelerator and assign IP addresses from those ranges.
 *
 * </p
 *
 * The IP addresses are assigned to your accelerator for as long as it exists, even if you disable the accelerator and it
 * no longer accepts or routes traffic. However, when you <i>delete</i> an accelerator, you lose the static IP addresses
 * that are assigned to the accelerator, so you can no longer route traffic by using them. As a best practice, ensure that
 * you have permissions in place to avoid inadvertently deleting accelerators. You can use IAM policies with Global
 * Accelerator to limit the users who have permissions to delete an accelerator. For more information, see <a
 * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/auth-and-access-control.html">Identity and access
 * management</a> in the <i>Global Accelerator Developer
 */
DeleteAcceleratorResponse * GlobalAcceleratorClient::deleteAccelerator(const DeleteAcceleratorRequest &request)
{
    return qobject_cast<DeleteAcceleratorResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DeleteCustomRoutingAcceleratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a custom routing accelerator. Before you can delete an accelerator, you must disable it and remove all dependent
 * resources (listeners and endpoint groups). To disable the accelerator, update the accelerator to set
 * <code>Enabled</code> to
 *
 * false> <b>
 *
 * When you create a custom routing accelerator, by default, Global Accelerator provides you with a set of two static IP
 * addresses.
 *
 * </p
 *
 * The IP addresses are assigned to your accelerator for as long as it exists, even if you disable the accelerator and it
 * no longer accepts or routes traffic. However, when you <i>delete</i> an accelerator, you lose the static IP addresses
 * that are assigned to the accelerator, so you can no longer route traffic by using them. As a best practice, ensure that
 * you have permissions in place to avoid inadvertently deleting accelerators. You can use IAM policies with Global
 * Accelerator to limit the users who have permissions to delete an accelerator. For more information, see <a
 * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/auth-and-access-control.html">Identity and access
 * management</a> in the <i>Global Accelerator Developer
 */
DeleteCustomRoutingAcceleratorResponse * GlobalAcceleratorClient::deleteCustomRoutingAccelerator(const DeleteCustomRoutingAcceleratorRequest &request)
{
    return qobject_cast<DeleteCustomRoutingAcceleratorResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DeleteCustomRoutingEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an endpoint group from a listener for a custom routing
 */
DeleteCustomRoutingEndpointGroupResponse * GlobalAcceleratorClient::deleteCustomRoutingEndpointGroup(const DeleteCustomRoutingEndpointGroupRequest &request)
{
    return qobject_cast<DeleteCustomRoutingEndpointGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DeleteCustomRoutingListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a listener for a custom routing
 */
DeleteCustomRoutingListenerResponse * GlobalAcceleratorClient::deleteCustomRoutingListener(const DeleteCustomRoutingListenerRequest &request)
{
    return qobject_cast<DeleteCustomRoutingListenerResponse *>(send(request));
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
 * DenyCustomRoutingTrafficResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specify the Amazon EC2 instance (destination) IP addresses and ports for a VPC subnet endpoint that cannot receive
 * traffic for a custom routing accelerator. You can deny traffic to all destinations in the VPC endpoint, or deny traffic
 * to a specified list of destination IP addresses and ports. Note that you cannot specify IP addresses or ports outside of
 * the range that you configured for the endpoint
 *
 * group>
 *
 * After you make changes, you can verify that the updates are complete by checking the status of your accelerator: the
 * status changes from IN_PROGRESS to
 */
DenyCustomRoutingTrafficResponse * GlobalAcceleratorClient::denyCustomRoutingTraffic(const DenyCustomRoutingTrafficRequest &request)
{
    return qobject_cast<DenyCustomRoutingTrafficResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DeprovisionByoipCidrResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Releases the specified address range that you provisioned to use with your Amazon Web Services resources through bring
 * your own IP addresses (BYOIP) and deletes the corresponding address pool.
 *
 * </p
 *
 * Before you can release an address range, you must stop advertising it by using <a
 * href="https://docs.aws.amazon.com/global-accelerator/latest/api/WithdrawByoipCidr.html">WithdrawByoipCidr</a> and you
 * must not have any accelerators that are using static IP addresses allocated from its address range.
 *
 * </p
 *
 * For more information, see <a href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring your
 * own IP addresses (BYOIP)</a> in the <i>Global Accelerator Developer
 */
DeprovisionByoipCidrResponse * GlobalAcceleratorClient::deprovisionByoipCidr(const DeprovisionByoipCidrRequest &request)
{
    return qobject_cast<DeprovisionByoipCidrResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DescribeAcceleratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an accelerator.
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
 * Describe the attributes of an accelerator.
 */
DescribeAcceleratorAttributesResponse * GlobalAcceleratorClient::describeAcceleratorAttributes(const DescribeAcceleratorAttributesRequest &request)
{
    return qobject_cast<DescribeAcceleratorAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DescribeCustomRoutingAcceleratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe a custom routing accelerator.
 */
DescribeCustomRoutingAcceleratorResponse * GlobalAcceleratorClient::describeCustomRoutingAccelerator(const DescribeCustomRoutingAcceleratorRequest &request)
{
    return qobject_cast<DescribeCustomRoutingAcceleratorResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DescribeCustomRoutingAcceleratorAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe the attributes of a custom routing accelerator.
 */
DescribeCustomRoutingAcceleratorAttributesResponse * GlobalAcceleratorClient::describeCustomRoutingAcceleratorAttributes(const DescribeCustomRoutingAcceleratorAttributesRequest &request)
{
    return qobject_cast<DescribeCustomRoutingAcceleratorAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DescribeCustomRoutingEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an endpoint group for a custom routing accelerator.
 */
DescribeCustomRoutingEndpointGroupResponse * GlobalAcceleratorClient::describeCustomRoutingEndpointGroup(const DescribeCustomRoutingEndpointGroupRequest &request)
{
    return qobject_cast<DescribeCustomRoutingEndpointGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DescribeCustomRoutingListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The description of a listener for a custom routing
 */
DescribeCustomRoutingListenerResponse * GlobalAcceleratorClient::describeCustomRoutingListener(const DescribeCustomRoutingListenerRequest &request)
{
    return qobject_cast<DescribeCustomRoutingListenerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * DescribeEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an endpoint group.
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
 * Describe a listener.
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
 * List the accelerators for an Amazon Web Services account.
 */
ListAcceleratorsResponse * GlobalAcceleratorClient::listAccelerators(const ListAcceleratorsRequest &request)
{
    return qobject_cast<ListAcceleratorsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ListByoipCidrsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the IP address ranges that were specified in calls to <a
 * href="https://docs.aws.amazon.com/global-accelerator/latest/api/ProvisionByoipCidr.html">ProvisionByoipCidr</a>,
 * including the current state and a history of state
 */
ListByoipCidrsResponse * GlobalAcceleratorClient::listByoipCidrs(const ListByoipCidrsRequest &request)
{
    return qobject_cast<ListByoipCidrsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ListCustomRoutingAcceleratorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the custom routing accelerators for an Amazon Web Services account.
 */
ListCustomRoutingAcceleratorsResponse * GlobalAcceleratorClient::listCustomRoutingAccelerators(const ListCustomRoutingAcceleratorsRequest &request)
{
    return qobject_cast<ListCustomRoutingAcceleratorsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ListCustomRoutingEndpointGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the endpoint groups that are associated with a listener for a custom routing accelerator.
 */
ListCustomRoutingEndpointGroupsResponse * GlobalAcceleratorClient::listCustomRoutingEndpointGroups(const ListCustomRoutingEndpointGroupsRequest &request)
{
    return qobject_cast<ListCustomRoutingEndpointGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ListCustomRoutingListenersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the listeners for a custom routing accelerator.
 */
ListCustomRoutingListenersResponse * GlobalAcceleratorClient::listCustomRoutingListeners(const ListCustomRoutingListenersRequest &request)
{
    return qobject_cast<ListCustomRoutingListenersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ListCustomRoutingPortMappingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a complete mapping from the public accelerator IP address and port to destination EC2 instance IP addresses and
 * ports in the virtual public cloud (VPC) subnet endpoint for a custom routing accelerator. For each subnet endpoint that
 * you add, Global Accelerator creates a new static port mapping for the accelerator. The port mappings don't change after
 * Global Accelerator generates them, so you can retrieve and cache the full mapping on your servers.
 *
 * </p
 *
 * If you remove a subnet from your accelerator, Global Accelerator removes (reclaims) the port mappings. If you add a
 * subnet to your accelerator, Global Accelerator creates new port mappings (the existing ones don't change). If you add or
 * remove EC2 instances in your subnet, the port mappings don't change, because the mappings are created when you add the
 * subnet to Global
 *
 * Accelerator>
 *
 * The mappings also include a flag for each destination denoting which destination IP addresses and ports are allowed or
 * denied
 */
ListCustomRoutingPortMappingsResponse * GlobalAcceleratorClient::listCustomRoutingPortMappings(const ListCustomRoutingPortMappingsRequest &request)
{
    return qobject_cast<ListCustomRoutingPortMappingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ListCustomRoutingPortMappingsByDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the port mappings for a specific EC2 instance (destination) in a VPC subnet endpoint. The response is the mappings
 * for one destination IP address. This is useful when your subnet endpoint has mappings that span multiple custom routing
 * accelerators in your account, or for scenarios where you only want to list the port mappings for a specific destination
 */
ListCustomRoutingPortMappingsByDestinationResponse * GlobalAcceleratorClient::listCustomRoutingPortMappingsByDestination(const ListCustomRoutingPortMappingsByDestinationRequest &request)
{
    return qobject_cast<ListCustomRoutingPortMappingsByDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ListEndpointGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the endpoint groups that are associated with a listener.
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
 * List the listeners for an accelerator.
 */
ListListenersResponse * GlobalAcceleratorClient::listListeners(const ListListenersRequest &request)
{
    return qobject_cast<ListListenersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all tags for an accelerator.
 *
 * </p
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging in Global
 * Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.
 */
ListTagsForResourceResponse * GlobalAcceleratorClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * ProvisionByoipCidrResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provisions an IP address range to use with your Amazon Web Services resources through bring your own IP addresses
 * (BYOIP) and creates a corresponding address pool. After the address range is provisioned, it is ready to be advertised
 * using <a href="https://docs.aws.amazon.com/global-accelerator/latest/api/AdvertiseByoipCidr.html">
 *
 * AdvertiseByoipCidr</a>>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring your
 * own IP addresses (BYOIP)</a> in the <i>Global Accelerator Developer
 */
ProvisionByoipCidrResponse * GlobalAcceleratorClient::provisionByoipCidr(const ProvisionByoipCidrRequest &request)
{
    return qobject_cast<ProvisionByoipCidrResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * RemoveCustomRoutingEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove endpoints from a custom routing
 */
RemoveCustomRoutingEndpointsResponse * GlobalAcceleratorClient::removeCustomRoutingEndpoints(const RemoveCustomRoutingEndpointsRequest &request)
{
    return qobject_cast<RemoveCustomRoutingEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add tags to an accelerator resource.
 *
 * </p
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging in Global
 * Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.
 */
TagResourceResponse * GlobalAcceleratorClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove tags from a Global Accelerator resource. When you specify a tag key, the action removes both that key and its
 * associated value. The operation succeeds even if you attempt to remove tags from an accelerator that was already
 *
 * removed>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging in Global
 * Accelerator</a> in the <i>Global Accelerator Developer
 */
UntagResourceResponse * GlobalAcceleratorClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * UpdateAcceleratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an accelerator.
 *
 * </p <b>
 *
 * Global Accelerator is a global service that supports endpoints in multiple Amazon Web Services Regions but you must
 * specify the US West (Oregon) Region to create, update, or otherwise work with accelerators. That is, for example,
 * specify <code>--region us-west-2</code> on AWS CLI
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
 * Update the attributes for an accelerator.
 */
UpdateAcceleratorAttributesResponse * GlobalAcceleratorClient::updateAcceleratorAttributes(const UpdateAcceleratorAttributesRequest &request)
{
    return qobject_cast<UpdateAcceleratorAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * UpdateCustomRoutingAcceleratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a custom routing accelerator.
 */
UpdateCustomRoutingAcceleratorResponse * GlobalAcceleratorClient::updateCustomRoutingAccelerator(const UpdateCustomRoutingAcceleratorRequest &request)
{
    return qobject_cast<UpdateCustomRoutingAcceleratorResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * UpdateCustomRoutingAcceleratorAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the attributes for a custom routing accelerator.
 */
UpdateCustomRoutingAcceleratorAttributesResponse * GlobalAcceleratorClient::updateCustomRoutingAcceleratorAttributes(const UpdateCustomRoutingAcceleratorAttributesRequest &request)
{
    return qobject_cast<UpdateCustomRoutingAcceleratorAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * UpdateCustomRoutingListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a listener for a custom routing accelerator.
 */
UpdateCustomRoutingListenerResponse * GlobalAcceleratorClient::updateCustomRoutingListener(const UpdateCustomRoutingListenerRequest &request)
{
    return qobject_cast<UpdateCustomRoutingListenerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * UpdateEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an endpoint group. A resource must be valid and active when you add it as an
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
 * Update a listener.
 */
UpdateListenerResponse * GlobalAcceleratorClient::updateListener(const UpdateListenerRequest &request)
{
    return qobject_cast<UpdateListenerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlobalAcceleratorClient service, and returns a pointer to an
 * WithdrawByoipCidrResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops advertising an address range that is provisioned as an address pool. You can perform this operation at most once
 * every 10 seconds, even if you specify different address ranges each
 *
 * time>
 *
 * It can take a few minutes before traffic to the specified addresses stops routing to Amazon Web Services because of
 * propagation
 *
 * delays>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring your
 * own IP addresses (BYOIP)</a> in the <i>Global Accelerator Developer
 */
WithdrawByoipCidrResponse * GlobalAcceleratorClient::withdrawByoipCidr(const WithdrawByoipCidrRequest &request)
{
    return qobject_cast<WithdrawByoipCidrResponse *>(send(request));
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
