// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applicationcostprofilerclient.h"
#include "applicationcostprofilerclient_p.h"

#include "core/awssignaturev4.h"
#include "deletereportdefinitionrequest.h"
#include "deletereportdefinitionresponse.h"
#include "getreportdefinitionrequest.h"
#include "getreportdefinitionresponse.h"
#include "importapplicationusagerequest.h"
#include "importapplicationusageresponse.h"
#include "listreportdefinitionsrequest.h"
#include "listreportdefinitionsresponse.h"
#include "putreportdefinitionrequest.h"
#include "putreportdefinitionresponse.h"
#include "updatereportdefinitionrequest.h"
#include "updatereportdefinitionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ApplicationCostProfiler
 * \brief Contains classess for accessing AWS Application Cost Profiler.
 *
 * \inmodule QtAwsApplicationCostProfiler
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::ApplicationCostProfilerClient
 * \brief The ApplicationCostProfilerClient class provides access to the AWS Application Cost Profiler service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationCostProfiler
 *
 *  This reference provides descriptions of the AWS Application Cost Profiler
 * 
 *  API>
 * 
 *  The AWS Application Cost Profiler API provides programmatic access to view, create, update, and delete application cost
 *  report definitions, as well as to import your usage data into the Application Cost Profiler
 * 
 *  service>
 * 
 *  For more information about using this service, see the <a
 *  href="https://docs.aws.amazon.com/application-cost-profiler/latest/userguide/introduction.html">AWS Application Cost
 *  Profiler User
 */

/*!
 * \brief Constructs a ApplicationCostProfilerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ApplicationCostProfilerClient::ApplicationCostProfilerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApplicationCostProfilerClientPrivate(this), parent)
{
    Q_D(ApplicationCostProfilerClient);
    d->apiVersion = QStringLiteral("2020-09-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("application-cost-profiler");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Application Cost Profiler");
    d->serviceName = QStringLiteral("application-cost-profiler");
}

/*!
 * \overload ApplicationCostProfilerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ApplicationCostProfilerClient::ApplicationCostProfilerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApplicationCostProfilerClientPrivate(this), parent)
{
    Q_D(ApplicationCostProfilerClient);
    d->apiVersion = QStringLiteral("2020-09-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("application-cost-profiler");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Application Cost Profiler");
    d->serviceName = QStringLiteral("application-cost-profiler");
}

/*!
 * Sends \a request to the ApplicationCostProfilerClient service, and returns a pointer to an
 * DeleteReportDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified report definition in AWS Application Cost Profiler. This stops the report from being
 */
DeleteReportDefinitionResponse * ApplicationCostProfilerClient::deleteReportDefinition(const DeleteReportDefinitionRequest &request)
{
    return qobject_cast<DeleteReportDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationCostProfilerClient service, and returns a pointer to an
 * GetReportDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the definition of a report already configured in AWS Application Cost
 */
GetReportDefinitionResponse * ApplicationCostProfilerClient::getReportDefinition(const GetReportDefinitionRequest &request)
{
    return qobject_cast<GetReportDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationCostProfilerClient service, and returns a pointer to an
 * ImportApplicationUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Ingests application usage data from Amazon Simple Storage Service (Amazon
 *
 * S3)>
 *
 * The data must already exist in the S3 location. As part of the action, AWS Application Cost Profiler copies the object
 * from your S3 bucket to an S3 bucket owned by Amazon for processing
 */
ImportApplicationUsageResponse * ApplicationCostProfilerClient::importApplicationUsage(const ImportApplicationUsageRequest &request)
{
    return qobject_cast<ImportApplicationUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationCostProfilerClient service, and returns a pointer to an
 * ListReportDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all reports and their configurations for your AWS
 *
 * account>
 *
 * The maximum number of reports is
 */
ListReportDefinitionsResponse * ApplicationCostProfilerClient::listReportDefinitions(const ListReportDefinitionsRequest &request)
{
    return qobject_cast<ListReportDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationCostProfilerClient service, and returns a pointer to an
 * PutReportDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the report definition for a report in Application Cost
 */
PutReportDefinitionResponse * ApplicationCostProfilerClient::putReportDefinition(const PutReportDefinitionRequest &request)
{
    return qobject_cast<PutReportDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationCostProfilerClient service, and returns a pointer to an
 * UpdateReportDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates existing report in AWS Application Cost
 */
UpdateReportDefinitionResponse * ApplicationCostProfilerClient::updateReportDefinition(const UpdateReportDefinitionRequest &request)
{
    return qobject_cast<UpdateReportDefinitionResponse *>(send(request));
}

/*!
 * \class QtAws::ApplicationCostProfiler::ApplicationCostProfilerClientPrivate
 * \brief The ApplicationCostProfilerClientPrivate class provides private implementation for ApplicationCostProfilerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a ApplicationCostProfilerClientPrivate object with public implementation \a q.
 */
ApplicationCostProfilerClientPrivate::ApplicationCostProfilerClientPrivate(ApplicationCostProfilerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ApplicationCostProfiler
} // namespace QtAws
