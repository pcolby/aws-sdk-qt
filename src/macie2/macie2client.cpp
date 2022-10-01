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

#include "macie2client.h"
#include "macie2client_p.h"

#include "core/awssignaturev4.h"
#include "acceptinvitationrequest.h"
#include "acceptinvitationresponse.h"
#include "batchgetcustomdataidentifiersrequest.h"
#include "batchgetcustomdataidentifiersresponse.h"
#include "createallowlistrequest.h"
#include "createallowlistresponse.h"
#include "createclassificationjobrequest.h"
#include "createclassificationjobresponse.h"
#include "createcustomdataidentifierrequest.h"
#include "createcustomdataidentifierresponse.h"
#include "createfindingsfilterrequest.h"
#include "createfindingsfilterresponse.h"
#include "createinvitationsrequest.h"
#include "createinvitationsresponse.h"
#include "creatememberrequest.h"
#include "creatememberresponse.h"
#include "createsamplefindingsrequest.h"
#include "createsamplefindingsresponse.h"
#include "declineinvitationsrequest.h"
#include "declineinvitationsresponse.h"
#include "deleteallowlistrequest.h"
#include "deleteallowlistresponse.h"
#include "deletecustomdataidentifierrequest.h"
#include "deletecustomdataidentifierresponse.h"
#include "deletefindingsfilterrequest.h"
#include "deletefindingsfilterresponse.h"
#include "deleteinvitationsrequest.h"
#include "deleteinvitationsresponse.h"
#include "deletememberrequest.h"
#include "deletememberresponse.h"
#include "describebucketsrequest.h"
#include "describebucketsresponse.h"
#include "describeclassificationjobrequest.h"
#include "describeclassificationjobresponse.h"
#include "describeorganizationconfigurationrequest.h"
#include "describeorganizationconfigurationresponse.h"
#include "disablemacierequest.h"
#include "disablemacieresponse.h"
#include "disableorganizationadminaccountrequest.h"
#include "disableorganizationadminaccountresponse.h"
#include "disassociatefromadministratoraccountrequest.h"
#include "disassociatefromadministratoraccountresponse.h"
#include "disassociatefrommasteraccountrequest.h"
#include "disassociatefrommasteraccountresponse.h"
#include "disassociatememberrequest.h"
#include "disassociatememberresponse.h"
#include "enablemacierequest.h"
#include "enablemacieresponse.h"
#include "enableorganizationadminaccountrequest.h"
#include "enableorganizationadminaccountresponse.h"
#include "getadministratoraccountrequest.h"
#include "getadministratoraccountresponse.h"
#include "getallowlistrequest.h"
#include "getallowlistresponse.h"
#include "getbucketstatisticsrequest.h"
#include "getbucketstatisticsresponse.h"
#include "getclassificationexportconfigurationrequest.h"
#include "getclassificationexportconfigurationresponse.h"
#include "getcustomdataidentifierrequest.h"
#include "getcustomdataidentifierresponse.h"
#include "getfindingstatisticsrequest.h"
#include "getfindingstatisticsresponse.h"
#include "getfindingsrequest.h"
#include "getfindingsresponse.h"
#include "getfindingsfilterrequest.h"
#include "getfindingsfilterresponse.h"
#include "getfindingspublicationconfigurationrequest.h"
#include "getfindingspublicationconfigurationresponse.h"
#include "getinvitationscountrequest.h"
#include "getinvitationscountresponse.h"
#include "getmaciesessionrequest.h"
#include "getmaciesessionresponse.h"
#include "getmasteraccountrequest.h"
#include "getmasteraccountresponse.h"
#include "getmemberrequest.h"
#include "getmemberresponse.h"
#include "getrevealconfigurationrequest.h"
#include "getrevealconfigurationresponse.h"
#include "getsensitivedataoccurrencesrequest.h"
#include "getsensitivedataoccurrencesresponse.h"
#include "getsensitivedataoccurrencesavailabilityrequest.h"
#include "getsensitivedataoccurrencesavailabilityresponse.h"
#include "getusagestatisticsrequest.h"
#include "getusagestatisticsresponse.h"
#include "getusagetotalsrequest.h"
#include "getusagetotalsresponse.h"
#include "listallowlistsrequest.h"
#include "listallowlistsresponse.h"
#include "listclassificationjobsrequest.h"
#include "listclassificationjobsresponse.h"
#include "listcustomdataidentifiersrequest.h"
#include "listcustomdataidentifiersresponse.h"
#include "listfindingsrequest.h"
#include "listfindingsresponse.h"
#include "listfindingsfiltersrequest.h"
#include "listfindingsfiltersresponse.h"
#include "listinvitationsrequest.h"
#include "listinvitationsresponse.h"
#include "listmanageddataidentifiersrequest.h"
#include "listmanageddataidentifiersresponse.h"
#include "listmembersrequest.h"
#include "listmembersresponse.h"
#include "listorganizationadminaccountsrequest.h"
#include "listorganizationadminaccountsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putclassificationexportconfigurationrequest.h"
#include "putclassificationexportconfigurationresponse.h"
#include "putfindingspublicationconfigurationrequest.h"
#include "putfindingspublicationconfigurationresponse.h"
#include "searchresourcesrequest.h"
#include "searchresourcesresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testcustomdataidentifierrequest.h"
#include "testcustomdataidentifierresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateallowlistrequest.h"
#include "updateallowlistresponse.h"
#include "updateclassificationjobrequest.h"
#include "updateclassificationjobresponse.h"
#include "updatefindingsfilterrequest.h"
#include "updatefindingsfilterresponse.h"
#include "updatemaciesessionrequest.h"
#include "updatemaciesessionresponse.h"
#include "updatemembersessionrequest.h"
#include "updatemembersessionresponse.h"
#include "updateorganizationconfigurationrequest.h"
#include "updateorganizationconfigurationresponse.h"
#include "updaterevealconfigurationrequest.h"
#include "updaterevealconfigurationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Macie2
 * \brief Contains classess for accessing Amazon Macie 2.
 *
 * \inmodule QtAwsMacie2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::Macie2Client
 * \brief The Macie2Client class provides access to the Amazon Macie 2 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 */

