// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applicationinsightsclient.h"
#include "applicationinsightsclient_p.h"

#include "core/awssignaturev4.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "createcomponentrequest.h"
#include "createcomponentresponse.h"
#include "createlogpatternrequest.h"
#include "createlogpatternresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "deletecomponentrequest.h"
#include "deletecomponentresponse.h"
#include "deletelogpatternrequest.h"
#include "deletelogpatternresponse.h"
#include "describeapplicationrequest.h"
#include "describeapplicationresponse.h"
#include "describecomponentrequest.h"
#include "describecomponentresponse.h"
#include "describecomponentconfigurationrequest.h"
#include "describecomponentconfigurationresponse.h"
#include "describecomponentconfigurationrecommendationrequest.h"
#include "describecomponentconfigurationrecommendationresponse.h"
#include "describelogpatternrequest.h"
#include "describelogpatternresponse.h"
#include "describeobservationrequest.h"
#include "describeobservationresponse.h"
#include "describeproblemrequest.h"
#include "describeproblemresponse.h"
#include "describeproblemobservationsrequest.h"
#include "describeproblemobservationsresponse.h"
#include "listapplicationsrequest.h"
#include "listapplicationsresponse.h"
#include "listcomponentsrequest.h"
#include "listcomponentsresponse.h"
#include "listconfigurationhistoryrequest.h"
#include "listconfigurationhistoryresponse.h"
#include "listlogpatternsetsrequest.h"
#include "listlogpatternsetsresponse.h"
#include "listlogpatternsrequest.h"
#include "listlogpatternsresponse.h"
#include "listproblemsrequest.h"
#include "listproblemsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"
#include "updatecomponentrequest.h"
#include "updatecomponentresponse.h"
#include "updatecomponentconfigurationrequest.h"
#include "updatecomponentconfigurationresponse.h"
#include "updatelogpatternrequest.h"
#include "updatelogpatternresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ApplicationInsights
 * \brief Contains classess for accessing Amazon CloudWatch Application Insights.
 *
 * \inmodule QtAwsApplicationInsights
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::ApplicationInsightsClient
 * \brief The ApplicationInsightsClient class provides access to the Amazon CloudWatch Application Insights service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationInsights
 *
 *  <fullname>Amazon CloudWatch Application Insights</fullname>
 * 
 *  Amazon CloudWatch Application Insights is a service that helps you detect common problems with your applications. It
 *  enables you to pinpoint the source of issues in your applications (built with technologies such as Microsoft IIS, .NET,
 *  and Microsoft SQL Server), by providing key insights into detected
 * 
 *  problems>
 * 
 *  After you onboard your application, CloudWatch Application Insights identifies, recommends, and sets up metrics and
 *  logs. It continuously analyzes and correlates your metrics and logs for unusual behavior to surface actionable problems
 *  with your application. For example, if your application is slow and unresponsive and leading to HTTP 500 errors in your
 *  Application Load Balancer (ALB), Application Insights informs you that a memory pressure problem with your SQL Server
 *  database is occurring. It bases this analysis on impactful metrics and log errors.
 */

/*!
 * \brief Constructs a ApplicationInsightsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ApplicationInsightsClient::ApplicationInsightsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApplicationInsightsClientPrivate(this), parent)
{
    Q_D(ApplicationInsightsClient);
    d->apiVersion = QStringLiteral("2018-11-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("applicationinsights");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Application Insights");
    d->serviceName = QStringLiteral("applicationinsights");
}

/*!
 * \overload ApplicationInsightsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ApplicationInsightsClient::ApplicationInsightsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApplicationInsightsClientPrivate(this), parent)
{
    Q_D(ApplicationInsightsClient);
    d->apiVersion = QStringLiteral("2018-11-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("applicationinsights");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Application Insights");
    d->serviceName = QStringLiteral("applicationinsights");
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an application that is created from a resource
 */
CreateApplicationResponse * ApplicationInsightsClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * CreateComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom component by grouping similar standalone instances to
 */
