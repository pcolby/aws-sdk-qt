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

#include "supportclient.h"
#include "supportclient_p.h"

#include "core/awssignaturev4.h"
#include "addattachmentstosetrequest.h"
#include "addattachmentstosetresponse.h"
#include "addcommunicationtocaserequest.h"
#include "addcommunicationtocaseresponse.h"
#include "createcaserequest.h"
#include "createcaseresponse.h"
#include "describeattachmentrequest.h"
#include "describeattachmentresponse.h"
#include "describecasesrequest.h"
#include "describecasesresponse.h"
#include "describecommunicationsrequest.h"
#include "describecommunicationsresponse.h"
#include "describeservicesrequest.h"
#include "describeservicesresponse.h"
#include "describeseveritylevelsrequest.h"
#include "describeseveritylevelsresponse.h"
#include "describetrustedadvisorcheckrefreshstatusesrequest.h"
#include "describetrustedadvisorcheckrefreshstatusesresponse.h"
#include "describetrustedadvisorcheckresultrequest.h"
#include "describetrustedadvisorcheckresultresponse.h"
#include "describetrustedadvisorchecksummariesrequest.h"
#include "describetrustedadvisorchecksummariesresponse.h"
#include "describetrustedadvisorchecksrequest.h"
#include "describetrustedadvisorchecksresponse.h"
#include "refreshtrustedadvisorcheckrequest.h"
#include "refreshtrustedadvisorcheckresponse.h"
#include "resolvecaserequest.h"
#include "resolvecaseresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Support
 * \brief The QtAws::Support contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Support {

/*!
 * \class QtAws::Support::SupportClient
 *
 * \brief The SupportClient class provides access the AWS Support service.
 *
 * \ingroup Support
 *
 *  <fullname>AWS Support</fullname>
 * 
 *  The AWS Support API reference is intended for programmers who need detailed information about the AWS Support operations
 *  and data types. This service enables you to manage your AWS Support cases programmatically. It uses HTTP methods that
 *  return results in JSON
 * 
 *  format>
 * 
 *  The AWS Support service also exposes a set of <a href="http://aws.amazon.com/premiumsupport/trustedadvisor/">Trusted
 *  Advisor</a> features. You can retrieve a list of checks and their descriptions, get check results, specify checks to
 *  refresh, and get the refresh status of checks.
 * 
 *  </p
 * 
 *  The following list describes the AWS Support case management
 * 
 *  operations> <ul> <li>
 * 
 *  <b>Service names, issue categories, and available severity levels. </b>The <a>DescribeServices</a> and
 *  <a>DescribeSeverityLevels</a> operations return AWS service names, service codes, service categories, and problem
 *  severity levels. You use these values when you call the <a>CreateCase</a> operation.
 * 
 *  </p </li> <li>
 * 
 *  <b>Case creation, case details, and case resolution.</b> The <a>CreateCase</a>, <a>DescribeCases</a>,
 *  <a>DescribeAttachment</a>, and <a>ResolveCase</a> operations create AWS Support cases, retrieve information about cases,
 *  and resolve
 * 
 *  cases> </li> <li>
 * 
 *  <b>Case communication.</b> The <a>DescribeCommunications</a>, <a>AddCommunicationToCase</a>, and
 *  <a>AddAttachmentsToSet</a> operations retrieve and add communications and attachments to AWS Support cases.
 * 
 *  </p </li> </ul>
 * 
 *  The following list describes the operations available from the AWS Support service for Trusted
 * 
 *  Advisor> <ul> <li>
 * 
 *  <a>DescribeTrustedAdvisorChecks</a> returns the list of checks that run against your AWS
 * 
 *  resources> </li> <li>
 * 
 *  Using the <code>checkId</code> for a specific check returned by <a>DescribeTrustedAdvisorChecks</a>, you can call
 *  <a>DescribeTrustedAdvisorCheckResult</a> to obtain the results for the check you
 * 
 *  specified> </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckSummaries</a> returns summarized results for one or more Trusted Advisor
 * 
 *  checks> </li> <li>
 * 
 *  <a>RefreshTrustedAdvisorCheck</a> requests that Trusted Advisor rerun a specified check.
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckRefreshStatuses</a> reports the refresh status of one or more checks.
 * 
 *  </p </li> </ul>
 * 
 *  For authentication of requests, AWS Support uses <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  See <a href="http://docs.aws.amazon.com/awssupport/latest/user/Welcome.html">About the AWS Support API</a> in the <i>AWS
 *  Support User Guide</i> for information about how to use this service to create and manage your support cases, and how to
 *  call Trusted Advisor for results of checks on your resources.
 */

/*!
 * \brief Constructs a SupportClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SupportClient::SupportClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SupportClientPrivate(this), parent)
{
    Q_D(SupportClient);
    d->apiVersion = QStringLiteral("2013-04-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("support");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Support");
    d->serviceName = QStringLiteral("support");
}

/*!
 * \overload SupportClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
SupportClient::SupportClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SupportClientPrivate(this), parent)
{
    Q_D(SupportClient);
    d->apiVersion = QStringLiteral("2013-04-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("support");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Support");
    d->serviceName = QStringLiteral("support");
}

/*!
 * Adds one or more attachments to an attachment set. If an <code>attachmentSetId</code> is not specified, a new attachment
 * set is created, and the ID of the set is returned in the response. If an <code>attachmentSetId</code> is specified, the
 * attachments are added to the specified set, if it
 *
 * exists>
 *
 * An attachment set is a temporary container for attachments that are to be added to a case or case communication. The set
 * is available for one hour after it is created; the <code>expiryTime</code> returned in the response indicates when the
 * set expires. The maximum number of attachments in a set is 3, and the maximum size of any attachment in the set is 5
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddAttachmentsToSetResponse * SupportClient::addAttachmentsToSet(const AddAttachmentsToSetRequest &request)
{
    return qobject_cast<AddAttachmentsToSetResponse *>(send(request));
}

/*!
 * Adds additional customer communication to an AWS Support case. You use the <code>caseId</code> value to identify the
 * case to add communication to. You can list a set of email addresses to copy on the communication using the
 * <code>ccEmailAddresses</code> value. The <code>communicationBody</code> value contains the text of the
 *
 * communication>
 *
 * The response indicates the success or failure of the
 *
 * request>
 *
 * This operation implements a subset of the features of the AWS Support
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddCommunicationToCaseResponse * SupportClient::addCommunicationToCase(const AddCommunicationToCaseRequest &request)
{
    return qobject_cast<AddCommunicationToCaseResponse *>(send(request));
}

/*!
 * Creates a new case in the AWS Support Center. This operation is modeled on the behavior of the AWS Support Center <a
 * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a> page. Its parameters require you to
 * specify the following information:
 *
 * </p <ul> <li>
 *
 * <b>issueType.</b> The type of issue for the case. You can specify either "customer-service" or "technical." If you do
 * not indicate a value, the default is "technical."
 *
 * </p </li> <li>
 *
 * <b>serviceCode.</b> The code for an AWS service. You obtain the <code>serviceCode</code> by calling
 * <a>DescribeServices</a>.
 *
 * </p </li> <li>
 *
 * <b>categoryCode.</b> The category for the service defined for the <code>serviceCode</code> value. You also obtain the
 * category code for a service by calling <a>DescribeServices</a>. Each AWS service defines its own set of category codes.
 *
 * </p </li> <li>
 *
 * <b>severityCode.</b> A value that indicates the urgency of the case, which in turn determines the response time
 * according to your service level agreement with AWS Support. You obtain the SeverityCode by calling
 *
 * <a>DescribeSeverityLevels</a>> </li> <li>
 *
 * <b>subject.</b> The <b>Subject</b> field on the AWS Support Center <a
 * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
 *
 * page> </li> <li>
 *
 * <b>communicationBody.</b> The <b>Description</b> field on the AWS Support Center <a
 * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
 *
 * page> </li> <li>
 *
 * <b>attachmentSetId.</b> The ID of a set of attachments that has been created by using
 *
 * <a>AddAttachmentsToSet</a>> </li> <li>
 *
 * <b>language.</b> The human language in which AWS Support handles the case. English and Japanese are currently
 *
 * supported> </li> <li>
 *
 * <b>ccEmailAddresses.</b> The AWS Support Center <b>CC</b> field on the <a
 * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a> page. You can list email addresses to be
 * copied on any correspondence about the case. The account that opens the case is already identified by passing the AWS
 * Credentials in the HTTP POST method or in a method or function call from one of the programming languages supported by
 * an <a href="http://aws.amazon.com/tools/">AWS SDK</a>.
 *
 * </p </li> </ul> <note>
 *
 * To add additional communication or attachments to an existing case, use
 *
 * <a>AddCommunicationToCase</a>> </note>
 *
 * A successful <a>CreateCase</a> request returns an AWS Support case number. Case numbers are used by the
 * <a>DescribeCases</a> operation to retrieve existing AWS Support cases.
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCaseResponse * SupportClient::createCase(const CreateCaseRequest &request)
{
    return qobject_cast<CreateCaseResponse *>(send(request));
}

/*!
 * Returns the attachment that has the specified ID. Attachment IDs are generated by the case management system when you
 * add an attachment to a case or case communication. Attachment IDs are returned in the <a>AttachmentDetails</a> objects
 * that are returned by the <a>DescribeCommunications</a>
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAttachmentResponse * SupportClient::describeAttachment(const DescribeAttachmentRequest &request)
{
    return qobject_cast<DescribeAttachmentResponse *>(send(request));
}

/*!
 * Returns a list of cases that you specify by passing one or more case IDs. In addition, you can filter the cases by date
 * by setting values for the <code>afterTime</code> and <code>beforeTime</code> request parameters. You can set values for
 * the <code>includeResolvedCases</code> and <code>includeCommunications</code> request parameters to control how much
 * information is returned.
 *
 * </p
 *
 * Case data is available for 12 months after creation. If a case was created more than 12 months ago, a request for data
 * might cause an
 *
 * error>
 *
 * The response returns the following in JSON
 *
 * format> <ul> <li>
 *
 * One or more <a>CaseDetails</a> data types.
 *
 * </p </li> <li>
 *
 * One or more <code>nextToken</code> values, which specify where to paginate the returned records represented by the
 * <code>CaseDetails</code>
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCasesResponse * SupportClient::describeCases(const DescribeCasesRequest &request)
{
    return qobject_cast<DescribeCasesResponse *>(send(request));
}

/*!
 * Returns communications (and attachments) for one or more support cases. You can use the <code>afterTime</code> and
 * <code>beforeTime</code> parameters to filter by date. You can use the <code>caseId</code> parameter to restrict the
 * results to a particular
 *
 * case>
 *
 * Case data is available for 12 months after creation. If a case was created more than 12 months ago, a request for data
 * might cause an
 *
 * error>
 *
 * You can use the <code>maxResults</code> and <code>nextToken</code> parameters to control the pagination of the result
 * set. Set <code>maxResults</code> to the number of cases you want displayed on each page, and use <code>nextToken</code>
 * to specify the resumption of
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCommunicationsResponse * SupportClient::describeCommunications(const DescribeCommunicationsRequest &request)
{
    return qobject_cast<DescribeCommunicationsResponse *>(send(request));
}

/*!
 * Returns the current list of AWS services and a list of service categories that applies to each one. You then use service
 * names and categories in your <a>CreateCase</a> requests. Each AWS service has its own set of
 *
 * categories>
 *
 * The service codes and category codes correspond to the values that are displayed in the <b>Service</b> and
 * <b>Category</b> drop-down lists on the AWS Support Center <a
 * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a> page. The values in those fields,
 * however, do not necessarily match the service codes and categories returned by the <code>DescribeServices</code>
 * request. Always use the service codes and categories obtained programmatically. This practice ensures that you always
 * have the most recent set of service and category
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeServicesResponse * SupportClient::describeServices(const DescribeServicesRequest &request)
{
    return qobject_cast<DescribeServicesResponse *>(send(request));
}

/*!
 * Returns the list of severity levels that you can assign to an AWS Support case. The severity level for a case is also a
 * field in the <a>CaseDetails</a> data type included in any <a>CreateCase</a> request.
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeSeverityLevelsResponse * SupportClient::describeSeverityLevels(const DescribeSeverityLevelsRequest &request)
{
    return qobject_cast<DescribeSeverityLevelsResponse *>(send(request));
}

/*!
 * Returns the refresh status of the Trusted Advisor checks that have the specified check IDs. Check IDs can be obtained by
 * calling
 *
 * <a>DescribeTrustedAdvisorChecks</a>> <note>
 *
 * Some checks are refreshed automatically, and their refresh statuses cannot be retrieved by using this operation. Use of
 * the <code>DescribeTrustedAdvisorCheckRefreshStatuses</code> operation for these checks causes an
 * <code>InvalidParameterValue</code>
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTrustedAdvisorCheckRefreshStatusesResponse * SupportClient::describeTrustedAdvisorCheckRefreshStatuses(const DescribeTrustedAdvisorCheckRefreshStatusesRequest &request)
{
    return qobject_cast<DescribeTrustedAdvisorCheckRefreshStatusesResponse *>(send(request));
}

/*!
 * Returns the results of the Trusted Advisor check that has the specified check ID. Check IDs can be obtained by calling
 *
 * <a>DescribeTrustedAdvisorChecks</a>>
 *
 * The response contains a <a>TrustedAdvisorCheckResult</a> object, which contains these three
 *
 * objects> <ul> <li>
 *
 * <a>TrustedAdvisorCategorySpecificSummary</a>
 *
 * </p </li> <li>
 *
 * <a>TrustedAdvisorResourceDetail</a>
 *
 * </p </li> <li>
 *
 * <a>TrustedAdvisorResourcesSummary</a>
 *
 * </p </li> </ul>
 *
 * In addition, the response contains these
 *
 * fields> <ul> <li>
 *
 * <b>status.</b> The alert status of the check: "ok" (green), "warning" (yellow), "error" (red), or
 *
 * "not_available"> </li> <li>
 *
 * <b>timestamp.</b> The time of the last refresh of the
 *
 * check> </li> <li>
 *
 * <b>checkId.</b> The unique identifier for the
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTrustedAdvisorCheckResultResponse * SupportClient::describeTrustedAdvisorCheckResult(const DescribeTrustedAdvisorCheckResultRequest &request)
{
    return qobject_cast<DescribeTrustedAdvisorCheckResultResponse *>(send(request));
}

/*!
 * Returns the summaries of the results of the Trusted Advisor checks that have the specified check IDs. Check IDs can be
 * obtained by calling
 *
 * <a>DescribeTrustedAdvisorChecks</a>>
 *
 * The response contains an array of <a>TrustedAdvisorCheckSummary</a>
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTrustedAdvisorCheckSummariesResponse * SupportClient::describeTrustedAdvisorCheckSummaries(const DescribeTrustedAdvisorCheckSummariesRequest &request)
{
    return qobject_cast<DescribeTrustedAdvisorCheckSummariesResponse *>(send(request));
}

/*!
 * Returns information about all available Trusted Advisor checks, including name, ID, category, description, and metadata.
 * You must specify a language code; English ("en") and Japanese ("ja") are currently supported. The response contains a
 * <a>TrustedAdvisorCheckDescription</a> for each
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTrustedAdvisorChecksResponse * SupportClient::describeTrustedAdvisorChecks(const DescribeTrustedAdvisorChecksRequest &request)
{
    return qobject_cast<DescribeTrustedAdvisorChecksResponse *>(send(request));
}

/*!
 * Requests a refresh of the Trusted Advisor check that has the specified check ID. Check IDs can be obtained by calling
 *
 * <a>DescribeTrustedAdvisorChecks</a>> <note>
 *
 * Some checks are refreshed automatically, and they cannot be refreshed by using this operation. Use of the
 * <code>RefreshTrustedAdvisorCheck</code> operation for these checks causes an <code>InvalidParameterValue</code>
 *
 * error> </note>
 *
 * The response contains a <a>TrustedAdvisorCheckRefreshStatus</a> object, which contains these
 *
 * fields> <ul> <li>
 *
 * <b>status.</b> The refresh status of the check: "none", "enqueued", "processing", "success", or
 *
 * "abandoned"> </li> <li>
 *
 * <b>millisUntilNextRefreshable.</b> The amount of time, in milliseconds, until the check is eligible for
 *
 * refresh> </li> <li>
 *
 * <b>checkId.</b> The unique identifier for the
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RefreshTrustedAdvisorCheckResponse * SupportClient::refreshTrustedAdvisorCheck(const RefreshTrustedAdvisorCheckRequest &request)
{
    return qobject_cast<RefreshTrustedAdvisorCheckResponse *>(send(request));
}

/*!
 * Takes a <code>caseId</code> and returns the initial state of the case along with the state of the case after the call to
 * <a>ResolveCase</a>
 *
 * @param  request Request to send to AWS Support.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResolveCaseResponse * SupportClient::resolveCase(const ResolveCaseRequest &request)
{
    return qobject_cast<ResolveCaseResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  SupportClientPrivate
 *
 * @brief  Private implementation for SupportClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SupportClientPrivate object.
 *
 * @param  q  Pointer to this object's public SupportClient instance.
 */
SupportClientPrivate::SupportClientPrivate(SupportClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Support
} // namespace QtAws
