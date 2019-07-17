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

#include "applicationinsightsclient.h"
#include "applicationinsightsclient_p.h"

#include "core/awssignaturev4.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "createcomponentrequest.h"
#include "createcomponentresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "deletecomponentrequest.h"
#include "deletecomponentresponse.h"
#include "describeapplicationrequest.h"
#include "describeapplicationresponse.h"
#include "describecomponentrequest.h"
#include "describecomponentresponse.h"
#include "describecomponentconfigurationrequest.h"
#include "describecomponentconfigurationresponse.h"
#include "describecomponentconfigurationrecommendationrequest.h"
#include "describecomponentconfigurationrecommendationresponse.h"
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
#include "listproblemsrequest.h"
#include "listproblemsresponse.h"
#include "updatecomponentrequest.h"
#include "updatecomponentresponse.h"
#include "updatecomponentconfigurationrequest.h"
#include "updatecomponentconfigurationresponse.h"

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
 *  <fullname>Amazon CloudWatch Application Insights for .NET and SQL Server</fullname>
 * 
 *  Amazon CloudWatch Application Insights for .NET and SQL Server is a service that helps you detect common problems with
 *  your .NET and SQL Server-based applications. It enables you to pinpoint the source of issues in your applications (built
 *  with technologies such as Microsoft IIS, .NET, and Microsoft SQL Server), by providing key insights into detected
 * 
 *  problems>
 * 
 *  After you onboard your application, CloudWatch Application Insights for .NET and SQL Server identifies, recommends, and
 *  sets up metrics and logs. It continuously analyzes and correlates your metrics and logs for unusual behavior to surface
 *  actionable problems with your application. For example, if your application is slow and unresponsive and leading to HTTP
 *  500 errors in your Application Load Balancer (ALB), Application Insights informs you that a memory pressure problem with
 *  your SQL Server database is occurring. It bases this analysis on impactful metrics and log errors.
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
 */
UpdateComponentConfigurationResponse * ApplicationInsightsClient::updateComponentConfiguration(const UpdateComponentConfigurationRequest &request)
{
    return qobject_cast<UpdateComponentConfigurationResponse *>(send(request));
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
