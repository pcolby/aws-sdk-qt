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

#include "inspector2client.h"
#include "inspector2client_p.h"

#include "core/awssignaturev4.h"
#include "associatememberrequest.h"
#include "associatememberresponse.h"
#include "batchgetaccountstatusrequest.h"
#include "batchgetaccountstatusresponse.h"
#include "batchgetfreetrialinforequest.h"
#include "batchgetfreetrialinforesponse.h"
#include "cancelfindingsreportrequest.h"
#include "cancelfindingsreportresponse.h"
#include "createfilterrequest.h"
#include "createfilterresponse.h"
#include "createfindingsreportrequest.h"
#include "createfindingsreportresponse.h"
#include "deletefilterrequest.h"
#include "deletefilterresponse.h"
#include "describeorganizationconfigurationrequest.h"
#include "describeorganizationconfigurationresponse.h"
#include "disablerequest.h"
#include "disableresponse.h"
#include "disabledelegatedadminaccountrequest.h"
#include "disabledelegatedadminaccountresponse.h"
#include "disassociatememberrequest.h"
#include "disassociatememberresponse.h"
#include "enablerequest.h"
#include "enableresponse.h"
#include "enabledelegatedadminaccountrequest.h"
#include "enabledelegatedadminaccountresponse.h"
#include "getconfigurationrequest.h"
#include "getconfigurationresponse.h"
#include "getdelegatedadminaccountrequest.h"
#include "getdelegatedadminaccountresponse.h"
#include "getfindingsreportstatusrequest.h"
#include "getfindingsreportstatusresponse.h"
#include "getmemberrequest.h"
#include "getmemberresponse.h"
#include "listaccountpermissionsrequest.h"
#include "listaccountpermissionsresponse.h"
#include "listcoveragerequest.h"
#include "listcoverageresponse.h"
#include "listcoveragestatisticsrequest.h"
#include "listcoveragestatisticsresponse.h"
#include "listdelegatedadminaccountsrequest.h"
#include "listdelegatedadminaccountsresponse.h"
#include "listfiltersrequest.h"
#include "listfiltersresponse.h"
#include "listfindingaggregationsrequest.h"
#include "listfindingaggregationsresponse.h"
#include "listfindingsrequest.h"
#include "listfindingsresponse.h"
#include "listmembersrequest.h"
#include "listmembersresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listusagetotalsrequest.h"
#include "listusagetotalsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateconfigurationrequest.h"
#include "updateconfigurationresponse.h"
#include "updatefilterrequest.h"
#include "updatefilterresponse.h"
#include "updateorganizationconfigurationrequest.h"
#include "updateorganizationconfigurationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Inspector2
 * \brief Contains classess for accessing Inspector2.
 *
 * \inmodule QtAwsInspector2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::Inspector2Client
 * \brief The Inspector2Client class provides access to the Inspector2 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 */

/*!
 * \brief Constructs a Inspector2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Inspector2Client::Inspector2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Inspector2ClientPrivate(this), parent)
{
    Q_D(Inspector2Client);
    d->apiVersion = QStringLiteral("2020-06-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Inspector2");
    d->serviceName = QStringLiteral("inspector2");
}

/*!
 * \overload Inspector2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Inspector2Client::Inspector2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Inspector2ClientPrivate(this), parent)
{
    Q_D(Inspector2Client);
    d->apiVersion = QStringLiteral("2020-06-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Inspector2");
    d->serviceName = QStringLiteral("inspector2");
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * AssociateMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an Amazon Web Services account with an Amazon Inspector delegated
 */
