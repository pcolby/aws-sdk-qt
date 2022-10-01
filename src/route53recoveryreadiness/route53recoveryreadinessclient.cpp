// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "route53recoveryreadinessclient.h"
#include "route53recoveryreadinessclient_p.h"

#include "core/awssignaturev4.h"
#include "createcellrequest.h"
#include "createcellresponse.h"
#include "createcrossaccountauthorizationrequest.h"
#include "createcrossaccountauthorizationresponse.h"
#include "createreadinesscheckrequest.h"
#include "createreadinesscheckresponse.h"
#include "createrecoverygrouprequest.h"
#include "createrecoverygroupresponse.h"
#include "createresourcesetrequest.h"
#include "createresourcesetresponse.h"
#include "deletecellrequest.h"
#include "deletecellresponse.h"
#include "deletecrossaccountauthorizationrequest.h"
#include "deletecrossaccountauthorizationresponse.h"
#include "deletereadinesscheckrequest.h"
#include "deletereadinesscheckresponse.h"
#include "deleterecoverygrouprequest.h"
#include "deleterecoverygroupresponse.h"
#include "deleteresourcesetrequest.h"
#include "deleteresourcesetresponse.h"
#include "getarchitecturerecommendationsrequest.h"
#include "getarchitecturerecommendationsresponse.h"
#include "getcellrequest.h"
#include "getcellresponse.h"
#include "getcellreadinesssummaryrequest.h"
#include "getcellreadinesssummaryresponse.h"
#include "getreadinesscheckrequest.h"
#include "getreadinesscheckresponse.h"
#include "getreadinesscheckresourcestatusrequest.h"
#include "getreadinesscheckresourcestatusresponse.h"
#include "getreadinesscheckstatusrequest.h"
#include "getreadinesscheckstatusresponse.h"
#include "getrecoverygrouprequest.h"
#include "getrecoverygroupresponse.h"
#include "getrecoverygroupreadinesssummaryrequest.h"
#include "getrecoverygroupreadinesssummaryresponse.h"
#include "getresourcesetrequest.h"
#include "getresourcesetresponse.h"
#include "listcellsrequest.h"
#include "listcellsresponse.h"
#include "listcrossaccountauthorizationsrequest.h"
#include "listcrossaccountauthorizationsresponse.h"
#include "listreadinesschecksrequest.h"
#include "listreadinesschecksresponse.h"
#include "listrecoverygroupsrequest.h"
#include "listrecoverygroupsresponse.h"
#include "listresourcesetsrequest.h"
#include "listresourcesetsresponse.h"
#include "listrulesrequest.h"
#include "listrulesresponse.h"
#include "listtagsforresourcesrequest.h"
#include "listtagsforresourcesresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatecellrequest.h"
#include "updatecellresponse.h"
#include "updatereadinesscheckrequest.h"
#include "updatereadinesscheckresponse.h"
#include "updaterecoverygrouprequest.h"
#include "updaterecoverygroupresponse.h"
#include "updateresourcesetrequest.h"
#include "updateresourcesetresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Route53RecoveryReadiness
 * \brief Contains classess for accessing AWS Route53 Recovery Readiness.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::Route53RecoveryReadinessClient
 * \brief The Route53RecoveryReadinessClient class provides access to the AWS Route53 Recovery Readiness service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 */

/*!
 * \brief Constructs a Route53RecoveryReadinessClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Route53RecoveryReadinessClientPrivate(this), parent)
{
    Q_D(Route53RecoveryReadinessClient);
    d->apiVersion = QStringLiteral("2019-12-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("route53-recovery-readiness");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Route53 Recovery Readiness");
    d->serviceName = QStringLiteral("route53-recovery-readiness");
}

/*!
 * \overload Route53RecoveryReadinessClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Route53RecoveryReadinessClientPrivate(this), parent)
{
    Q_D(Route53RecoveryReadinessClient);
    d->apiVersion = QStringLiteral("2019-12-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("route53-recovery-readiness");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Route53 Recovery Readiness");
    d->serviceName = QStringLiteral("route53-recovery-readiness");
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * CreateCellResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a cell in an
 */
