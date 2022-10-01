// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "wellarchitectedclient.h"
#include "wellarchitectedclient_p.h"

#include "core/awssignaturev4.h"
#include "associatelensesrequest.h"
#include "associatelensesresponse.h"
#include "createlenssharerequest.h"
#include "createlensshareresponse.h"
#include "createlensversionrequest.h"
#include "createlensversionresponse.h"
#include "createmilestonerequest.h"
#include "createmilestoneresponse.h"
#include "createworkloadrequest.h"
#include "createworkloadresponse.h"
#include "createworkloadsharerequest.h"
#include "createworkloadshareresponse.h"
#include "deletelensrequest.h"
#include "deletelensresponse.h"
#include "deletelenssharerequest.h"
#include "deletelensshareresponse.h"
#include "deleteworkloadrequest.h"
#include "deleteworkloadresponse.h"
#include "deleteworkloadsharerequest.h"
#include "deleteworkloadshareresponse.h"
#include "disassociatelensesrequest.h"
#include "disassociatelensesresponse.h"
#include "exportlensrequest.h"
#include "exportlensresponse.h"
#include "getanswerrequest.h"
#include "getanswerresponse.h"
#include "getlensrequest.h"
#include "getlensresponse.h"
#include "getlensreviewrequest.h"
#include "getlensreviewresponse.h"
#include "getlensreviewreportrequest.h"
#include "getlensreviewreportresponse.h"
#include "getlensversiondifferencerequest.h"
#include "getlensversiondifferenceresponse.h"
#include "getmilestonerequest.h"
#include "getmilestoneresponse.h"
#include "getworkloadrequest.h"
#include "getworkloadresponse.h"
#include "importlensrequest.h"
#include "importlensresponse.h"
#include "listanswersrequest.h"
#include "listanswersresponse.h"
#include "listlensreviewimprovementsrequest.h"
#include "listlensreviewimprovementsresponse.h"
#include "listlensreviewsrequest.h"
#include "listlensreviewsresponse.h"
#include "listlenssharesrequest.h"
#include "listlenssharesresponse.h"
#include "listlensesrequest.h"
#include "listlensesresponse.h"
#include "listmilestonesrequest.h"
#include "listmilestonesresponse.h"
#include "listnotificationsrequest.h"
#include "listnotificationsresponse.h"
#include "listshareinvitationsrequest.h"
#include "listshareinvitationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listworkloadsharesrequest.h"
#include "listworkloadsharesresponse.h"
#include "listworkloadsrequest.h"
#include "listworkloadsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateanswerrequest.h"
#include "updateanswerresponse.h"
#include "updateglobalsettingsrequest.h"
#include "updateglobalsettingsresponse.h"
#include "updatelensreviewrequest.h"
#include "updatelensreviewresponse.h"
#include "updateshareinvitationrequest.h"
#include "updateshareinvitationresponse.h"
#include "updateworkloadrequest.h"
#include "updateworkloadresponse.h"
#include "updateworkloadsharerequest.h"
#include "updateworkloadshareresponse.h"
#include "upgradelensreviewrequest.h"
#include "upgradelensreviewresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::WellArchitected
 * \brief Contains classess for accessing AWS Well-Architected Tool.
 *
 * \inmodule QtAwsWellArchitected
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::WellArchitectedClient
 * \brief The WellArchitectedClient class provides access to the AWS Well-Architected Tool service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 */

/*!
 * \brief Constructs a WellArchitectedClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
WellArchitectedClient::WellArchitectedClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WellArchitectedClientPrivate(this), parent)
{
    Q_D(WellArchitectedClient);
    d->apiVersion = QStringLiteral("2020-03-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("wellarchitected");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Well-Architected Tool");
    d->serviceName = QStringLiteral("wellarchitected");
}

/*!
 * \overload WellArchitectedClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
WellArchitectedClient::WellArchitectedClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WellArchitectedClientPrivate(this), parent)
{
    Q_D(WellArchitectedClient);
    d->apiVersion = QStringLiteral("2020-03-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("wellarchitected");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Well-Architected Tool");
    d->serviceName = QStringLiteral("wellarchitected");
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * AssociateLensesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate a lens to a
 *
 * workload>
 *
 * Up to 10 lenses can be associated with a workload in a single API operation. A maximum of 20 lenses can be associated
 * with a
 *
 * workload> <note>
 *
 * <b>Disclaimer</b>
 *
 * </p
 *
 * By accessing and/or applying custom lenses created by another Amazon Web Services user or account, you acknowledge that
 * custom lenses created by other users and shared with you are Third Party Content as defined in the Amazon Web Services
 * Customer Agreement.
 */
