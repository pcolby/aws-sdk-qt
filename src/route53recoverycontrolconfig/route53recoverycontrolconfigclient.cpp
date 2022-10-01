// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "route53recoverycontrolconfigclient.h"
#include "route53recoverycontrolconfigclient_p.h"

#include "core/awssignaturev4.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "createcontrolpanelrequest.h"
#include "createcontrolpanelresponse.h"
#include "createroutingcontrolrequest.h"
#include "createroutingcontrolresponse.h"
#include "createsafetyrulerequest.h"
#include "createsafetyruleresponse.h"
#include "deleteclusterrequest.h"
#include "deleteclusterresponse.h"
#include "deletecontrolpanelrequest.h"
#include "deletecontrolpanelresponse.h"
#include "deleteroutingcontrolrequest.h"
#include "deleteroutingcontrolresponse.h"
#include "deletesafetyrulerequest.h"
#include "deletesafetyruleresponse.h"
#include "describeclusterrequest.h"
#include "describeclusterresponse.h"
#include "describecontrolpanelrequest.h"
#include "describecontrolpanelresponse.h"
#include "describeroutingcontrolrequest.h"
#include "describeroutingcontrolresponse.h"
#include "describesafetyrulerequest.h"
#include "describesafetyruleresponse.h"
#include "listassociatedroute53healthchecksrequest.h"
#include "listassociatedroute53healthchecksresponse.h"
#include "listclustersrequest.h"
#include "listclustersresponse.h"
#include "listcontrolpanelsrequest.h"
#include "listcontrolpanelsresponse.h"
#include "listroutingcontrolsrequest.h"
#include "listroutingcontrolsresponse.h"
#include "listsafetyrulesrequest.h"
#include "listsafetyrulesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatecontrolpanelrequest.h"
#include "updatecontrolpanelresponse.h"
#include "updateroutingcontrolrequest.h"
#include "updateroutingcontrolresponse.h"
#include "updatesafetyrulerequest.h"
#include "updatesafetyruleresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Route53RecoveryControlConfig
 * \brief Contains classess for accessing AWS Route53 Recovery Control Config.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::Route53RecoveryControlConfigClient
 * \brief The Route53RecoveryControlConfigClient class provides access to the AWS Route53 Recovery Control Config service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 */

/*!
 * \brief Constructs a Route53RecoveryControlConfigClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Route53RecoveryControlConfigClient::Route53RecoveryControlConfigClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Route53RecoveryControlConfigClientPrivate(this), parent)
{
    Q_D(Route53RecoveryControlConfigClient);
    d->apiVersion = QStringLiteral("2020-11-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("route53-recovery-control-config");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Route53 Recovery Control Config");
    d->serviceName = QStringLiteral("route53-recovery-control-config");
}

/*!
 * \overload Route53RecoveryControlConfigClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Route53RecoveryControlConfigClient::Route53RecoveryControlConfigClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Route53RecoveryControlConfigClientPrivate(this), parent)
{
    Q_D(Route53RecoveryControlConfigClient);
    d->apiVersion = QStringLiteral("2020-11-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("route53-recovery-control-config");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Route53 Recovery Control Config");
    d->serviceName = QStringLiteral("route53-recovery-control-config");
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * CreateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new cluster. A cluster is a set of redundant Regional endpoints against which you can run API calls to update
 * or get the state of one or more routing controls. Each cluster has a name, status, Amazon Resource Name (ARN), and an
 * array of the five cluster endpoints (one for each supported Amazon Web Services Region) that you can use with API calls
 * to the cluster data
 */
