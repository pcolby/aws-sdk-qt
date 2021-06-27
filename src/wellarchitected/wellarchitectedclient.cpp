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

#include "wellarchitectedclient.h"
#include "wellarchitectedclient_p.h"

#include "core/awssignaturev4.h"
#include "associatelensesrequest.h"
#include "associatelensesresponse.h"
#include "createmilestonerequest.h"
#include "createmilestoneresponse.h"
#include "createworkloadrequest.h"
#include "createworkloadresponse.h"
#include "createworkloadsharerequest.h"
#include "createworkloadshareresponse.h"
#include "deleteworkloadrequest.h"
#include "deleteworkloadresponse.h"
#include "deleteworkloadsharerequest.h"
#include "deleteworkloadshareresponse.h"
#include "disassociatelensesrequest.h"
#include "disassociatelensesresponse.h"
#include "getanswerrequest.h"
#include "getanswerresponse.h"
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
#include "listanswersrequest.h"
#include "listanswersresponse.h"
#include "listlensreviewimprovementsrequest.h"
#include "listlensreviewimprovementsresponse.h"
#include "listlensreviewsrequest.h"
#include "listlensreviewsresponse.h"
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
 *  <fullname>AWS Well-Architected Tool</fullname>
 * 
 *  This is the <i>AWS Well-Architected Tool API Reference</i>. The AWS Well-Architected Tool API provides programmatic
 *  access to the <a href="http://aws.amazon.com/well-architected-tool">AWS Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">AWS Management Console</a>. For information about the AWS
 *  Well-Architected Tool, see the <a href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">AWS
 *  Well-Architected Tool User
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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-03-31"),
    QStringLiteral("wellarchitected"),
    QStringLiteral("AWS Well-Architected Tool"),
    QStringLiteral("wellarchitected"),
    parent), d_ptr(new WellArchitectedClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-03-31"),
    QStringLiteral("wellarchitected"),
    QStringLiteral("AWS Well-Architected Tool"),
    QStringLiteral("wellarchitected"),
    parent), d_ptr(new WellArchitectedClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * AssociateLensesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate a lens to a
 */
AssociateLensesResponse * WellArchitectedClient::associateLenses(const AssociateLensesRequest &request)
{
    return qobject_cast<AssociateLensesResponse *>(send(request));
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
 * The owner of a workload can share the workload with other AWS accounts and IAM users in the same AWS Region. Only the
 * owner of a workload can delete
 *
 * it>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/define-workload.html">Defining a Workload</a> in the
 * <i>AWS Well-Architected Tool User
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
 * The owner of a workload can share it with other AWS accounts and IAM users in the same AWS Region. Shared access to a
 * workload is not removed until the workload invitation is
 *
 * deleted>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/workloads-sharing.html">Sharing a Workload</a> in the
 * <i>AWS Well-Architected Tool User
 */
CreateWorkloadShareResponse * WellArchitectedClient::createWorkloadShare(const CreateWorkloadShareRequest &request)
{
    return qobject_cast<CreateWorkloadShareResponse *>(send(request));
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
 * workload> <note>
 *
 * The AWS Well-Architected Framework lens (<code>wellarchitected</code>) cannot be removed from a
 */
DisassociateLensesResponse * WellArchitectedClient::disassociateLenses(const DisassociateLensesRequest &request)
{
    return qobject_cast<DisassociateLensesResponse *>(send(request));
}

/*!
 * Sends \a request to the WellArchitectedClient service, and returns a pointer to an
 * GetAnswerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get lens
 */
GetAnswerResponse * WellArchitectedClient::getAnswer(const GetAnswerRequest &request)
{
    return qobject_cast<GetAnswerResponse *>(send(request));
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
WellArchitectedClientPrivate::WellArchitectedClientPrivate(WellArchitectedClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace WellArchitected
} // namespace QtAws