AssociateLensesResponse * WellArchitectedClient::associateLenses(const AssociateLensesRequest &request)
{
    return qobject_cast<AssociateLensesResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * CreateLensShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a lens
 *
 * share>
 *
 * The owner of a lens can share it with other Amazon Web Services accounts and IAM users in the same Amazon Web Services
 * Region. Shared access to a lens is not removed until the lens invitation is
 *
 * deleted> <note>
 *
 * <b>Disclaimer</b>
 *
 * </p
 *
 * By sharing your custom lenses with other Amazon Web Services accounts, you acknowledge that Amazon Web Services will
 * make your custom lenses available to those other accounts. Those other accounts may continue to access and use your
 * shared custom lenses even if you delete the custom lenses from your own Amazon Web Services account or terminate your
 * Amazon Web Services
 */
CreateLensShareResponse * WellArchitectedClient::createLensShare(const CreateLensShareRequest &request)
{
    return qobject_cast<CreateLensShareResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * CreateLensVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new lens
 *
 * version>
 *
 * A lens can have up to 100
 *
 * versions>
 *
 * After a lens has been imported, create a new lens version to publish it. The owner of a lens can share the lens with
 * other Amazon Web Services accounts and IAM users in the same Amazon Web Services Region. Only the owner of a lens can
 * delete it.
 */
CreateLensVersionResponse * WellArchitectedClient::createLensVersion(const CreateLensVersionRequest &request)
{
    return qobject_cast<CreateLensVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * CreateMilestoneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a milestone for an existing
 */
CreateMilestoneResponse * WellArchitectedClient::createMilestone(const CreateMilestoneRequest &request)
{
    return qobject_cast<CreateMilestoneResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * CreateWorkloadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new
 *
 * workload>
 *
 * The owner of a workload can share the workload with other Amazon Web Services accounts and IAM users in the same Amazon
 * Web Services Region. Only the owner of a workload can delete
 *
 * it>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/define-workload.html">Defining a Workload</a> in the
 * <i>Well-Architected Tool User
 */
CreateWorkloadResponse * WellArchitectedClient::createWorkload(const CreateWorkloadRequest &request)
{
    return qobject_cast<CreateWorkloadResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * CreateWorkloadShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a workload
 *
 * share>
 *
 * The owner of a workload can share it with other Amazon Web Services accounts and IAM users in the same Amazon Web
 * Services Region. Shared access to a workload is not removed until the workload invitation is
 *
 * deleted>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/workloads-sharing.html">Sharing a Workload</a> in the
 * <i>Well-Architected Tool User
 */
CreateWorkloadShareResponse * WellArchitectedClient::createWorkloadShare(const CreateWorkloadShareRequest &request)
{
    return qobject_cast<CreateWorkloadShareResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * DeleteLensResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an existing
 *
 * lens>
 *
 * Only the owner of a lens can delete it. After the lens is deleted, Amazon Web Services accounts and IAM users that you
 * shared the lens with can continue to use it, but they will no longer be able to apply it to new workloads.
 *
 * </p <note>
 *
 * <b>Disclaimer</b>
 *
 * </p
 *
 * By sharing your custom lenses with other Amazon Web Services accounts, you acknowledge that Amazon Web Services will
 * make your custom lenses available to those other accounts. Those other accounts may continue to access and use your
 * shared custom lenses even if you delete the custom lenses from your own Amazon Web Services account or terminate your
 * Amazon Web Services
 */
DeleteLensResponse * WellArchitectedClient::deleteLens(const DeleteLensRequest &request)
{
    return qobject_cast<DeleteLensResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * DeleteLensShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a lens
 *
 * share>
 *
 * After the lens share is deleted, Amazon Web Services accounts and IAM users that you shared the lens with can continue
 * to use it, but they will no longer be able to apply it to new
 *
 * workloads> <note>
 *
 * <b>Disclaimer</b>
 *
 * </p
 *
 * By sharing your custom lenses with other Amazon Web Services accounts, you acknowledge that Amazon Web Services will
 * make your custom lenses available to those other accounts. Those other accounts may continue to access and use your
 * shared custom lenses even if you delete the custom lenses from your own Amazon Web Services account or terminate your
 * Amazon Web Services
 */
DeleteLensShareResponse * WellArchitectedClient::deleteLensShare(const DeleteLensShareRequest &request)
{
    return qobject_cast<DeleteLensShareResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * DeleteWorkloadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an existing
 */
DeleteWorkloadResponse * WellArchitectedClient::deleteWorkload(const DeleteWorkloadRequest &request)
{
    return qobject_cast<DeleteWorkloadResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * DeleteWorkloadShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a workload
 */
DeleteWorkloadShareResponse * WellArchitectedClient::deleteWorkloadShare(const DeleteWorkloadShareRequest &request)
{
    return qobject_cast<DeleteWorkloadShareResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * DisassociateLensesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociate a lens from a
 *
 * workload>
 *
 * Up to 10 lenses can be disassociated from a workload in a single API
 *
 * operation> <note>
 *
 * The Amazon Web Services Well-Architected Framework lens (<code>wellarchitected</code>) cannot be removed from a
 */
DisassociateLensesResponse * WellArchitectedClient::disassociateLenses(const DisassociateLensesRequest &request)
{
    return qobject_cast<DisassociateLensesResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ExportLensResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Export an existing
 *
 * lens>
 *
 * Lenses are defined in JSON. For more information, see <a
 * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/lenses-format-specification.html">JSON format
 * specification</a> in the <i>Well-Architected Tool User Guide</i>. Only the owner of a lens can export it.
 *
 * </p <note>
 *
 * <b>Disclaimer</b>
 *
 * </p
 *
 * Do not include or gather personal identifiable information (PII) of end users or other identifiable individuals in or
 * via your custom lenses. If your custom lens or those shared with you and used in your account do include or collect PII
 * you are responsible for: ensuring that the included PII is processed in accordance with applicable law, providing
 * adequate privacy notices, and obtaining necessary consents for processing such
 */
ExportLensResponse * WellArchitectedClient::exportLens(const ExportLensRequest &request)
{
    return qobject_cast<ExportLensResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * GetAnswerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the answer to a specific question in a workload
 */
GetAnswerResponse * WellArchitectedClient::getAnswer(const GetAnswerRequest &request)
{
    return qobject_cast<GetAnswerResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * GetLensResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get an existing
 */
GetLensResponse * WellArchitectedClient::getLens(const GetLensRequest &request)
{
    return qobject_cast<GetLensResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * GetLensReviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get lens
 */
GetLensReviewResponse * WellArchitectedClient::getLensReview(const GetLensReviewRequest &request)
{
    return qobject_cast<GetLensReviewResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * GetLensReviewReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get lens review
 */
GetLensReviewReportResponse * WellArchitectedClient::getLensReviewReport(const GetLensReviewReportRequest &request)
{
    return qobject_cast<GetLensReviewReportResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * GetLensVersionDifferenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get lens version
 */
GetLensVersionDifferenceResponse * WellArchitectedClient::getLensVersionDifference(const GetLensVersionDifferenceRequest &request)
{
    return qobject_cast<GetLensVersionDifferenceResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * GetMilestoneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a milestone for an existing
 */
GetMilestoneResponse * WellArchitectedClient::getMilestone(const GetMilestoneRequest &request)
{
    return qobject_cast<GetMilestoneResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * GetWorkloadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get an existing
 */
GetWorkloadResponse * WellArchitectedClient::getWorkload(const GetWorkloadRequest &request)
{
    return qobject_cast<GetWorkloadResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ImportLensResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Import a new
 *
 * lens>
 *
 * The lens cannot be applied to workloads or shared with other Amazon Web Services accounts until it's published with
 * <a>CreateLensVersion</a>
 *
 * </p
 *
 * Lenses are defined in JSON. For more information, see <a
 * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/lenses-format-specification.html">JSON format
 * specification</a> in the <i>Well-Architected Tool User
 *
 * Guide</i>>
 *
 * A custom lens cannot exceed 500 KB in
 *
 * size> <note>
 *
 * <b>Disclaimer</b>
 *
 * </p
 *
 * Do not include or gather personal identifiable information (PII) of end users or other identifiable individuals in or
 * via your custom lenses. If your custom lens or those shared with you and used in your account do include or collect PII
 * you are responsible for: ensuring that the included PII is processed in accordance with applicable law, providing
 * adequate privacy notices, and obtaining necessary consents for processing such
 */
ImportLensResponse * WellArchitectedClient::importLens(const ImportLensRequest &request)
{
    return qobject_cast<ImportLensResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ListAnswersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List of
 */
ListAnswersResponse * WellArchitectedClient::listAnswers(const ListAnswersRequest &request)
{
    return qobject_cast<ListAnswersResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ListLensReviewImprovementsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List lens review
 */
ListLensReviewImprovementsResponse * WellArchitectedClient::listLensReviewImprovements(const ListLensReviewImprovementsRequest &request)
{
    return qobject_cast<ListLensReviewImprovementsResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ListLensReviewsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List lens
 */
ListLensReviewsResponse * WellArchitectedClient::listLensReviews(const ListLensReviewsRequest &request)
{
    return qobject_cast<ListLensReviewsResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ListLensSharesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the lens shares associated with the
 */
ListLensSharesResponse * WellArchitectedClient::listLensShares(const ListLensSharesRequest &request)
{
    return qobject_cast<ListLensSharesResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ListLensesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the available
 */
ListLensesResponse * WellArchitectedClient::listLenses(const ListLensesRequest &request)
{
    return qobject_cast<ListLensesResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ListMilestonesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all milestones for an existing
 */
ListMilestonesResponse * WellArchitectedClient::listMilestones(const ListMilestonesRequest &request)
{
    return qobject_cast<ListMilestonesResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ListNotificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List lens
 */
ListNotificationsResponse * WellArchitectedClient::listNotifications(const ListNotificationsRequest &request)
{
    return qobject_cast<ListNotificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ListShareInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the workload
 */
ListShareInvitationsResponse * WellArchitectedClient::listShareInvitations(const ListShareInvitationsRequest &request)
{
    return qobject_cast<ListShareInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the tags for a
 *
 * resource> <note>
 *
 * The WorkloadArn parameter can be either a workload ARN or a custom lens
 */
ListTagsForResourceResponse * WellArchitectedClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ListWorkloadSharesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the workload shares associated with the
 */
ListWorkloadSharesResponse * WellArchitectedClient::listWorkloadShares(const ListWorkloadSharesRequest &request)
{
    return qobject_cast<ListWorkloadSharesResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * ListWorkloadsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List workloads.
 */
ListWorkloadsResponse * WellArchitectedClient::listWorkloads(const ListWorkloadsRequest &request)
{
    return qobject_cast<ListWorkloadsResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to the specified
 *
 * resource> <note>
 *
 * The WorkloadArn parameter can be either a workload ARN or a custom lens
 */
TagResourceResponse * WellArchitectedClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes specified tags from a
 *
 * resource> <note>
 *
 * The WorkloadArn parameter can be either a workload ARN or a custom lens
 *
 * ARN> </note>
 *
 * To specify multiple tags, use separate <b>tagKeys</b> parameters, for
 *
 * example>
 *
 * <code>DELETE /tags/WorkloadArn?tagKeys=key1&tagKeys=key2</code>
 */
UntagResourceResponse * WellArchitectedClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * UpdateAnswerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the answer to a specific question in a workload
 */
UpdateAnswerResponse * WellArchitectedClient::updateAnswer(const UpdateAnswerRequest &request)
{
    return qobject_cast<UpdateAnswerResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * UpdateGlobalSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates whether the Amazon Web Services account is opted into organization sharing
 */
UpdateGlobalSettingsResponse * WellArchitectedClient::updateGlobalSettings(const UpdateGlobalSettingsRequest &request)
{
    return qobject_cast<UpdateGlobalSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * UpdateLensReviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update lens
 */
UpdateLensReviewResponse * WellArchitectedClient::updateLensReview(const UpdateLensReviewRequest &request)
{
    return qobject_cast<UpdateLensReviewResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * UpdateShareInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a workload
 */
UpdateShareInvitationResponse * WellArchitectedClient::updateShareInvitation(const UpdateShareInvitationRequest &request)
{
    return qobject_cast<UpdateShareInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * UpdateWorkloadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an existing
 */
UpdateWorkloadResponse * WellArchitectedClient::updateWorkload(const UpdateWorkloadRequest &request)
{
    return qobject_cast<UpdateWorkloadResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * UpdateWorkloadShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a workload
 */
UpdateWorkloadShareResponse * WellArchitectedClient::updateWorkloadShare(const UpdateWorkloadShareRequest &request)
{
    return qobject_cast<UpdateWorkloadShareResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * UpgradeLensReviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Upgrade lens
 */
UpgradeLensReviewResponse * WellArchitectedClient::upgradeLensReview(const UpgradeLensReviewRequest &request)
{
    return qobject_cast<UpgradeLensReviewResponse *>(send(request));
}

/*!
 * \class QtAws::WellArchitected::WellArchitectedClientPrivate
 * \brief The WellArchitectedClientPrivate class provides private implementation for WellArchitectedClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a WellArchitectedClientPrivate object with public implementation \a q.
 */
WellArchitectedClientPrivate::WellArchitectedClientPrivate(WellArchitectedClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace WellArchitected
} // namespace QtAws