CreateClusterResponse * Route53RecoveryControlConfigClient::createCluster(const CreateClusterRequest &request)
{
    return qobject_cast<CreateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * CreateControlPanelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new control panel. A control panel represents a group of routing controls that can be changed together in a
 * single transaction. You can use a control panel to centrally view the operational status of applications across your
 * organization, and trigger multi-app failovers in a single transaction, for example, to fail over an Availability Zone or
 * Amazon Web Services
 */
CreateControlPanelResponse * Route53RecoveryControlConfigClient::createControlPanel(const CreateControlPanelRequest &request)
{
    return qobject_cast<CreateControlPanelResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * CreateRoutingControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new routing
 *
 * control>
 *
 * A routing control has one of two states: ON and OFF. You can map the routing control state to the state of an Amazon
 * Route 53 health check, which can be used to control traffic
 *
 * routing>
 *
 * To get or update the routing control state, see the Recovery Cluster (data plane) API actions for Amazon Route 53
 * Application Recovery
 */
CreateRoutingControlResponse * Route53RecoveryControlConfigClient::createRoutingControl(const CreateRoutingControlRequest &request)
{
    return qobject_cast<CreateRoutingControlResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * CreateSafetyRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a safety rule in a control panel. Safety rules let you add safeguards around changing routing control states,
 * and for enabling and disabling routing controls, to help prevent unexpected
 *
 * outcomes>
 *
 * There are two types of safety rules: assertion rules and gating
 *
 * rules>
 *
 * Assertion rule: An assertion rule enforces that, when you change a routing control state, that a certain criteria is
 * met. For example, the criteria might be that at least one routing control state is On after the transation so that
 * traffic continues to flow to at least one cell for the application. This ensures that you avoid a fail-open
 *
 * scenario>
 *
 * Gating rule: A gating rule lets you configure a gating routing control as an overall "on/off" switch for a group of
 * routing controls. Or, you can configure more complex gating scenarios, for example by configuring multiple gating
 * routing
 *
 * controls>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.safety-rules.html">Safety rules</a> in the
 * Amazon Route 53 Application Recovery Controller Developer
 */
CreateSafetyRuleResponse * Route53RecoveryControlConfigClient::createSafetyRule(const CreateSafetyRuleRequest &request)
{
    return qobject_cast<CreateSafetyRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * DeleteClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a
 */
DeleteClusterResponse * Route53RecoveryControlConfigClient::deleteCluster(const DeleteClusterRequest &request)
{
    return qobject_cast<DeleteClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * DeleteControlPanelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a control
 */
DeleteControlPanelResponse * Route53RecoveryControlConfigClient::deleteControlPanel(const DeleteControlPanelRequest &request)
{
    return qobject_cast<DeleteControlPanelResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * DeleteRoutingControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a routing
 */
DeleteRoutingControlResponse * Route53RecoveryControlConfigClient::deleteRoutingControl(const DeleteRoutingControlRequest &request)
{
    return qobject_cast<DeleteRoutingControlResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * DeleteSafetyRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteSafetyRuleResponse * Route53RecoveryControlConfigClient::deleteSafetyRule(const DeleteSafetyRuleRequest &request)
{
    return qobject_cast<DeleteSafetyRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * DescribeClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Display the details about a cluster. The response includes the cluster name, endpoints, status, and Amazon Resource Name
 */
DescribeClusterResponse * Route53RecoveryControlConfigClient::describeCluster(const DescribeClusterRequest &request)
{
    return qobject_cast<DescribeClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * DescribeControlPanelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays details about a control
 */
DescribeControlPanelResponse * Route53RecoveryControlConfigClient::describeControlPanel(const DescribeControlPanelRequest &request)
{
    return qobject_cast<DescribeControlPanelResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * DescribeRoutingControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays details about a routing control. A routing control has one of two states: ON and OFF. You can map the routing
 * control state to the state of an Amazon Route 53 health check, which can be used to control
 *
 * routing>
 *
 * To get or update the routing control state, see the Recovery Cluster (data plane) API actions for Amazon Route 53
 * Application Recovery
 */
DescribeRoutingControlResponse * Route53RecoveryControlConfigClient::describeRoutingControl(const DescribeRoutingControlRequest &request)
{
    return qobject_cast<DescribeRoutingControlResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * DescribeSafetyRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a safety
 */
DescribeSafetyRuleResponse * Route53RecoveryControlConfigClient::describeSafetyRule(const DescribeSafetyRuleRequest &request)
{
    return qobject_cast<DescribeSafetyRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * ListAssociatedRoute53HealthChecksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of all Amazon Route 53 health checks associated with a specific routing
 */
ListAssociatedRoute53HealthChecksResponse * Route53RecoveryControlConfigClient::listAssociatedRoute53HealthChecks(const ListAssociatedRoute53HealthChecksRequest &request)
{
    return qobject_cast<ListAssociatedRoute53HealthChecksResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * ListClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of all the clusters in an
 */
ListClustersResponse * Route53RecoveryControlConfigClient::listClusters(const ListClustersRequest &request)
{
    return qobject_cast<ListClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * ListControlPanelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of control panels in an account or in a
 */
ListControlPanelsResponse * Route53RecoveryControlConfigClient::listControlPanels(const ListControlPanelsRequest &request)
{
    return qobject_cast<ListControlPanelsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * ListRoutingControlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of routing controls for a control panel. A routing control is an Amazon Route 53 Application Recovery
 * Controller construct that has one of two states: ON and OFF. You can map the routing control state to the state of an
 * Amazon Route 53 health check, which can be used to control
 */
ListRoutingControlsResponse * Route53RecoveryControlConfigClient::listRoutingControls(const ListRoutingControlsRequest &request)
{
    return qobject_cast<ListRoutingControlsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * ListSafetyRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the safety rules (the assertion rules and gating rules) that you've defined for the routing controls in a control
 */
ListSafetyRulesResponse * Route53RecoveryControlConfigClient::listSafetyRules(const ListSafetyRulesRequest &request)
{
    return qobject_cast<ListSafetyRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for a
 */
ListTagsForResourceResponse * Route53RecoveryControlConfigClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a tag to a
 */
TagResourceResponse * Route53RecoveryControlConfigClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a
 */
UntagResourceResponse * Route53RecoveryControlConfigClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * UpdateControlPanelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a control panel. The only update you can make to a control panel is to change the name of the control
 */
UpdateControlPanelResponse * Route53RecoveryControlConfigClient::updateControlPanel(const UpdateControlPanelRequest &request)
{
    return qobject_cast<UpdateControlPanelResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * UpdateRoutingControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a routing control. You can only update the name of the routing control. To get or update the routing control
 * state, see the Recovery Cluster (data plane) API actions for Amazon Route 53 Application Recovery
 */
UpdateRoutingControlResponse * Route53RecoveryControlConfigClient::updateRoutingControl(const UpdateRoutingControlRequest &request)
{
    return qobject_cast<UpdateRoutingControlResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryControlConfigClient service, and returns a pointer to an
 * UpdateSafetyRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a safety rule (an assertion rule or gating rule). You can only update the name and the waiting period for a
 * safety rule. To make other updates, delete the safety rule and create a new
 */
UpdateSafetyRuleResponse * Route53RecoveryControlConfigClient::updateSafetyRule(const UpdateSafetyRuleRequest &request)
{
    return qobject_cast<UpdateSafetyRuleResponse *>(send(request));
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::Route53RecoveryControlConfigClientPrivate
 * \brief The Route53RecoveryControlConfigClientPrivate class provides private implementation for Route53RecoveryControlConfigClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a Route53RecoveryControlConfigClientPrivate object with public implementation \a q.
 */
Route53RecoveryControlConfigClientPrivate::Route53RecoveryControlConfigClientPrivate(Route53RecoveryControlConfigClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