CreateComponentResponse * ApplicationInsightsClient::createComponent(const CreateComponentRequest &request)
{
    return qobject_cast<CreateComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * CreateLogPatternResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an log pattern to a
 */
CreateLogPatternResponse * ApplicationInsightsClient::createLogPattern(const CreateLogPatternRequest &request)
{
    return qobject_cast<CreateLogPatternResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * DeleteApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified application from monitoring. Does not delete the
 */
DeleteApplicationResponse * ApplicationInsightsClient::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * DeleteComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Ungroups a custom component. When you ungroup custom components, all applicable monitors that are set up for the
 * component are removed and the instances revert to their standalone
 */
DeleteComponentResponse * ApplicationInsightsClient::deleteComponent(const DeleteComponentRequest &request)
{
    return qobject_cast<DeleteComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * DeleteLogPatternResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified log pattern from a
 */
DeleteLogPatternResponse * ApplicationInsightsClient::deleteLogPattern(const DeleteLogPatternRequest &request)
{
    return qobject_cast<DeleteLogPatternResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * DescribeApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the
 */
DescribeApplicationResponse * ApplicationInsightsClient::describeApplication(const DescribeApplicationRequest &request)
{
    return qobject_cast<DescribeApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * DescribeComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a component and lists the resources that are grouped together in a
 */
DescribeComponentResponse * ApplicationInsightsClient::describeComponent(const DescribeComponentRequest &request)
{
    return qobject_cast<DescribeComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * DescribeComponentConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the monitoring configuration of the
 */
DescribeComponentConfigurationResponse * ApplicationInsightsClient::describeComponentConfiguration(const DescribeComponentConfigurationRequest &request)
{
    return qobject_cast<DescribeComponentConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * DescribeComponentConfigurationRecommendationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the recommended monitoring configuration of the
 */
DescribeComponentConfigurationRecommendationResponse * ApplicationInsightsClient::describeComponentConfigurationRecommendation(const DescribeComponentConfigurationRecommendationRequest &request)
{
    return qobject_cast<DescribeComponentConfigurationRecommendationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * DescribeLogPatternResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe a specific log pattern from a
 */
DescribeLogPatternResponse * ApplicationInsightsClient::describeLogPattern(const DescribeLogPatternRequest &request)
{
    return qobject_cast<DescribeLogPatternResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * DescribeObservationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an anomaly or error with the
 */
DescribeObservationResponse * ApplicationInsightsClient::describeObservation(const DescribeObservationRequest &request)
{
    return qobject_cast<DescribeObservationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * DescribeProblemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an application
 */
DescribeProblemResponse * ApplicationInsightsClient::describeProblem(const DescribeProblemRequest &request)
{
    return qobject_cast<DescribeProblemResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * DescribeProblemObservationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the anomalies or errors associated with the
 */
DescribeProblemObservationsResponse * ApplicationInsightsClient::describeProblemObservations(const DescribeProblemObservationsRequest &request)
{
    return qobject_cast<DescribeProblemObservationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * ListApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the IDs of the applications that you are monitoring.
 */
ListApplicationsResponse * ApplicationInsightsClient::listApplications(const ListApplicationsRequest &request)
{
    return qobject_cast<ListApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * ListComponentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the auto-grouped, standalone, and custom components of the
 */
ListComponentsResponse * ApplicationInsightsClient::listComponents(const ListComponentsRequest &request)
{
    return qobject_cast<ListComponentsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * ListConfigurationHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the INFO, WARN, and ERROR events for periodic configuration updates performed by Application Insights. Examples of
 * events represented are:
 *
 * </p <ul> <li>
 *
 * INFO: creating a new alarm or updating an alarm
 *
 * threshold> </li> <li>
 *
 * WARN: alarm not created due to insufficient data points used to predict
 *
 * thresholds> </li> <li>
 *
 * ERROR: alarm not created due to permission errors or exceeding quotas.
 */
ListConfigurationHistoryResponse * ApplicationInsightsClient::listConfigurationHistory(const ListConfigurationHistoryRequest &request)
{
    return qobject_cast<ListConfigurationHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * ListLogPatternSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the log pattern sets in the specific
 */
ListLogPatternSetsResponse * ApplicationInsightsClient::listLogPatternSets(const ListLogPatternSetsRequest &request)
{
    return qobject_cast<ListLogPatternSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * ListLogPatternsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the log patterns in the specific log
 */
ListLogPatternsResponse * ApplicationInsightsClient::listLogPatterns(const ListLogPatternsRequest &request)
{
    return qobject_cast<ListLogPatternsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * ListProblemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the problems with your
 */
ListProblemsResponse * ApplicationInsightsClient::listProblems(const ListProblemsRequest &request)
{
    return qobject_cast<ListProblemsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a list of the tags (keys and values) that are associated with a specified application. A <i>tag</i> is a label
 * that you optionally define and associate with an application. Each tag consists of a required <i>tag key</i> and an
 * optional associated <i>tag value</i>. A tag key is a general label that acts as a category for more specific tag values.
 * A tag value acts as a descriptor within a tag
 */
ListTagsForResourceResponse * ApplicationInsightsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add one or more tags (keys and values) to a specified application. A <i>tag</i> is a label that you optionally define
 * and associate with an application. Tags can help you categorize and manage application in different ways, such as by
 * purpose, owner, environment, or other criteria.
 *
 * </p
 *
 * Each tag consists of a required <i>tag key</i> and an associated <i>tag value</i>, both of which you define. A tag key
 * is a general label that acts as a category for more specific tag values. A tag value acts as a descriptor within a tag
 */
TagResourceResponse * ApplicationInsightsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove one or more tags (keys and values) from a specified
 */
UntagResourceResponse * ApplicationInsightsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the
 */
UpdateApplicationResponse * ApplicationInsightsClient::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * UpdateComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the custom component name and/or the list of resources that make up the
 */
UpdateComponentResponse * ApplicationInsightsClient::updateComponent(const UpdateComponentRequest &request)
{
    return qobject_cast<UpdateComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * UpdateComponentConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the monitoring configurations for the component. The configuration input parameter is an escaped JSON of the
 * configuration and should match the schema of what is returned by
 * <code>DescribeComponentConfigurationRecommendation</code>.
 */
UpdateComponentConfigurationResponse * ApplicationInsightsClient::updateComponentConfiguration(const UpdateComponentConfigurationRequest &request)
{
    return qobject_cast<UpdateComponentConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationInsightsClient service, and returns a pointer to an
 * UpdateLogPatternResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a log pattern to a
 */
UpdateLogPatternResponse * ApplicationInsightsClient::updateLogPattern(const UpdateLogPatternRequest &request)
{
    return qobject_cast<UpdateLogPatternResponse *>(send(request));
}

/*!
 * \class QtAws::ApplicationInsights::ApplicationInsightsClientPrivate
 * \brief The ApplicationInsightsClientPrivate class provides private implementation for ApplicationInsightsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ApplicationInsightsClientPrivate object with public implementation \a q.
 */
ApplicationInsightsClientPrivate::ApplicationInsightsClientPrivate(ApplicationInsightsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ApplicationInsights
} // namespace QtAws