AssociateMemberResponse * Inspector2Client::associateMember(const AssociateMemberRequest &request)
{
    return qobject_cast<AssociateMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * BatchGetAccountStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the Amazon Inspector status of multiple Amazon Web Services accounts within your
 */
BatchGetAccountStatusResponse * Inspector2Client::batchGetAccountStatus(const BatchGetAccountStatusRequest &request)
{
    return qobject_cast<BatchGetAccountStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * BatchGetFreeTrialInfoResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets free trial status for multiple Amazon Web Services
 */
BatchGetFreeTrialInfoResponse * Inspector2Client::batchGetFreeTrialInfo(const BatchGetFreeTrialInfoRequest &request)
{
    return qobject_cast<BatchGetFreeTrialInfoResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * CancelFindingsReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the given findings
 */
CancelFindingsReportResponse * Inspector2Client::cancelFindingsReport(const CancelFindingsReportRequest &request)
{
    return qobject_cast<CancelFindingsReportResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * CreateFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a filter resource using specified filter
 */
CreateFilterResponse * Inspector2Client::createFilter(const CreateFilterRequest &request)
{
    return qobject_cast<CreateFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * CreateFindingsReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a finding
 */
CreateFindingsReportResponse * Inspector2Client::createFindingsReport(const CreateFindingsReportRequest &request)
{
    return qobject_cast<CreateFindingsReportResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * DeleteFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a filter
 */
DeleteFilterResponse * Inspector2Client::deleteFilter(const DeleteFilterRequest &request)
{
    return qobject_cast<DeleteFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * DescribeOrganizationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe Amazon Inspector configuration settings for an Amazon Web Services
 */
DescribeOrganizationConfigurationResponse * Inspector2Client::describeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest &request)
{
    return qobject_cast<DescribeOrganizationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * DisableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables Amazon Inspector scans for one or more Amazon Web Services accounts. Disabling all scan types in an account
 * disables the Amazon Inspector
 */
DisableResponse * Inspector2Client::disable(const DisableRequest &request)
{
    return qobject_cast<DisableResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * DisableDelegatedAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the Amazon Inspector delegated administrator for your
 */
DisableDelegatedAdminAccountResponse * Inspector2Client::disableDelegatedAdminAccount(const DisableDelegatedAdminAccountRequest &request)
{
    return qobject_cast<DisableDelegatedAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * DisassociateMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a member account from an Amazon Inspector delegated
 */
DisassociateMemberResponse * Inspector2Client::disassociateMember(const DisassociateMemberRequest &request)
{
    return qobject_cast<DisassociateMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * EnableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables Amazon Inspector scans for one or more Amazon Web Services
 */
EnableResponse * Inspector2Client::enable(const EnableRequest &request)
{
    return qobject_cast<EnableResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * EnableDelegatedAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the Amazon Inspector delegated administrator for your Organizations
 */
EnableDelegatedAdminAccountResponse * Inspector2Client::enableDelegatedAdminAccount(const EnableDelegatedAdminAccountRequest &request)
{
    return qobject_cast<EnableDelegatedAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * GetConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves setting configurations for Inspector
 */
GetConfigurationResponse * Inspector2Client::getConfiguration(const GetConfigurationRequest &request)
{
    return qobject_cast<GetConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * GetDelegatedAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the Amazon Inspector delegated administrator for your
 */
GetDelegatedAdminAccountResponse * Inspector2Client::getDelegatedAdminAccount(const GetDelegatedAdminAccountRequest &request)
{
    return qobject_cast<GetDelegatedAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * GetFindingsReportStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the status of a findings
 */
GetFindingsReportStatusResponse * Inspector2Client::getFindingsReportStatus(const GetFindingsReportStatusRequest &request)
{
    return qobject_cast<GetFindingsReportStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * GetMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets member information for your
 */
GetMemberResponse * Inspector2Client::getMember(const GetMemberRequest &request)
{
    return qobject_cast<GetMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * ListAccountPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the permissions an account has to configure Amazon
 */
ListAccountPermissionsResponse * Inspector2Client::listAccountPermissions(const ListAccountPermissionsRequest &request)
{
    return qobject_cast<ListAccountPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * ListCoverageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists coverage details for you
 */
ListCoverageResponse * Inspector2Client::listCoverage(const ListCoverageRequest &request)
{
    return qobject_cast<ListCoverageResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * ListCoverageStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists Amazon Inspector coverage statistics for your
 */
ListCoverageStatisticsResponse * Inspector2Client::listCoverageStatistics(const ListCoverageStatisticsRequest &request)
{
    return qobject_cast<ListCoverageStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * ListDelegatedAdminAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about the Amazon Inspector delegated administrator of your
 */
ListDelegatedAdminAccountsResponse * Inspector2Client::listDelegatedAdminAccounts(const ListDelegatedAdminAccountsRequest &request)
{
    return qobject_cast<ListDelegatedAdminAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * ListFiltersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the filters associated with your
 */
ListFiltersResponse * Inspector2Client::listFilters(const ListFiltersRequest &request)
{
    return qobject_cast<ListFiltersResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * ListFindingAggregationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists aggregated finding data for your environment based on specific
 */
ListFindingAggregationsResponse * Inspector2Client::listFindingAggregations(const ListFindingAggregationsRequest &request)
{
    return qobject_cast<ListFindingAggregationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * ListFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists findings for your
 */
ListFindingsResponse * Inspector2Client::listFindings(const ListFindingsRequest &request)
{
    return qobject_cast<ListFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * ListMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List members associated with the Amazon Inspector delegated administrator for your
 */
ListMembersResponse * Inspector2Client::listMembers(const ListMembersRequest &request)
{
    return qobject_cast<ListMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags attached to a given
 */
ListTagsForResourceResponse * Inspector2Client::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * ListUsageTotalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon Inspector usage totals over the last 30
 */
ListUsageTotalsResponse * Inspector2Client::listUsageTotals(const ListUsageTotalsRequest &request)
{
    return qobject_cast<ListUsageTotalsResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to a
 */
TagResourceResponse * Inspector2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a
 */
UntagResourceResponse * Inspector2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * UpdateConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates setting configurations for your Amazon Inspector account. When you use this API as an Amazon Inspector delegated
 * administrator this updates the setting for all accounts you manage. Member accounts in an organization cannot update
 * this
 */
UpdateConfigurationResponse * Inspector2Client::updateConfiguration(const UpdateConfigurationRequest &request)
{
    return qobject_cast<UpdateConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * UpdateFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specifies the action that is to be applied to the findings that match the
 */
UpdateFilterResponse * Inspector2Client::updateFilter(const UpdateFilterRequest &request)
{
    return qobject_cast<UpdateFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the Inspector2Client service, and returns a pointer to an
 * UpdateOrganizationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configurations for your Amazon Inspector
 */
UpdateOrganizationConfigurationResponse * Inspector2Client::updateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest &request)
{
    return qobject_cast<UpdateOrganizationConfigurationResponse *>(send(request));
}

/*!
 * \class QtAws::Inspector2::Inspector2ClientPrivate
 * \brief The Inspector2ClientPrivate class provides private implementation for Inspector2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a Inspector2ClientPrivate object with public implementation \a q.
 */
Inspector2ClientPrivate::Inspector2ClientPrivate(Inspector2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Inspector2
} // namespace QtAws
