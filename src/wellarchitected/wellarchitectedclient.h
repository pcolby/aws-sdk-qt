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

#ifndef QTAWS_WELLARCHITECTEDCLIENT_H
#define QTAWS_WELLARCHITECTEDCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace WellArchitected {

class WellArchitectedClientPrivate;
class AssociateLensesRequest;
class AssociateLensesResponse;
class CreateMilestoneRequest;
class CreateMilestoneResponse;
class CreateWorkloadRequest;
class CreateWorkloadResponse;
class CreateWorkloadShareRequest;
class CreateWorkloadShareResponse;
class DeleteWorkloadRequest;
class DeleteWorkloadResponse;
class DeleteWorkloadShareRequest;
class DeleteWorkloadShareResponse;
class DisassociateLensesRequest;
class DisassociateLensesResponse;
class GetAnswerRequest;
class GetAnswerResponse;
class GetLensReviewRequest;
class GetLensReviewResponse;
class GetLensReviewReportRequest;
class GetLensReviewReportResponse;
class GetLensVersionDifferenceRequest;
class GetLensVersionDifferenceResponse;
class GetMilestoneRequest;
class GetMilestoneResponse;
class GetWorkloadRequest;
class GetWorkloadResponse;
class ListAnswersRequest;
class ListAnswersResponse;
class ListLensReviewImprovementsRequest;
class ListLensReviewImprovementsResponse;
class ListLensReviewsRequest;
class ListLensReviewsResponse;
class ListLensesRequest;
class ListLensesResponse;
class ListMilestonesRequest;
class ListMilestonesResponse;
class ListNotificationsRequest;
class ListNotificationsResponse;
class ListShareInvitationsRequest;
class ListShareInvitationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWorkloadSharesRequest;
class ListWorkloadSharesResponse;
class ListWorkloadsRequest;
class ListWorkloadsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAnswerRequest;
class UpdateAnswerResponse;
class UpdateLensReviewRequest;
class UpdateLensReviewResponse;
class UpdateShareInvitationRequest;
class UpdateShareInvitationResponse;
class UpdateWorkloadRequest;
class UpdateWorkloadResponse;
class UpdateWorkloadShareRequest;
class UpdateWorkloadShareResponse;
class UpgradeLensReviewRequest;
class UpgradeLensReviewResponse;

class QTAWS_EXPORT WellArchitectedClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    WellArchitectedClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    WellArchitectedClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateLensesResponse * associateLenses(const AssociateLensesRequest &request);
    CreateMilestoneResponse * createMilestone(const CreateMilestoneRequest &request);
    CreateWorkloadResponse * createWorkload(const CreateWorkloadRequest &request);
    CreateWorkloadShareResponse * createWorkloadShare(const CreateWorkloadShareRequest &request);
    DeleteWorkloadResponse * deleteWorkload(const DeleteWorkloadRequest &request);
    DeleteWorkloadShareResponse * deleteWorkloadShare(const DeleteWorkloadShareRequest &request);
    DisassociateLensesResponse * disassociateLenses(const DisassociateLensesRequest &request);
    GetAnswerResponse * getAnswer(const GetAnswerRequest &request);
    GetLensReviewResponse * getLensReview(const GetLensReviewRequest &request);
    GetLensReviewReportResponse * getLensReviewReport(const GetLensReviewReportRequest &request);
    GetLensVersionDifferenceResponse * getLensVersionDifference(const GetLensVersionDifferenceRequest &request);
    GetMilestoneResponse * getMilestone(const GetMilestoneRequest &request);
    GetWorkloadResponse * getWorkload(const GetWorkloadRequest &request);
    ListAnswersResponse * listAnswers(const ListAnswersRequest &request);
    ListLensReviewImprovementsResponse * listLensReviewImprovements(const ListLensReviewImprovementsRequest &request);
    ListLensReviewsResponse * listLensReviews(const ListLensReviewsRequest &request);
    ListLensesResponse * listLenses(const ListLensesRequest &request);
    ListMilestonesResponse * listMilestones(const ListMilestonesRequest &request);
    ListNotificationsResponse * listNotifications(const ListNotificationsRequest &request);
    ListShareInvitationsResponse * listShareInvitations(const ListShareInvitationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWorkloadSharesResponse * listWorkloadShares(const ListWorkloadSharesRequest &request);
    ListWorkloadsResponse * listWorkloads(const ListWorkloadsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAnswerResponse * updateAnswer(const UpdateAnswerRequest &request);
    UpdateLensReviewResponse * updateLensReview(const UpdateLensReviewRequest &request);
    UpdateShareInvitationResponse * updateShareInvitation(const UpdateShareInvitationRequest &request);
    UpdateWorkloadResponse * updateWorkload(const UpdateWorkloadRequest &request);
    UpdateWorkloadShareResponse * updateWorkloadShare(const UpdateWorkloadShareRequest &request);
    UpgradeLensReviewResponse * upgradeLensReview(const UpgradeLensReviewRequest &request);

private:
    Q_DECLARE_PRIVATE(WellArchitectedClient)
    Q_DISABLE_COPY(WellArchitectedClient)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
