// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "migrationhubstrategyclient.h"
#include "migrationhubstrategyclient_p.h"

#include "core/awssignaturev4.h"
#include "getapplicationcomponentdetailsrequest.h"
#include "getapplicationcomponentdetailsresponse.h"
#include "getapplicationcomponentstrategiesrequest.h"
#include "getapplicationcomponentstrategiesresponse.h"
#include "getassessmentrequest.h"
#include "getassessmentresponse.h"
#include "getimportfiletaskrequest.h"
#include "getimportfiletaskresponse.h"
#include "getportfoliopreferencesrequest.h"
#include "getportfoliopreferencesresponse.h"
#include "getportfoliosummaryrequest.h"
#include "getportfoliosummaryresponse.h"
#include "getrecommendationreportdetailsrequest.h"
#include "getrecommendationreportdetailsresponse.h"
#include "getserverdetailsrequest.h"
#include "getserverdetailsresponse.h"
#include "getserverstrategiesrequest.h"
#include "getserverstrategiesresponse.h"
#include "listapplicationcomponentsrequest.h"
#include "listapplicationcomponentsresponse.h"
#include "listcollectorsrequest.h"
#include "listcollectorsresponse.h"
#include "listimportfiletaskrequest.h"
#include "listimportfiletaskresponse.h"
#include "listserversrequest.h"
#include "listserversresponse.h"
#include "putportfoliopreferencesrequest.h"
#include "putportfoliopreferencesresponse.h"
#include "startassessmentrequest.h"
#include "startassessmentresponse.h"
#include "startimportfiletaskrequest.h"
#include "startimportfiletaskresponse.h"
#include "startrecommendationreportgenerationrequest.h"
#include "startrecommendationreportgenerationresponse.h"
#include "stopassessmentrequest.h"
#include "stopassessmentresponse.h"
#include "updateapplicationcomponentconfigrequest.h"
#include "updateapplicationcomponentconfigresponse.h"
#include "updateserverconfigrequest.h"
#include "updateserverconfigresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MigrationHubStrategy
 * \brief Contains classess for accessing Migration Hub Strategy Recommendations.
 *
 * \inmodule QtAwsMigrationHubStrategy
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::MigrationHubStrategyClient
 * \brief The MigrationHubStrategyClient class provides access to the Migration Hub Strategy Recommendations service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMigrationHubStrategy
 *
 *  <fullname>Migration Hub Strategy Recommendations</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for
 *  Migration Hub Strategy Recommendations (Strategy Recommendations). The topic for each action shows the API request
 *  parameters and the response. Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the
 *  programming language or platform that you're using. For more information, see <a
 *  href="http://aws.amazon.com/tools/#SDKs">AWS
 */

/*!
 * \brief Constructs a MigrationHubStrategyClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MigrationHubStrategyClient::MigrationHubStrategyClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MigrationHubStrategyClientPrivate(this), parent)
{
    Q_D(MigrationHubStrategyClient);
    d->apiVersion = QStringLiteral("2020-02-19");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("migrationhub-strategy");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Migration Hub Strategy Recommendations");
    d->serviceName = QStringLiteral("migrationhub-strategy");
}

/*!
 * \overload MigrationHubStrategyClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MigrationHubStrategyClient::MigrationHubStrategyClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MigrationHubStrategyClientPrivate(this), parent)
{
    Q_D(MigrationHubStrategyClient);
    d->apiVersion = QStringLiteral("2020-02-19");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("migrationhub-strategy");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Migration Hub Strategy Recommendations");
    d->serviceName = QStringLiteral("migrationhub-strategy");
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * GetApplicationComponentDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details about an application component.
 */
