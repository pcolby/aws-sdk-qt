// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WELLARCHITECTEDCLIENT_H
#define QTAWS_WELLARCHITECTEDCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawswellarchitectedglobal.h"

class QNetworkReply;

namespace QtAws {
namespace WellArchitected {

class WellArchitectedClientPrivate;
class AssociateLensesRequest;
class AssociateLensesResponse;
class CreateLensShareRequest;
class CreateLensShareResponse;
class CreateLensVersionRequest;
class CreateLensVersionResponse;
class CreateMilestoneRequest;
class CreateMilestoneResponse;
class CreateWorkloadRequest;
class CreateWorkloadResponse;
class CreateWorkloadShareRequest;
class CreateWorkloadShareResponse;
class DeleteLensRequest;
class DeleteLensResponse;
class DeleteLensShareRequest;
class DeleteLensShareResponse;
class DeleteWorkloadRequest;
class DeleteWorkloadResponse;
class DeleteWorkloadShareRequest;
class DeleteWorkloadShareResponse;
class DisassociateLensesRequest;
class DisassociateLensesResponse;
class ExportLensRequest;
class ExportLensResponse;
class GetAnswerRequest;
class GetAnswerResponse;
class GetLensRequest;
class GetLensResponse;
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
class ImportLensRequest;
class ImportLensResponse;
class ListAnswersRequest;
class ListAnswersResponse;
class ListLensReviewImprovementsRequest;
class ListLensReviewImprovementsResponse;
class ListLensReviewsRequest;
class ListLensReviewsResponse;
class ListLensSharesRequest;
class ListLensSharesResponse;
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
class UpdateGlobalSettingsRequest;
class UpdateGlobalSettingsResponse;
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

class QTAWSWELLARCHITECTED_EXPORT WellArchitectedClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    WellArchitectedClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit WellArchitectedClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateLensesResponse * associateLenses(const AssociateLensesRequest &request);
    CreateLensShareResponse * createLensShare(const CreateLensShareRequest &request);
    CreateLensVersionResponse * createLensVersion(const CreateLensVersionRequest &request);
    CreateMilestoneResponse * createMilestone(const CreateMilestoneRequest &request);
    CreateWorkloadResponse * createWorkload(const CreateWorkloadRequest &request);
    CreateWorkloadShareResponse * createWorkloadShare(const CreateWorkloadShareRequest &request);
    DeleteLensResponse * deleteLens(const DeleteLensRequest &request);
    DeleteLensShareResponse * deleteLensShare(const DeleteLensShareRequest &request);
    DeleteWorkloadResponse * deleteWorkload(const DeleteWorkloadRequest &request);
    DeleteWorkloadShareResponse * deleteWorkloadShare(const DeleteWorkloadShareRequest &request);
    DisassociateLensesResponse * disassociateLenses(const DisassociateLensesRequest &request);
    ExportLensResponse * exportLens(const ExportLensRequest &request);
    GetAnswerResponse * getAnswer(const GetAnswerRequest &request);
    GetLensResponse * getLens(const GetLensRequest &request);
    GetLensReviewResponse * getLensReview(const GetLensReviewRequest &request);
    GetLensReviewReportResponse * getLensReviewReport(const GetLensReviewReportRequest &request);
    GetLensVersionDifferenceResponse * getLensVersionDifference(const GetLensVersionDifferenceRequest &request);
    GetMilestoneResponse * getMilestone(const GetMilestoneRequest &request);
    GetWorkloadResponse * getWorkload(const GetWorkloadRequest &request);
    ImportLensResponse * importLens(const ImportLensRequest &request);
    ListAnswersResponse * listAnswers(const ListAnswersRequest &request);
    ListLensReviewImprovementsResponse * listLensReviewImprovements(const ListLensReviewImprovementsRequest &request);
    ListLensReviewsResponse * listLensReviews(const ListLensReviewsRequest &request);
    ListLensSharesResponse * listLensShares(const ListLensSharesRequest &request);
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
    UpdateGlobalSettingsResponse * updateGlobalSettings(const UpdateGlobalSettingsRequest &request);
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