CreateCellResponse * Route53RecoveryReadinessClient::createCell(const CreateCellRequest &request)
{
    return qobject_cast<CreateCellResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * CreateCrossAccountAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a cross-account readiness authorization. This lets you authorize another account to work with Route 53
 * Application Recovery Controller, for example, to check the readiness status of resources in a separate
 */
CreateCrossAccountAuthorizationResponse * Route53RecoveryReadinessClient::createCrossAccountAuthorization(const CreateCrossAccountAuthorizationRequest &request)
{
    return qobject_cast<CreateCrossAccountAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * CreateReadinessCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a readiness check in an account. A readiness check monitors a resource set in your application, such as a set of
 * Amazon Aurora instances, that Application Recovery Controller is auditing recovery readiness for. The audits run once
 * every minute on every resource that's associated with a readiness
 */
CreateReadinessCheckResponse * Route53RecoveryReadinessClient::createReadinessCheck(const CreateReadinessCheckRequest &request)
{
    return qobject_cast<CreateReadinessCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * CreateRecoveryGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a recovery group in an account. A recovery group corresponds to an application and includes a list of the cells
 * that make up the
 */
CreateRecoveryGroupResponse * Route53RecoveryReadinessClient::createRecoveryGroup(const CreateRecoveryGroupRequest &request)
{
    return qobject_cast<CreateRecoveryGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * CreateResourceSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a resource set. A resource set is a set of resources of one type that span multiple cells. You can associate a
 * resource set with a readiness check to monitor the resources for failover
 */
CreateResourceSetResponse * Route53RecoveryReadinessClient::createResourceSet(const CreateResourceSetRequest &request)
{
    return qobject_cast<CreateResourceSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * DeleteCellResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a cell. When successful, the response code is 204, with no response
 */
DeleteCellResponse * Route53RecoveryReadinessClient::deleteCell(const DeleteCellRequest &request)
{
    return qobject_cast<DeleteCellResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * DeleteCrossAccountAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes cross account readiness
 */
DeleteCrossAccountAuthorizationResponse * Route53RecoveryReadinessClient::deleteCrossAccountAuthorization(const DeleteCrossAccountAuthorizationRequest &request)
{
    return qobject_cast<DeleteCrossAccountAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * DeleteReadinessCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a readiness
 */
DeleteReadinessCheckResponse * Route53RecoveryReadinessClient::deleteReadinessCheck(const DeleteReadinessCheckRequest &request)
{
    return qobject_cast<DeleteReadinessCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * DeleteRecoveryGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a recovery
 */
DeleteRecoveryGroupResponse * Route53RecoveryReadinessClient::deleteRecoveryGroup(const DeleteRecoveryGroupRequest &request)
{
    return qobject_cast<DeleteRecoveryGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * DeleteResourceSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a resource
 */
DeleteResourceSetResponse * Route53RecoveryReadinessClient::deleteResourceSet(const DeleteResourceSetRequest &request)
{
    return qobject_cast<DeleteResourceSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * GetArchitectureRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets recommendations about architecture designs for improving resiliency for an application, based on a recovery
 */
GetArchitectureRecommendationsResponse * Route53RecoveryReadinessClient::getArchitectureRecommendations(const GetArchitectureRecommendationsRequest &request)
{
    return qobject_cast<GetArchitectureRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * GetCellResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a cell including cell name, cell Amazon Resource Name (ARN), ARNs of nested cells for this cell,
 * and a list of those cell ARNs with their associated recovery group
 */
GetCellResponse * Route53RecoveryReadinessClient::getCell(const GetCellRequest &request)
{
    return qobject_cast<GetCellResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * GetCellReadinessSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets readiness for a cell. Aggregates the readiness of all the resources that are associated with the cell into a single
 */
GetCellReadinessSummaryResponse * Route53RecoveryReadinessClient::getCellReadinessSummary(const GetCellReadinessSummaryRequest &request)
{
    return qobject_cast<GetCellReadinessSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * GetReadinessCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about a readiness
 */
GetReadinessCheckResponse * Route53RecoveryReadinessClient::getReadinessCheck(const GetReadinessCheckRequest &request)
{
    return qobject_cast<GetReadinessCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * GetReadinessCheckResourceStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets individual readiness status for a readiness check. To see the overall readiness status for a recovery group, that
 * considers the readiness status for all the readiness checks in the recovery group, use
 */
GetReadinessCheckResourceStatusResponse * Route53RecoveryReadinessClient::getReadinessCheckResourceStatus(const GetReadinessCheckResourceStatusRequest &request)
{
    return qobject_cast<GetReadinessCheckResourceStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * GetReadinessCheckStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the readiness status for an individual readiness check. To see the overall readiness status for a recovery group,
 * that considers the readiness status for all the readiness checks in a recovery group, use
 */
GetReadinessCheckStatusResponse * Route53RecoveryReadinessClient::getReadinessCheckStatus(const GetReadinessCheckStatusRequest &request)
{
    return qobject_cast<GetReadinessCheckStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * GetRecoveryGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about a recovery group, including a list of the cells that are included in
 */
GetRecoveryGroupResponse * Route53RecoveryReadinessClient::getRecoveryGroup(const GetRecoveryGroupRequest &request)
{
    return qobject_cast<GetRecoveryGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * GetRecoveryGroupReadinessSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays a summary of information about a recovery group's readiness status. Includes the readiness checks for resources
 * in the recovery group and the readiness status of each
 */
GetRecoveryGroupReadinessSummaryResponse * Route53RecoveryReadinessClient::getRecoveryGroupReadinessSummary(const GetRecoveryGroupReadinessSummaryRequest &request)
{
    return qobject_cast<GetRecoveryGroupReadinessSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * GetResourceSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the details about a resource set, including a list of the resources in the
 */
GetResourceSetResponse * Route53RecoveryReadinessClient::getResourceSet(const GetResourceSetRequest &request)
{
    return qobject_cast<GetResourceSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * ListCellsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the cells for an
 */
ListCellsResponse * Route53RecoveryReadinessClient::listCells(const ListCellsRequest &request)
{
    return qobject_cast<ListCellsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * ListCrossAccountAuthorizationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the cross-account readiness authorizations that are in place for an
 */
ListCrossAccountAuthorizationsResponse * Route53RecoveryReadinessClient::listCrossAccountAuthorizations(const ListCrossAccountAuthorizationsRequest &request)
{
    return qobject_cast<ListCrossAccountAuthorizationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * ListReadinessChecksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the readiness checks for an
 */
ListReadinessChecksResponse * Route53RecoveryReadinessClient::listReadinessChecks(const ListReadinessChecksRequest &request)
{
    return qobject_cast<ListReadinessChecksResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * ListRecoveryGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the recovery groups in an
 */
ListRecoveryGroupsResponse * Route53RecoveryReadinessClient::listRecoveryGroups(const ListRecoveryGroupsRequest &request)
{
    return qobject_cast<ListRecoveryGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * ListResourceSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resource sets in an
 */
ListResourceSetsResponse * Route53RecoveryReadinessClient::listResourceSets(const ListResourceSetsRequest &request)
{
    return qobject_cast<ListResourceSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * ListRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all readiness rules, or lists the readiness rules for a specific resource
 */
ListRulesResponse * Route53RecoveryReadinessClient::listRules(const ListRulesRequest &request)
{
    return qobject_cast<ListRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * ListTagsForResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for a
 */
ListTagsForResourcesResponse * Route53RecoveryReadinessClient::listTagsForResources(const ListTagsForResourcesRequest &request)
{
    return qobject_cast<ListTagsForResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a tag to a
 */
TagResourceResponse * Route53RecoveryReadinessClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a
 */
UntagResourceResponse * Route53RecoveryReadinessClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * UpdateCellResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a cell to replace the list of nested cells with a new list of nested
 */
UpdateCellResponse * Route53RecoveryReadinessClient::updateCell(const UpdateCellRequest &request)
{
    return qobject_cast<UpdateCellResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * UpdateReadinessCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a readiness
 */
UpdateReadinessCheckResponse * Route53RecoveryReadinessClient::updateReadinessCheck(const UpdateReadinessCheckRequest &request)
{
    return qobject_cast<UpdateReadinessCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * UpdateRecoveryGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a recovery
 */
UpdateRecoveryGroupResponse * Route53RecoveryReadinessClient::updateRecoveryGroup(const UpdateRecoveryGroupRequest &request)
{
    return qobject_cast<UpdateRecoveryGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryReadinessClient service, and returns a pointer to an
 * UpdateResourceSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a resource
 */
UpdateResourceSetResponse * Route53RecoveryReadinessClient::updateResourceSet(const UpdateResourceSetRequest &request)
{
    return qobject_cast<UpdateResourceSetResponse *>(send(request));
}

/*!
 * \class QtAws::Route53RecoveryReadiness::Route53RecoveryReadinessClientPrivate
 * \brief The Route53RecoveryReadinessClientPrivate class provides private implementation for Route53RecoveryReadinessClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a Route53RecoveryReadinessClientPrivate object with public implementation \a q.
 */
Route53RecoveryReadinessClientPrivate::Route53RecoveryReadinessClientPrivate(Route53RecoveryReadinessClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