GetApplicationComponentDetailsResponse * MigrationHubStrategyClient::getApplicationComponentDetails(const GetApplicationComponentDetailsRequest &request)
{
    return qobject_cast<GetApplicationComponentDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * GetApplicationComponentStrategiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all the recommended strategies and tools for an application component running on a server.
 */
GetApplicationComponentStrategiesResponse * MigrationHubStrategyClient::getApplicationComponentStrategies(const GetApplicationComponentStrategiesRequest &request)
{
    return qobject_cast<GetApplicationComponentStrategiesResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * GetAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the status of an on-going assessment.
 */
GetAssessmentResponse * MigrationHubStrategyClient::getAssessment(const GetAssessmentRequest &request)
{
    return qobject_cast<GetAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * GetImportFileTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details about a specific import task.
 */
GetImportFileTaskResponse * MigrationHubStrategyClient::getImportFileTask(const GetImportFileTaskRequest &request)
{
    return qobject_cast<GetImportFileTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * GetPortfolioPreferencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves your migration and modernization preferences.
 */
GetPortfolioPreferencesResponse * MigrationHubStrategyClient::getPortfolioPreferences(const GetPortfolioPreferencesRequest &request)
{
    return qobject_cast<GetPortfolioPreferencesResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * GetPortfolioSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves overall summary including the number of servers to rehost and the overall number of anti-patterns.
 */
GetPortfolioSummaryResponse * MigrationHubStrategyClient::getPortfolioSummary(const GetPortfolioSummaryRequest &request)
{
    return qobject_cast<GetPortfolioSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * GetRecommendationReportDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves detailed information about the specified recommendation report.
 */
GetRecommendationReportDetailsResponse * MigrationHubStrategyClient::getRecommendationReportDetails(const GetRecommendationReportDetailsRequest &request)
{
    return qobject_cast<GetRecommendationReportDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * GetServerDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves detailed information about a specified server.
 */
GetServerDetailsResponse * MigrationHubStrategyClient::getServerDetails(const GetServerDetailsRequest &request)
{
    return qobject_cast<GetServerDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * GetServerStrategiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves recommended strategies and tools for the specified server.
 */
GetServerStrategiesResponse * MigrationHubStrategyClient::getServerStrategies(const GetServerStrategiesRequest &request)
{
    return qobject_cast<GetServerStrategiesResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * ListApplicationComponentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all the application components (processes).
 */
ListApplicationComponentsResponse * MigrationHubStrategyClient::listApplicationComponents(const ListApplicationComponentsRequest &request)
{
    return qobject_cast<ListApplicationComponentsResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * ListCollectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all the installed collectors.
 */
ListCollectorsResponse * MigrationHubStrategyClient::listCollectors(const ListCollectorsRequest &request)
{
    return qobject_cast<ListCollectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * ListImportFileTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all the imports performed.
 */
ListImportFileTaskResponse * MigrationHubStrategyClient::listImportFileTask(const ListImportFileTaskRequest &request)
{
    return qobject_cast<ListImportFileTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * ListServersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all the servers.
 */
ListServersResponse * MigrationHubStrategyClient::listServers(const ListServersRequest &request)
{
    return qobject_cast<ListServersResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * PutPortfolioPreferencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Saves the specified migration and modernization preferences.
 */
PutPortfolioPreferencesResponse * MigrationHubStrategyClient::putPortfolioPreferences(const PutPortfolioPreferencesRequest &request)
{
    return qobject_cast<PutPortfolioPreferencesResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * StartAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the assessment of an on-premises environment.
 */
StartAssessmentResponse * MigrationHubStrategyClient::startAssessment(const StartAssessmentRequest &request)
{
    return qobject_cast<StartAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * StartImportFileTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a file import.
 */
StartImportFileTaskResponse * MigrationHubStrategyClient::startImportFileTask(const StartImportFileTaskRequest &request)
{
    return qobject_cast<StartImportFileTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * StartRecommendationReportGenerationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts generating a recommendation report.
 */
StartRecommendationReportGenerationResponse * MigrationHubStrategyClient::startRecommendationReportGeneration(const StartRecommendationReportGenerationRequest &request)
{
    return qobject_cast<StartRecommendationReportGenerationResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * StopAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the assessment of an on-premises environment.
 */
StopAssessmentResponse * MigrationHubStrategyClient::stopAssessment(const StopAssessmentRequest &request)
{
    return qobject_cast<StopAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * UpdateApplicationComponentConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of an application component.
 */
UpdateApplicationComponentConfigResponse * MigrationHubStrategyClient::updateApplicationComponentConfig(const UpdateApplicationComponentConfigRequest &request)
{
    return qobject_cast<UpdateApplicationComponentConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubStrategyClient service, and returns a pointer to an
 * UpdateServerConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of the specified server.
 */
UpdateServerConfigResponse * MigrationHubStrategyClient::updateServerConfig(const UpdateServerConfigRequest &request)
{
    return qobject_cast<UpdateServerConfigResponse *>(send(request));
}

/*!
 * \class QtAws::MigrationHubStrategy::MigrationHubStrategyClientPrivate
 * \brief The MigrationHubStrategyClientPrivate class provides private implementation for MigrationHubStrategyClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a MigrationHubStrategyClientPrivate object with public implementation \a q.
 */
MigrationHubStrategyClientPrivate::MigrationHubStrategyClientPrivate(MigrationHubStrategyClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MigrationHubStrategy
} // namespace QtAws
