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

#ifndef QTAWS_MTURKCLIENT_H
#define QTAWS_MTURKCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace MTurk {

class MTurkClientPrivate;
class AcceptQualificationRequestRequest;
class AcceptQualificationRequestResponse;
class ApproveAssignmentRequest;
class ApproveAssignmentResponse;
class AssociateQualificationWithWorkerRequest;
class AssociateQualificationWithWorkerResponse;
class CreateAdditionalAssignmentsForHITRequest;
class CreateAdditionalAssignmentsForHITResponse;
class CreateHITRequest;
class CreateHITResponse;
class CreateHITTypeRequest;
class CreateHITTypeResponse;
class CreateHITWithHITTypeRequest;
class CreateHITWithHITTypeResponse;
class CreateQualificationTypeRequest;
class CreateQualificationTypeResponse;
class CreateWorkerBlockRequest;
class CreateWorkerBlockResponse;
class DeleteHITRequest;
class DeleteHITResponse;
class DeleteQualificationTypeRequest;
class DeleteQualificationTypeResponse;
class DeleteWorkerBlockRequest;
class DeleteWorkerBlockResponse;
class DisassociateQualificationFromWorkerRequest;
class DisassociateQualificationFromWorkerResponse;
class GetAccountBalanceRequest;
class GetAccountBalanceResponse;
class GetAssignmentRequest;
class GetAssignmentResponse;
class GetFileUploadURLRequest;
class GetFileUploadURLResponse;
class GetHITRequest;
class GetHITResponse;
class GetQualificationScoreRequest;
class GetQualificationScoreResponse;
class GetQualificationTypeRequest;
class GetQualificationTypeResponse;
class ListAssignmentsForHITRequest;
class ListAssignmentsForHITResponse;
class ListBonusPaymentsRequest;
class ListBonusPaymentsResponse;
class ListHITsRequest;
class ListHITsResponse;
class ListHITsForQualificationTypeRequest;
class ListHITsForQualificationTypeResponse;
class ListQualificationRequestsRequest;
class ListQualificationRequestsResponse;
class ListQualificationTypesRequest;
class ListQualificationTypesResponse;
class ListReviewPolicyResultsForHITRequest;
class ListReviewPolicyResultsForHITResponse;
class ListReviewableHITsRequest;
class ListReviewableHITsResponse;
class ListWorkerBlocksRequest;
class ListWorkerBlocksResponse;
class ListWorkersWithQualificationTypeRequest;
class ListWorkersWithQualificationTypeResponse;
class NotifyWorkersRequest;
class NotifyWorkersResponse;
class RejectAssignmentRequest;
class RejectAssignmentResponse;
class RejectQualificationRequestRequest;
class RejectQualificationRequestResponse;
class SendBonusRequest;
class SendBonusResponse;
class SendTestEventNotificationRequest;
class SendTestEventNotificationResponse;
class UpdateExpirationForHITRequest;
class UpdateExpirationForHITResponse;
class UpdateHITReviewStatusRequest;
class UpdateHITReviewStatusResponse;
class UpdateHITTypeOfHITRequest;
class UpdateHITTypeOfHITResponse;
class UpdateNotificationSettingsRequest;
class UpdateNotificationSettingsResponse;
class UpdateQualificationTypeRequest;
class UpdateQualificationTypeResponse;

class QTAWS_EXPORT MTurkClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MTurkClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MTurkClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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

protected:
    /// @cond internal
    MTurkClientPrivate * const d_ptr; ///< Internal d-pointer.
    MTurkClient(MTurkClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MTurkClient)
    Q_DISABLE_COPY(MTurkClient)

};

} // namespace MTurk
} // namespace QtAws

#endif
