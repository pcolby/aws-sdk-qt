/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MTURKCLIENT_H
#define QTAWS_MTURKCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace MTurk {

class MTurkClientPrivate;

class QTAWS_EXPORT MTurkClient : public AwsAbstractClient {
    Q_OBJECT

public:
    MTurkClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MTurkClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptQualificationRequestResponse * acceptQualificationRequest(const AcceptQualificationRequestRequest &request);
    ApproveAssignmentResponse * approveAssignment(const ApproveAssignmentRequest &request);
    AssociateQualificationWithWorkerResponse * associateQualificationWithWorker(const AssociateQualificationWithWorkerRequest &request);
    CreateAdditionalAssignmentsForHITResponse * createAdditionalAssignmentsForHIT(const CreateAdditionalAssignmentsForHITRequest &request);
    CreateHITResponse * createHIT(const CreateHITRequest &request);
    CreateHITTypeResponse * createHITType(const CreateHITTypeRequest &request);
    CreateHITWithHITTypeResponse * createHITWithHITType(const CreateHITWithHITTypeRequest &request);
    CreateQualificationTypeResponse * createQualificationType(const CreateQualificationTypeRequest &request);
    CreateWorkerBlockResponse * createWorkerBlock(const CreateWorkerBlockRequest &request);
    DeleteHITResponse * deleteHIT(const DeleteHITRequest &request);
    DeleteQualificationTypeResponse * deleteQualificationType(const DeleteQualificationTypeRequest &request);
    DeleteWorkerBlockResponse * deleteWorkerBlock(const DeleteWorkerBlockRequest &request);
    DisassociateQualificationFromWorkerResponse * disassociateQualificationFromWorker(const DisassociateQualificationFromWorkerRequest &request);
    GetAccountBalanceResponse * getAccountBalance(const GetAccountBalanceRequest &request);
    GetAssignmentResponse * getAssignment(const GetAssignmentRequest &request);
    GetFileUploadURLResponse * getFileUploadURL(const GetFileUploadURLRequest &request);
    GetHITResponse * getHIT(const GetHITRequest &request);
    GetQualificationScoreResponse * getQualificationScore(const GetQualificationScoreRequest &request);
    GetQualificationTypeResponse * getQualificationType(const GetQualificationTypeRequest &request);
    ListAssignmentsForHITResponse * listAssignmentsForHIT(const ListAssignmentsForHITRequest &request);
    ListBonusPaymentsResponse * listBonusPayments(const ListBonusPaymentsRequest &request);
    ListHITsResponse * listHITs(const ListHITsRequest &request);
    ListHITsForQualificationTypeResponse * listHITsForQualificationType(const ListHITsForQualificationTypeRequest &request);
    ListQualificationRequestsResponse * listQualificationRequests(const ListQualificationRequestsRequest &request);
    ListQualificationTypesResponse * listQualificationTypes(const ListQualificationTypesRequest &request);
    ListReviewPolicyResultsForHITResponse * listReviewPolicyResultsForHIT(const ListReviewPolicyResultsForHITRequest &request);
    ListReviewableHITsResponse * listReviewableHITs(const ListReviewableHITsRequest &request);
    ListWorkerBlocksResponse * listWorkerBlocks(const ListWorkerBlocksRequest &request);
    ListWorkersWithQualificationTypeResponse * listWorkersWithQualificationType(const ListWorkersWithQualificationTypeRequest &request);
    NotifyWorkersResponse * notifyWorkers(const NotifyWorkersRequest &request);
    RejectAssignmentResponse * rejectAssignment(const RejectAssignmentRequest &request);
    RejectQualificationRequestResponse * rejectQualificationRequest(const RejectQualificationRequestRequest &request);
    SendBonusResponse * sendBonus(const SendBonusRequest &request);
    SendTestEventNotificationResponse * sendTestEventNotification(const SendTestEventNotificationRequest &request);
    UpdateExpirationForHITResponse * updateExpirationForHIT(const UpdateExpirationForHITRequest &request);
    UpdateHITReviewStatusResponse * updateHITReviewStatus(const UpdateHITReviewStatusRequest &request);
    UpdateHITTypeOfHITResponse * updateHITTypeOfHIT(const UpdateHITTypeOfHITRequest &request);
    UpdateNotificationSettingsResponse * updateNotificationSettings(const UpdateNotificationSettingsRequest &request);
    UpdateQualificationTypeResponse * updateQualificationType(const UpdateQualificationTypeRequest &request);

private:
    Q_DECLARE_PRIVATE(MTurkClient)
    Q_DISABLE_COPY(MTurkClient)

};

} // namespace MTurk
} // namespace AWS

#endif
