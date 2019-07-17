/*
    Copyright 2013-2019 Paul Colby

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

#include "securityhubclient.h"
#include "securityhubclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptinvitationrequest.h"
#include "acceptinvitationresponse.h"
#include "batchdisablestandardsrequest.h"
#include "batchdisablestandardsresponse.h"
#include "batchenablestandardsrequest.h"
#include "batchenablestandardsresponse.h"
#include "batchimportfindingsrequest.h"
#include "batchimportfindingsresponse.h"
#include "createinsightrequest.h"
#include "createinsightresponse.h"
#include "createmembersrequest.h"
#include "createmembersresponse.h"
#include "declineinvitationsrequest.h"
#include "declineinvitationsresponse.h"
#include "deleteinsightrequest.h"
#include "deleteinsightresponse.h"
#include "deleteinvitationsrequest.h"
#include "deleteinvitationsresponse.h"
#include "deletemembersrequest.h"
#include "deletemembersresponse.h"
#include "disableimportfindingsforproductrequest.h"
#include "disableimportfindingsforproductresponse.h"
#include "disablesecurityhubrequest.h"
#include "disablesecurityhubresponse.h"
#include "disassociatefrommasteraccountrequest.h"
#include "disassociatefrommasteraccountresponse.h"
#include "disassociatemembersrequest.h"
#include "disassociatemembersresponse.h"
#include "enableimportfindingsforproductrequest.h"
#include "enableimportfindingsforproductresponse.h"
#include "enablesecurityhubrequest.h"
#include "enablesecurityhubresponse.h"
#include "getenabledstandardsrequest.h"
#include "getenabledstandardsresponse.h"
#include "getfindingsrequest.h"
#include "getfindingsresponse.h"
#include "getinsightresultsrequest.h"
#include "getinsightresultsresponse.h"
#include "getinsightsrequest.h"
#include "getinsightsresponse.h"
#include "getinvitationscountrequest.h"
#include "getinvitationscountresponse.h"
#include "getmasteraccountrequest.h"
#include "getmasteraccountresponse.h"
#include "getmembersrequest.h"
#include "getmembersresponse.h"
#include "invitemembersrequest.h"
#include "invitemembersresponse.h"
#include "listenabledproductsforimportrequest.h"
#include "listenabledproductsforimportresponse.h"
#include "listinvitationsrequest.h"
#include "listinvitationsresponse.h"
#include "listmembersrequest.h"
#include "listmembersresponse.h"
#include "updatefindingsrequest.h"
#include "updatefindingsresponse.h"
#include "updateinsightrequest.h"
#include "updateinsightresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SecurityHub
 * \brief Contains classess for accessing AWS SecurityHub.
 *
 * \inmodule QtAwsSecurityHub
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::SecurityHubClient
 * \brief The SecurityHubClient class provides access to the AWS SecurityHub service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 */

/*!
 * \brief Constructs a SecurityHubClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SecurityHubClient::SecurityHubClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SecurityHubClientPrivate(this), parent)
{
    Q_D(SecurityHubClient);
    d->apiVersion = QStringLiteral("2018-10-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("securityhub");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS SecurityHub");
    d->serviceName = QStringLiteral("securityhub");
}

/*!
 * \overload SecurityHubClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SecurityHubClient::SecurityHubClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SecurityHubClientPrivate(this), parent)
{
    Q_D(SecurityHubClient);
    d->apiVersion = QStringLiteral("2018-10-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("securityhub");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS SecurityHub");
    d->serviceName = QStringLiteral("securityhub");
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * AcceptInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts the invitation to be monitored by a master SecurityHub
 */
