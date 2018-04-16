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

#include "fmsclient.h"
#include "fmsclient_p.h"

#include "core/awssignaturev4.h"
#include "associateadminaccountrequest.h"
#include "associateadminaccountresponse.h"
#include "deletenotificationchannelrequest.h"
#include "deletenotificationchannelresponse.h"
#include "deletepolicyrequest.h"
#include "deletepolicyresponse.h"
#include "disassociateadminaccountrequest.h"
#include "disassociateadminaccountresponse.h"
#include "getadminaccountrequest.h"
#include "getadminaccountresponse.h"
#include "getcompliancedetailrequest.h"
#include "getcompliancedetailresponse.h"
#include "getnotificationchannelrequest.h"
#include "getnotificationchannelresponse.h"
#include "getpolicyrequest.h"
#include "getpolicyresponse.h"
#include "listcompliancestatusrequest.h"
#include "listcompliancestatusresponse.h"
#include "listpoliciesrequest.h"
#include "listpoliciesresponse.h"
#include "putnotificationchannelrequest.h"
#include "putnotificationchannelresponse.h"
#include "putpolicyrequest.h"
#include "putpolicyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::FMS
 * \brief The QtAws::FMS contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::FmsClient
 *
 * \brief The FmsClient class provides access the Firewall Management Service (FMS) service.
 *
 * \ingroup FMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 */

/*!
 * \brief Constructs a FmsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
FmsClient::FmsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FmsClientPrivate(this), parent)
{
    Q_D(FmsClient);
    d->apiVersion = QStringLiteral("2018-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("fms");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Firewall Management Service");
    d->serviceName = QStringLiteral("fms");
}

/*!
 * \overload FmsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
FmsClient::FmsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FmsClientPrivate(this), parent)
{
    Q_D(FmsClient);
    d->apiVersion = QStringLiteral("2018-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("fms");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Firewall Management Service");
    d->serviceName = QStringLiteral("fms");
}

/*!
 * Sets the AWS Firewall Manager administrator account. AWS Firewall Manager must be associated with a master account in
 * AWS Organizations or associated with a member account that has the appropriate permissions. If the account ID that you
 * submit is not an AWS Organizations master account, AWS Firewall Manager will set the appropriate permissions for the
 * given member
 *
 * account>
 *
 * The account that you associate with AWS Firewall Manager is called the AWS Firewall manager administrator account.
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateAdminAccountResponse * FmsClient::associateAdminAccount(const AssociateAdminAccountRequest &request)
{
    return qobject_cast<AssociateAdminAccountResponse *>(send(request));
}

/*!
 * Deletes an AWS Firewall Manager association with the IAM role and the Amazon Simple Notification Service (SNS) topic
 * that is used to record AWS Firewall Manager SNS
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteNotificationChannelResponse * FmsClient::deleteNotificationChannel(const DeleteNotificationChannelRequest &request)
{
    return qobject_cast<DeleteNotificationChannelResponse *>(send(request));
}

/*!
 * Permanently deletes an AWS Firewall Manager policy.
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePolicyResponse * FmsClient::deletePolicy(const DeletePolicyRequest &request)
{
    return qobject_cast<DeletePolicyResponse *>(send(request));
}

/*!
 * Disassociates the account that has been set as the AWS Firewall Manager administrator account. You will need to submit
 * an <code>AssociateAdminAccount</code> request to set a new account as the AWS Firewall
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateAdminAccountResponse * FmsClient::disassociateAdminAccount(const DisassociateAdminAccountRequest &request)
{
    return qobject_cast<DisassociateAdminAccountResponse *>(send(request));
}

/*!
 * Returns the AWS Organizations master account that is associated with AWS Firewall Manager as the AWS Firewall Manager
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAdminAccountResponse * FmsClient::getAdminAccount(const GetAdminAccountRequest &request)
{
    return qobject_cast<GetAdminAccountResponse *>(send(request));
}

/*!
 * Returns detailed compliance information about the specified member account. Details include resources that are in and
 * out of compliance with the specified policy. Resources are considered non-compliant if the specified policy has not been
 * applied to
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetComplianceDetailResponse * FmsClient::getComplianceDetail(const GetComplianceDetailRequest &request)
{
    return qobject_cast<GetComplianceDetailResponse *>(send(request));
}

/*!
 * Returns information about the Amazon Simple Notification Service (SNS) topic that is used to record AWS Firewall Manager
 * SNS
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetNotificationChannelResponse * FmsClient::getNotificationChannel(const GetNotificationChannelRequest &request)
{
    return qobject_cast<GetNotificationChannelResponse *>(send(request));
}

/*!
 * Returns information about the specified AWS Firewall Manager
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPolicyResponse * FmsClient::getPolicy(const GetPolicyRequest &request)
{
    return qobject_cast<GetPolicyResponse *>(send(request));
}

/*!
 * Returns an array of <code>PolicyComplianceStatus</code> objects in the response. Use <code>PolicyComplianceStatus</code>
 * to get a summary of which member accounts are protected by the specified policy.
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListComplianceStatusResponse * FmsClient::listComplianceStatus(const ListComplianceStatusRequest &request)
{
    return qobject_cast<ListComplianceStatusResponse *>(send(request));
}

/*!
 * Returns an array of <code>PolicySummary</code> objects in the
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPoliciesResponse * FmsClient::listPolicies(const ListPoliciesRequest &request)
{
    return qobject_cast<ListPoliciesResponse *>(send(request));
}

/*!
 * Designates the IAM role and Amazon Simple Notification Service (SNS) topic that AWS Firewall Manager uses to record SNS
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutNotificationChannelResponse * FmsClient::putNotificationChannel(const PutNotificationChannelRequest &request)
{
    return qobject_cast<PutNotificationChannelResponse *>(send(request));
}

/*!
 * Creates an AWS Firewall Manager
 *
 * @param  request Request to send to Firewall Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutPolicyResponse * FmsClient::putPolicy(const PutPolicyRequest &request)
{
    return qobject_cast<PutPolicyResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  FmsClientPrivate
 *
 * @brief  Private implementation for FmsClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new FmsClientPrivate object.
 *
 * @param  q  Pointer to this object's public FmsClient instance.
 */
FmsClientPrivate::FmsClientPrivate(FmsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace FMS
} // namespace QtAws
