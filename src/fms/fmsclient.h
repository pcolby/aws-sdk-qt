/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_FMSCLIENT_H
#define QTAWS_FMSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace FMS {

class FmsClientPrivate;
class AssociateAdminAccountRequest;
class AssociateAdminAccountResponse;
class DeleteNotificationChannelRequest;
class DeleteNotificationChannelResponse;
class DeletePolicyRequest;
class DeletePolicyResponse;
class DisassociateAdminAccountRequest;
class DisassociateAdminAccountResponse;
class GetAdminAccountRequest;
class GetAdminAccountResponse;
class GetComplianceDetailRequest;
class GetComplianceDetailResponse;
class GetNotificationChannelRequest;
class GetNotificationChannelResponse;
class GetPolicyRequest;
class GetPolicyResponse;
class ListComplianceStatusRequest;
class ListComplianceStatusResponse;
class ListPoliciesRequest;
class ListPoliciesResponse;
class PutNotificationChannelRequest;
class PutNotificationChannelResponse;
class PutPolicyRequest;
class PutPolicyResponse;

class QTAWS_EXPORT FmsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    FmsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    FmsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateAdminAccountResponse * associateAdminAccount(const AssociateAdminAccountRequest &request);
    DeleteNotificationChannelResponse * deleteNotificationChannel(const DeleteNotificationChannelRequest &request);
    DeletePolicyResponse * deletePolicy(const DeletePolicyRequest &request);
    DisassociateAdminAccountResponse * disassociateAdminAccount(const DisassociateAdminAccountRequest &request);
    GetAdminAccountResponse * getAdminAccount(const GetAdminAccountRequest &request);
    GetComplianceDetailResponse * getComplianceDetail(const GetComplianceDetailRequest &request);
    GetNotificationChannelResponse * getNotificationChannel(const GetNotificationChannelRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    ListComplianceStatusResponse * listComplianceStatus(const ListComplianceStatusRequest &request);
    ListPoliciesResponse * listPolicies(const ListPoliciesRequest &request);
    PutNotificationChannelResponse * putNotificationChannel(const PutNotificationChannelRequest &request);
    PutPolicyResponse * putPolicy(const PutPolicyRequest &request);

private:
    Q_DECLARE_PRIVATE(FmsClient)
    Q_DISABLE_COPY(FmsClient)

};

} // namespace FMS
} // namespace QtAws

#endif