AcceptInvitationResponse * SecurityHubClient::acceptInvitation(const AcceptInvitationRequest &request)
{
    return qobject_cast<AcceptInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * BatchDisableStandardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the standards specified by the standards subscription ARNs. In the context of Security Hub, supported standards
 * (for example, CIS AWS Foundations) are automated and continuous checks that help determine your compliance status
 * against security industry (including AWS) best practices.
 */
BatchDisableStandardsResponse * SecurityHubClient::batchDisableStandards(const BatchDisableStandardsRequest &request)
{
    return qobject_cast<BatchDisableStandardsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * BatchEnableStandardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the standards specified by the standards ARNs. In the context of Security Hub, supported standards (for example,
 * CIS AWS Foundations) are automated and continuous checks that help determine your compliance status against security
 * industry (including AWS) best practices.
 */
BatchEnableStandardsResponse * SecurityHubClient::batchEnableStandards(const BatchEnableStandardsRequest &request)
{
    return qobject_cast<BatchEnableStandardsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * BatchImportFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports security findings that are generated by the integrated third-party products into Security
 */
BatchImportFindingsResponse * SecurityHubClient::batchImportFindings(const BatchImportFindingsRequest &request)
{
    return qobject_cast<BatchImportFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * CreateInsightResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an insight, which is a consolidation of findings that identifies a security area that requires attention or
 */
CreateInsightResponse * SecurityHubClient::createInsight(const CreateInsightRequest &request)
{
    return qobject_cast<CreateInsightResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * CreateMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates member Security Hub accounts in the current AWS account (which becomes the master Security Hub account) that has
 * Security Hub
 */
CreateMembersResponse * SecurityHubClient::createMembers(const CreateMembersRequest &request)
{
    return qobject_cast<CreateMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DeclineInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Declines invitations that are sent to this AWS account (invitee) by the AWS accounts (inviters) that are specified by
 * the account IDs.
 */
DeclineInvitationsResponse * SecurityHubClient::declineInvitations(const DeclineInvitationsRequest &request)
{
    return qobject_cast<DeclineInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DeleteInsightResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an insight that is specified by the insight
 */
DeleteInsightResponse * SecurityHubClient::deleteInsight(const DeleteInsightRequest &request)
{
    return qobject_cast<DeleteInsightResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DeleteInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes invitations that are sent to this AWS account (invitee) by the AWS accounts (inviters) that are specified by
 * their account IDs.
 */
DeleteInvitationsResponse * SecurityHubClient::deleteInvitations(const DeleteInvitationsRequest &request)
{
    return qobject_cast<DeleteInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DeleteMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the Security Hub member accounts that are specified by the account
 */
DeleteMembersResponse * SecurityHubClient::deleteMembers(const DeleteMembersRequest &request)
{
    return qobject_cast<DeleteMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisableImportFindingsForProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops you from being able to import findings generated by integrated third-party providers into Security
 */
DisableImportFindingsForProductResponse * SecurityHubClient::disableImportFindingsForProduct(const DisableImportFindingsForProductRequest &request)
{
    return qobject_cast<DisableImportFindingsForProductResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisableSecurityHubResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the AWS Security Hub
 */
DisableSecurityHubResponse * SecurityHubClient::disableSecurityHub(const DisableSecurityHubRequest &request)
{
    return qobject_cast<DisableSecurityHubResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisassociateFromMasterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the current Security Hub member account from its master
 */
DisassociateFromMasterAccountResponse * SecurityHubClient::disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request)
{
    return qobject_cast<DisassociateFromMasterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisassociateMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the Security Hub member accounts that are specified by the account IDs from their master account.
 */
DisassociateMembersResponse * SecurityHubClient::disassociateMembers(const DisassociateMembersRequest &request)
{
    return qobject_cast<DisassociateMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * EnableImportFindingsForProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables you to import findings generated by integrated third-party providers into Security
 */
EnableImportFindingsForProductResponse * SecurityHubClient::enableImportFindingsForProduct(const EnableImportFindingsForProductRequest &request)
{
    return qobject_cast<EnableImportFindingsForProductResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * EnableSecurityHubResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the AWS Security Hub
 */
EnableSecurityHubResponse * SecurityHubClient::enableSecurityHub(const EnableSecurityHubRequest &request)
{
    return qobject_cast<EnableSecurityHubResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetEnabledStandardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists and describes enabled
 */
GetEnabledStandardsResponse * SecurityHubClient::getEnabledStandards(const GetEnabledStandardsRequest &request)
{
    return qobject_cast<GetEnabledStandardsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists and describes Security Hub-aggregated findings that are specified by filter
 */
GetFindingsResponse * SecurityHubClient::getFindings(const GetFindingsRequest &request)
{
    return qobject_cast<GetFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetInsightResultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the results of the Security Hub insight specified by the insight
 */
GetInsightResultsResponse * SecurityHubClient::getInsightResults(const GetInsightResultsRequest &request)
{
    return qobject_cast<GetInsightResultsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetInsightsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists and describes insights that are specified by insight
 */
GetInsightsResponse * SecurityHubClient::getInsights(const GetInsightsRequest &request)
{
    return qobject_cast<GetInsightsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetInvitationsCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the count of all Security Hub membership invitations that were sent to the current member account, not including
 * the currently accepted invitation.
 */
GetInvitationsCountResponse * SecurityHubClient::getInvitationsCount(const GetInvitationsCountRequest &request)
{
    return qobject_cast<GetInvitationsCountResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetMasterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides the details for the Security Hub master account to the current member account.
 */
GetMasterAccountResponse * SecurityHubClient::getMasterAccount(const GetMasterAccountRequest &request)
{
    return qobject_cast<GetMasterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details on the Security Hub member accounts that are specified by the account IDs.
 */
GetMembersResponse * SecurityHubClient::getMembers(const GetMembersRequest &request)
{
    return qobject_cast<GetMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * InviteMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Invites other AWS accounts to enable Security Hub and become Security Hub member accounts. When an account accepts the
 * invitation and becomes a member account, the master account can view Security Hub findings of the member account.
 */
InviteMembersResponse * SecurityHubClient::inviteMembers(const InviteMembersRequest &request)
{
    return qobject_cast<InviteMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * ListEnabledProductsForImportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Security Hub-integrated third-party findings
 */
ListEnabledProductsForImportResponse * SecurityHubClient::listEnabledProductsForImport(const ListEnabledProductsForImportRequest &request)
{
    return qobject_cast<ListEnabledProductsForImportResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * ListInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Security Hub membership invitations that were sent to the current AWS account.
 */
ListInvitationsResponse * SecurityHubClient::listInvitations(const ListInvitationsRequest &request)
{
    return qobject_cast<ListInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * ListMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists details about all member accounts for the current Security Hub master
 */
ListMembersResponse * SecurityHubClient::listMembers(const ListMembersRequest &request)
{
    return qobject_cast<ListMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * UpdateFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the AWS Security Hub-aggregated findings specified by the filter
 */
UpdateFindingsResponse * SecurityHubClient::updateFindings(const UpdateFindingsRequest &request)
{
    return qobject_cast<UpdateFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * UpdateInsightResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the AWS Security Hub insight specified by the insight
 */
UpdateInsightResponse * SecurityHubClient::updateInsight(const UpdateInsightRequest &request)
{
    return qobject_cast<UpdateInsightResponse *>(send(request));
}

/*!
 * \class QtAws::SecurityHub::SecurityHubClientPrivate
 * \brief The SecurityHubClientPrivate class provides private implementation for SecurityHubClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a SecurityHubClientPrivate object with public implementation \a q.
 */
SecurityHubClientPrivate::SecurityHubClientPrivate(SecurityHubClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SecurityHub
} // namespace QtAws