/*!
 * \brief Constructs a Macie2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Macie2Client::Macie2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Macie2ClientPrivate(this), parent)
{
    Q_D(Macie2Client);
    d->apiVersion = QStringLiteral("2020-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("macie2");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Macie 2");
    d->serviceName = QStringLiteral("macie2");
}

/*!
 * \overload Macie2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Macie2Client::Macie2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Macie2ClientPrivate(this), parent)
{
    Q_D(Macie2Client);
    d->apiVersion = QStringLiteral("2020-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("macie2");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Macie 2");
    d->serviceName = QStringLiteral("macie2");
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * AcceptInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts an Amazon Macie membership invitation that was received from a specific
 */
AcceptInvitationResponse * Macie2Client::acceptInvitation(const AcceptInvitationRequest &request)
{
    return qobject_cast<AcceptInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * BatchGetCustomDataIdentifiersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about one or more custom data
 */
BatchGetCustomDataIdentifiersResponse * Macie2Client::batchGetCustomDataIdentifiers(const BatchGetCustomDataIdentifiersRequest &request)
{
    return qobject_cast<BatchGetCustomDataIdentifiersResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * CreateAllowListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and defines the settings for an allow
 */
CreateAllowListResponse * Macie2Client::createAllowList(const CreateAllowListRequest &request)
{
    return qobject_cast<CreateAllowListResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * CreateClassificationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and defines the settings for a classification
 */
CreateClassificationJobResponse * Macie2Client::createClassificationJob(const CreateClassificationJobRequest &request)
{
    return qobject_cast<CreateClassificationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * CreateCustomDataIdentifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and defines the criteria and other settings for a custom data
 */
CreateCustomDataIdentifierResponse * Macie2Client::createCustomDataIdentifier(const CreateCustomDataIdentifierRequest &request)
{
    return qobject_cast<CreateCustomDataIdentifierResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * CreateFindingsFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and defines the criteria and other settings for a findings
 */
CreateFindingsFilterResponse * Macie2Client::createFindingsFilter(const CreateFindingsFilterRequest &request)
{
    return qobject_cast<CreateFindingsFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * CreateInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends an Amazon Macie membership invitation to one or more
 */
CreateInvitationsResponse * Macie2Client::createInvitations(const CreateInvitationsRequest &request)
{
    return qobject_cast<CreateInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * CreateMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an account with an Amazon Macie administrator
 */
CreateMemberResponse * Macie2Client::createMember(const CreateMemberRequest &request)
{
    return qobject_cast<CreateMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * CreateSampleFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates sample
 */
CreateSampleFindingsResponse * Macie2Client::createSampleFindings(const CreateSampleFindingsRequest &request)
{
    return qobject_cast<CreateSampleFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DeclineInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Declines Amazon Macie membership invitations that were received from specific
 */
DeclineInvitationsResponse * Macie2Client::declineInvitations(const DeclineInvitationsRequest &request)
{
    return qobject_cast<DeclineInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DeleteAllowListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an allow
 */
DeleteAllowListResponse * Macie2Client::deleteAllowList(const DeleteAllowListRequest &request)
{
    return qobject_cast<DeleteAllowListResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DeleteCustomDataIdentifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Soft deletes a custom data
 */
DeleteCustomDataIdentifierResponse * Macie2Client::deleteCustomDataIdentifier(const DeleteCustomDataIdentifierRequest &request)
{
    return qobject_cast<DeleteCustomDataIdentifierResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DeleteFindingsFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a findings
 */
DeleteFindingsFilterResponse * Macie2Client::deleteFindingsFilter(const DeleteFindingsFilterRequest &request)
{
    return qobject_cast<DeleteFindingsFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DeleteInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes Amazon Macie membership invitations that were received from specific
 */
DeleteInvitationsResponse * Macie2Client::deleteInvitations(const DeleteInvitationsRequest &request)
{
    return qobject_cast<DeleteInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DeleteMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the association between an Amazon Macie administrator account and an
 */
DeleteMemberResponse * Macie2Client::deleteMember(const DeleteMemberRequest &request)
{
    return qobject_cast<DeleteMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DescribeBucketsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves (queries) statistical data and other information about one or more S3 buckets that Amazon Macie monitors and
 */
DescribeBucketsResponse * Macie2Client::describeBuckets(const DescribeBucketsRequest &request)
{
    return qobject_cast<DescribeBucketsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DescribeClassificationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the status and settings for a classification
 */
DescribeClassificationJobResponse * Macie2Client::describeClassificationJob(const DescribeClassificationJobRequest &request)
{
    return qobject_cast<DescribeClassificationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DescribeOrganizationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the Amazon Macie configuration settings for an organization in
 */
DescribeOrganizationConfigurationResponse * Macie2Client::describeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest &request)
{
    return qobject_cast<DescribeOrganizationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DisableMacieResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables Amazon Macie and deletes all settings and resources for a Macie
 */
DisableMacieResponse * Macie2Client::disableMacie(const DisableMacieRequest &request)
{
    return qobject_cast<DisableMacieResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DisableOrganizationAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables an account as the delegated Amazon Macie administrator account for an organization in
 */
DisableOrganizationAdminAccountResponse * Macie2Client::disableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest &request)
{
    return qobject_cast<DisableOrganizationAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DisassociateFromAdministratorAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a member account from its Amazon Macie administrator
 */
DisassociateFromAdministratorAccountResponse * Macie2Client::disassociateFromAdministratorAccount(const DisassociateFromAdministratorAccountRequest &request)
{
    return qobject_cast<DisassociateFromAdministratorAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DisassociateFromMasterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * (Deprecated) Disassociates a member account from its Amazon Macie administrator account. This operation has been
 * replaced by the <link linkend="DisassociateFromAdministratorAccount">DisassociateFromAdministratorAccount</link>
 */
DisassociateFromMasterAccountResponse * Macie2Client::disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request)
{
    return qobject_cast<DisassociateFromMasterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * DisassociateMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an Amazon Macie administrator account from a member
 */
DisassociateMemberResponse * Macie2Client::disassociateMember(const DisassociateMemberRequest &request)
{
    return qobject_cast<DisassociateMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * EnableMacieResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables Amazon Macie and specifies the configuration settings for a Macie
 */
EnableMacieResponse * Macie2Client::enableMacie(const EnableMacieRequest &request)
{
    return qobject_cast<EnableMacieResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * EnableOrganizationAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Designates an account as the delegated Amazon Macie administrator account for an organization in
 */
EnableOrganizationAdminAccountResponse * Macie2Client::enableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest &request)
{
    return qobject_cast<EnableOrganizationAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetAdministratorAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the Amazon Macie administrator account for an
 */
GetAdministratorAccountResponse * Macie2Client::getAdministratorAccount(const GetAdministratorAccountRequest &request)
{
    return qobject_cast<GetAdministratorAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetAllowListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the settings and status of an allow
 */
GetAllowListResponse * Macie2Client::getAllowList(const GetAllowListRequest &request)
{
    return qobject_cast<GetAllowListResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetBucketStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves (queries) aggregated statistical data about S3 buckets that Amazon Macie monitors and
 */
GetBucketStatisticsResponse * Macie2Client::getBucketStatistics(const GetBucketStatisticsRequest &request)
{
    return qobject_cast<GetBucketStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetClassificationExportConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the configuration settings for storing data classification
 */
GetClassificationExportConfigurationResponse * Macie2Client::getClassificationExportConfiguration(const GetClassificationExportConfigurationRequest &request)
{
    return qobject_cast<GetClassificationExportConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetCustomDataIdentifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the criteria and other settings for a custom data
 */
GetCustomDataIdentifierResponse * Macie2Client::getCustomDataIdentifier(const GetCustomDataIdentifierRequest &request)
{
    return qobject_cast<GetCustomDataIdentifierResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetFindingStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves (queries) aggregated statistical data about
 */
GetFindingStatisticsResponse * Macie2Client::getFindingStatistics(const GetFindingStatisticsRequest &request)
{
    return qobject_cast<GetFindingStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details of one or more
 */
GetFindingsResponse * Macie2Client::getFindings(const GetFindingsRequest &request)
{
    return qobject_cast<GetFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetFindingsFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the criteria and other settings for a findings
 */
GetFindingsFilterResponse * Macie2Client::getFindingsFilter(const GetFindingsFilterRequest &request)
{
    return qobject_cast<GetFindingsFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetFindingsPublicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the configuration settings for publishing findings to Security
 */
GetFindingsPublicationConfigurationResponse * Macie2Client::getFindingsPublicationConfiguration(const GetFindingsPublicationConfigurationRequest &request)
{
    return qobject_cast<GetFindingsPublicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetInvitationsCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the count of Amazon Macie membership invitations that were received by an
 */
GetInvitationsCountResponse * Macie2Client::getInvitationsCount(const GetInvitationsCountRequest &request)
{
    return qobject_cast<GetInvitationsCountResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetMacieSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the current status and configuration settings for an Amazon Macie
 */
GetMacieSessionResponse * Macie2Client::getMacieSession(const GetMacieSessionRequest &request)
{
    return qobject_cast<GetMacieSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetMasterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * (Deprecated) Retrieves information about the Amazon Macie administrator account for an account. This operation has been
 * replaced by the <link linkend="GetAdministratorAccount">GetAdministratorAccount</link>
 */
GetMasterAccountResponse * Macie2Client::getMasterAccount(const GetMasterAccountRequest &request)
{
    return qobject_cast<GetMasterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an account that's associated with an Amazon Macie administrator
 */
GetMemberResponse * Macie2Client::getMember(const GetMemberRequest &request)
{
    return qobject_cast<GetMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetRevealConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the status and configuration settings for retrieving occurrences of sensitive data reported by
 */
GetRevealConfigurationResponse * Macie2Client::getRevealConfiguration(const GetRevealConfigurationRequest &request)
{
    return qobject_cast<GetRevealConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetSensitiveDataOccurrencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves occurrences of sensitive data reported by a
 */
GetSensitiveDataOccurrencesResponse * Macie2Client::getSensitiveDataOccurrences(const GetSensitiveDataOccurrencesRequest &request)
{
    return qobject_cast<GetSensitiveDataOccurrencesResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetSensitiveDataOccurrencesAvailabilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks whether occurrences of sensitive data can be retrieved for a
 */
GetSensitiveDataOccurrencesAvailabilityResponse * Macie2Client::getSensitiveDataOccurrencesAvailability(const GetSensitiveDataOccurrencesAvailabilityRequest &request)
{
    return qobject_cast<GetSensitiveDataOccurrencesAvailabilityResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetUsageStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves (queries) quotas and aggregated usage data for one or more
 */
GetUsageStatisticsResponse * Macie2Client::getUsageStatistics(const GetUsageStatisticsRequest &request)
{
    return qobject_cast<GetUsageStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * GetUsageTotalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves (queries) aggregated usage data for an
 */
GetUsageTotalsResponse * Macie2Client::getUsageTotals(const GetUsageTotalsRequest &request)
{
    return qobject_cast<GetUsageTotalsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * ListAllowListsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a subset of information about all the allow lists for an
 */
ListAllowListsResponse * Macie2Client::listAllowLists(const ListAllowListsRequest &request)
{
    return qobject_cast<ListAllowListsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * ListClassificationJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a subset of information about one or more classification
 */
ListClassificationJobsResponse * Macie2Client::listClassificationJobs(const ListClassificationJobsRequest &request)
{
    return qobject_cast<ListClassificationJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * ListCustomDataIdentifiersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a subset of information about all the custom data identifiers for an
 */
ListCustomDataIdentifiersResponse * Macie2Client::listCustomDataIdentifiers(const ListCustomDataIdentifiersRequest &request)
{
    return qobject_cast<ListCustomDataIdentifiersResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * ListFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a subset of information about one or more
 */
ListFindingsResponse * Macie2Client::listFindings(const ListFindingsRequest &request)
{
    return qobject_cast<ListFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * ListFindingsFiltersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a subset of information about all the findings filters for an
 */
ListFindingsFiltersResponse * Macie2Client::listFindingsFilters(const ListFindingsFiltersRequest &request)
{
    return qobject_cast<ListFindingsFiltersResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * ListInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the Amazon Macie membership invitations that were received by an
 */
ListInvitationsResponse * Macie2Client::listInvitations(const ListInvitationsRequest &request)
{
    return qobject_cast<ListInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * ListManagedDataIdentifiersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about all the managed data identifiers that Amazon Macie currently
 */
ListManagedDataIdentifiersResponse * Macie2Client::listManagedDataIdentifiers(const ListManagedDataIdentifiersRequest &request)
{
    return qobject_cast<ListManagedDataIdentifiersResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * ListMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the accounts that are associated with an Amazon Macie administrator
 */
ListMembersResponse * Macie2Client::listMembers(const ListMembersRequest &request)
{
    return qobject_cast<ListMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * ListOrganizationAdminAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the delegated Amazon Macie administrator account for an organization in
 */
ListOrganizationAdminAccountsResponse * Macie2Client::listOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest &request)
{
    return qobject_cast<ListOrganizationAdminAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the tags (keys and values) that are associated with an Amazon Macie
 */
ListTagsForResourceResponse * Macie2Client::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * PutClassificationExportConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates the configuration settings for storing data classification
 */
PutClassificationExportConfigurationResponse * Macie2Client::putClassificationExportConfiguration(const PutClassificationExportConfigurationRequest &request)
{
    return qobject_cast<PutClassificationExportConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * PutFindingsPublicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration settings for publishing findings to Security
 */
PutFindingsPublicationConfigurationResponse * Macie2Client::putFindingsPublicationConfiguration(const PutFindingsPublicationConfigurationRequest &request)
{
    return qobject_cast<PutFindingsPublicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * SearchResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves (queries) statistical data and other information about Amazon Web Services resources that Amazon Macie
 * monitors and
 */
SearchResourcesResponse * Macie2Client::searchResources(const SearchResourcesRequest &request)
{
    return qobject_cast<SearchResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates one or more tags (keys and values) that are associated with an Amazon Macie
 */
TagResourceResponse * Macie2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * TestCustomDataIdentifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests a custom data
 */
TestCustomDataIdentifierResponse * Macie2Client::testCustomDataIdentifier(const TestCustomDataIdentifierRequest &request)
{
    return qobject_cast<TestCustomDataIdentifierResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags (keys and values) from an Amazon Macie
 */
UntagResourceResponse * Macie2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * UpdateAllowListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings for an allow
 */
UpdateAllowListResponse * Macie2Client::updateAllowList(const UpdateAllowListRequest &request)
{
    return qobject_cast<UpdateAllowListResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * UpdateClassificationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the status of a classification
 */
UpdateClassificationJobResponse * Macie2Client::updateClassificationJob(const UpdateClassificationJobRequest &request)
{
    return qobject_cast<UpdateClassificationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * UpdateFindingsFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the criteria and other settings for a findings
 */
UpdateFindingsFilterResponse * Macie2Client::updateFindingsFilter(const UpdateFindingsFilterRequest &request)
{
    return qobject_cast<UpdateFindingsFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * UpdateMacieSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Suspends or re-enables Amazon Macie, or updates the configuration settings for a Macie
 */
UpdateMacieSessionResponse * Macie2Client::updateMacieSession(const UpdateMacieSessionRequest &request)
{
    return qobject_cast<UpdateMacieSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * UpdateMemberSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables an Amazon Macie administrator to suspend or re-enable Macie for a member
 */
UpdateMemberSessionResponse * Macie2Client::updateMemberSession(const UpdateMemberSessionRequest &request)
{
    return qobject_cast<UpdateMemberSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * UpdateOrganizationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the Amazon Macie configuration settings for an organization in
 */
UpdateOrganizationConfigurationResponse * Macie2Client::updateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest &request)
{
    return qobject_cast<UpdateOrganizationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Macie2Client service, and returns a pointer to an
 * UpdateRevealConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status and configuration settings for retrieving occurrences of sensitive data reported by
 */
UpdateRevealConfigurationResponse * Macie2Client::updateRevealConfiguration(const UpdateRevealConfigurationRequest &request)
{
    return qobject_cast<UpdateRevealConfigurationResponse *>(send(request));
}

/*!
 * \class QtAws::Macie2::Macie2ClientPrivate
 * \brief The Macie2ClientPrivate class provides private implementation for Macie2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a Macie2ClientPrivate object with public implementation \a q.
 */
Macie2ClientPrivate::Macie2ClientPrivate(Macie2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Macie2
} // namespace QtAws
