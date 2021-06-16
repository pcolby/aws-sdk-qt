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
 * \brief Contains classess for accessing AWS Support.
 *
 * \inmodule QtAwsSupport
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Support {

/*!
 * \class QtAws::Support::SupportClient
 * \brief The SupportClient class provides access to the AWS Support service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSupport
 *
 *  <fullname>AWS Support</fullname>
 * 
 *  The <i>AWS Support API Reference</i> is intended for programmers who need detailed information about the AWS Support
 *  operations and data types. You can use the API to manage your support cases programmatically. The AWS Support API uses
 *  HTTP methods that return results in JSON
 * 
 *  format> <note> <ul> <li>
 * 
 *  You must have a Business or Enterprise Support plan to use the AWS Support API.
 * 
 *  </p </li> <li>
 * 
 *  If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 *  <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 *  <a href="http://aws.amazon.com/premiumsupport/">AWS
 * 
 *  Support</a>> </li> </ul> </note>
 * 
 *  The AWS Support service also exposes a set of <a href="http://aws.amazon.com/premiumsupport/trustedadvisor/">AWS Trusted
 *  Advisor</a> features. You can retrieve a list of checks and their descriptions, get check results, specify checks to
 *  refresh, and get the refresh status of
 * 
 *  checks>
 * 
 *  The following list describes the AWS Support case management
 * 
 *  operations> <ul> <li>
 * 
 *  Service names, issue categories, and available severity levels - The <a>DescribeServices</a> and
 *  <a>DescribeSeverityLevels</a> operations return AWS service names, service codes, service categories, and problem
 *  severity levels. You use these values when you call the <a>CreateCase</a>
 * 
 *  operation> </li> <li>
 * 
 *  Case creation, case details, and case resolution - The <a>CreateCase</a>, <a>DescribeCases</a>,
 *  <a>DescribeAttachment</a>, and <a>ResolveCase</a> operations create AWS Support cases, retrieve information about cases,
 *  and resolve
 * 
 *  cases> </li> <li>
 * 
 *  Case communication - The <a>DescribeCommunications</a>, <a>AddCommunicationToCase</a>, and <a>AddAttachmentsToSet</a>
 *  operations retrieve and add communications and attachments to AWS Support
 * 
 *  cases> </li> </ul>
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
 *  <a>DescribeTrustedAdvisorCheckResult</a> to obtain the results for the check that you
 * 
 *  specified> </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckSummaries</a> returns summarized results for one or more Trusted Advisor
 * 
 *  checks> </li> <li>
 * 
 *  <a>RefreshTrustedAdvisorCheck</a> requests that Trusted Advisor rerun a specified
 * 
 *  check> </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckRefreshStatuses</a> reports the refresh status of one or more
 * 
 *  checks> </li> </ul>
 * 
 *  For authentication of requests, AWS Support uses <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  See <a href="https://docs.aws.amazon.com/awssupport/latest/user/Welcome.html">About the AWS Support API</a> in the
 *  <i>AWS Support User Guide</i> for information about how to use this service to create and manage your support cases, and
 *  how to call Trusted Advisor for results of checks on your
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
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * AddAttachmentsToSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more attachments to an attachment set.
 *
 * </p
 *
 * An attachment set is a temporary container for attachments that you add to a case or case communication. The set is
 * available for 1 hour after it's created. The <code>expiryTime</code> returned in the response is when the set expires.
 *
 * </p <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
AddAttachmentsToSetResponse * SupportClient::addAttachmentsToSet(const AddAttachmentsToSetRequest &request)
{
    return qobject_cast<AddAttachmentsToSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * AddCommunicationToCaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds additional customer communication to an AWS Support case. Use the <code>caseId</code> parameter to identify the
 * case to which to add communication. You can list a set of email addresses to copy on the communication by using the
 * <code>ccEmailAddresses</code> parameter. The <code>communicationBody</code> value contains the text of the
 *
 * communication> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
AddCommunicationToCaseResponse * SupportClient::addCommunicationToCase(const AddCommunicationToCaseRequest &request)
{
    return qobject_cast<AddCommunicationToCaseResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * CreateCaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a case in the AWS Support Center. This operation is similar to how you create a case in the AWS Support Center
 * <a href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
 *
 * page>
 *
 * The AWS Support API doesn't support requesting service limit increases. You can submit a service limit increase in the
 * following ways:
 *
 * </p <ul> <li>
 *
 * Submit a request from the AWS Support Center <a href="https://console.aws.amazon.com/support/home#/case/create">Create
 * Case</a>
 *
 * page> </li> <li>
 *
 * Use the Service Quotas <a
 * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_RequestServiceQuotaIncrease.html">RequestServiceQuotaIncrease</a>
 *
 * operation> </li> </ul>
 *
 * A successful <code>CreateCase</code> request returns an AWS Support case number. You can use the <a>DescribeCases</a>
 * operation and specify the case number to get existing AWS Support cases. After you create a case, use the
 * <a>AddCommunicationToCase</a> operation to add additional communication or attachments to an existing
 *
 * case>
 *
 * The <code>caseId</code> is separate from the <code>displayId</code> that appears in the <a
 * href="https://console.aws.amazon.com/support">AWS Support Center</a>. Use the <a>DescribeCases</a> operation to get the
 *
 * <code>displayId</code>> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
CreateCaseResponse * SupportClient::createCase(const CreateCaseRequest &request)
{
    return qobject_cast<CreateCaseResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * DescribeAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the attachment that has the specified ID. Attachments can include screenshots, error logs, or other files that
 * describe your issue. Attachment IDs are generated by the case management system when you add an attachment to a case or
 * case communication. Attachment IDs are returned in the <a>AttachmentDetails</a> objects that are returned by the
 * <a>DescribeCommunications</a>
 *
 * operation> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
DescribeAttachmentResponse * SupportClient::describeAttachment(const DescribeAttachmentRequest &request)
{
    return qobject_cast<DescribeAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * DescribeCasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of cases that you specify by passing one or more case IDs. You can use the <code>afterTime</code> and
 * <code>beforeTime</code> parameters to filter the cases by date. You can set values for the
 * <code>includeResolvedCases</code> and <code>includeCommunications</code> parameters to specify how much information to
 *
 * return>
 *
 * The response returns the following in JSON
 *
 * format> <ul> <li>
 *
 * One or more <a href="https://docs.aws.amazon.com/awssupport/latest/APIReference/API_CaseDetails.html">CaseDetails</a>
 * data
 *
 * types> </li> <li>
 *
 * One or more <code>nextToken</code> values, which specify where to paginate the returned records represented by the
 * <code>CaseDetails</code>
 *
 * objects> </li> </ul>
 *
 * Case data is available for 12 months after creation. If a case was created more than 12 months ago, a request might
 * return an
 *
 * error> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
DescribeCasesResponse * SupportClient::describeCases(const DescribeCasesRequest &request)
{
    return qobject_cast<DescribeCasesResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * DescribeCommunicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns communications and attachments for one or more support cases. Use the <code>afterTime</code> and
 * <code>beforeTime</code> parameters to filter by date. You can use the <code>caseId</code> parameter to restrict the
 * results to a specific
 *
 * case>
 *
 * Case data is available for 12 months after creation. If a case was created more than 12 months ago, a request for data
 * might cause an
 *
 * error>
 *
 * You can use the <code>maxResults</code> and <code>nextToken</code> parameters to control the pagination of the results.
 * Set <code>maxResults</code> to the number of cases that you want to display on each page, and use <code>nextToken</code>
 * to specify the resumption of
 *
 * pagination> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
DescribeCommunicationsResponse * SupportClient::describeCommunications(const DescribeCommunicationsRequest &request)
{
    return qobject_cast<DescribeCommunicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * DescribeServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the current list of AWS services and a list of service categories for each service. You then use service names
 * and categories in your <a>CreateCase</a> requests. Each AWS service has its own set of
 *
 * categories>
 *
 * The service codes and category codes correspond to the values that appear in the <b>Service</b> and <b>Category</b>
 * lists on the AWS Support Center <a href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a> page.
 * The values in those fields don't necessarily match the service codes and categories returned by the
 * <code>DescribeServices</code> operation. Always use the service codes and categories that the
 * <code>DescribeServices</code> operation returns, so that you have the most recent set of service and category
 *
 * codes> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
DescribeServicesResponse * SupportClient::describeServices(const DescribeServicesRequest &request)
{
    return qobject_cast<DescribeServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * DescribeSeverityLevelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of severity levels that you can assign to a support case. The severity level for a case is also a field
 * in the <a>CaseDetails</a> data type that you include for a <a>CreateCase</a>
 *
 * request> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
DescribeSeverityLevelsResponse * SupportClient::describeSeverityLevels(const DescribeSeverityLevelsRequest &request)
{
    return qobject_cast<DescribeSeverityLevelsResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * DescribeTrustedAdvisorCheckRefreshStatusesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the refresh status of the AWS Trusted Advisor checks that have the specified check IDs. You can get the check
 * IDs by calling the <a>DescribeTrustedAdvisorChecks</a>
 *
 * operation>
 *
 * Some checks are refreshed automatically, and you can't return their refresh statuses by using the
 * <code>DescribeTrustedAdvisorCheckRefreshStatuses</code> operation. If you call this operation for these checks, you
 * might see an <code>InvalidParameterValue</code>
 *
 * error> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
DescribeTrustedAdvisorCheckRefreshStatusesResponse * SupportClient::describeTrustedAdvisorCheckRefreshStatuses(const DescribeTrustedAdvisorCheckRefreshStatusesRequest &request)
{
    return qobject_cast<DescribeTrustedAdvisorCheckRefreshStatusesResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * DescribeTrustedAdvisorCheckResultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the results of the AWS Trusted Advisor check that has the specified check ID. You can get the check IDs by
 * calling the <a>DescribeTrustedAdvisorChecks</a>
 *
 * operation>
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
 * <b>status</b> - The alert status of the check can be <code>ok</code> (green), <code>warning</code> (yellow),
 * <code>error</code> (red), or
 *
 * <code>not_available</code>> </li> <li>
 *
 * <b>timestamp</b> - The time of the last refresh of the
 *
 * check> </li> <li>
 *
 * <b>checkId</b> - The unique identifier for the
 *
 * check> </li> </ul> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
DescribeTrustedAdvisorCheckResultResponse * SupportClient::describeTrustedAdvisorCheckResult(const DescribeTrustedAdvisorCheckResultRequest &request)
{
    return qobject_cast<DescribeTrustedAdvisorCheckResultResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * DescribeTrustedAdvisorCheckSummariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the results for the AWS Trusted Advisor check summaries for the check IDs that you specified. You can get the
 * check IDs by calling the <a>DescribeTrustedAdvisorChecks</a>
 *
 * operation>
 *
 * The response contains an array of <a>TrustedAdvisorCheckSummary</a>
 *
 * objects> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
DescribeTrustedAdvisorCheckSummariesResponse * SupportClient::describeTrustedAdvisorCheckSummaries(const DescribeTrustedAdvisorCheckSummariesRequest &request)
{
    return qobject_cast<DescribeTrustedAdvisorCheckSummariesResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * DescribeTrustedAdvisorChecksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all available AWS Trusted Advisor checks, including the name, ID, category, description, and
 * metadata. You must specify a language code. The AWS Support API currently supports English ("en") and Japanese ("ja").
 * The response contains a <a>TrustedAdvisorCheckDescription</a> object for each check. You must set the AWS Region to
 *
 * us-east-1> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 *
 * Support</a>> </li> <li>
 *
 * The names and descriptions for Trusted Advisor checks are subject to change. We recommend that you specify the check ID
 * in your code to uniquely identify a
 */
DescribeTrustedAdvisorChecksResponse * SupportClient::describeTrustedAdvisorChecks(const DescribeTrustedAdvisorChecksRequest &request)
{
    return qobject_cast<DescribeTrustedAdvisorChecksResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * RefreshTrustedAdvisorCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Refreshes the AWS Trusted Advisor check that you specify using the check ID. You can get the check IDs by calling the
 * <a>DescribeTrustedAdvisorChecks</a>
 *
 * operation> <note>
 *
 * Some checks are refreshed automatically. If you call the <code>RefreshTrustedAdvisorCheck</code> operation to refresh
 * them, you might see the <code>InvalidParameterValue</code>
 *
 * error> </note>
 *
 * The response contains a <a>TrustedAdvisorCheckRefreshStatus</a>
 *
 * object> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
RefreshTrustedAdvisorCheckResponse * SupportClient::refreshTrustedAdvisorCheck(const RefreshTrustedAdvisorCheckRequest &request)
{
    return qobject_cast<RefreshTrustedAdvisorCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportClient service, and returns a pointer to an
 * ResolveCaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resolves a support case. This operation takes a <code>caseId</code> and returns the initial and final state of the
 *
 * case> <note> <ul> <li>
 *
 * You must have a Business or Enterprise Support plan to use the AWS Support API.
 *
 * </p </li> <li>
 *
 * If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 * <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 * <a href="http://aws.amazon.com/premiumsupport/">AWS
 */
ResolveCaseResponse * SupportClient::resolveCase(const ResolveCaseRequest &request)
{
    return qobject_cast<ResolveCaseResponse *>(send(request));
}

/*!
 * \class QtAws::Support::SupportClientPrivate
 * \brief The SupportClientPrivate class provides private implementation for SupportClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSupport
 */

/*!
 * Constructs a SupportClientPrivate object with public implementation \a q.
 */
SupportClientPrivate::SupportClientPrivate(SupportClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Support
} // namespace QtAws
