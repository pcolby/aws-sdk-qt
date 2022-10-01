// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "piclient.h"
#include "piclient_p.h"

#include "core/awssignaturev4.h"
#include "describedimensionkeysrequest.h"
#include "describedimensionkeysresponse.h"
#include "getdimensionkeydetailsrequest.h"
#include "getdimensionkeydetailsresponse.h"
#include "getresourcemetadatarequest.h"
#include "getresourcemetadataresponse.h"
#include "getresourcemetricsrequest.h"
#include "getresourcemetricsresponse.h"
#include "listavailableresourcedimensionsrequest.h"
#include "listavailableresourcedimensionsresponse.h"
#include "listavailableresourcemetricsrequest.h"
#include "listavailableresourcemetricsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Pi
 * \brief Contains classess for accessing AWS Performance Insights.
 *
 * \inmodule QtAwsPi
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Pi {

/*!
 * \class QtAws::Pi::PiClient
 * \brief The PiClient class provides access to the AWS Performance Insights service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPi
 *
 *  <fullname>Amazon RDS Performance Insights</fullname>
 * 
 *  Amazon RDS Performance Insights enables you to monitor and explore different dimensions of database load based on data
 *  captured from a running DB instance. The guide provides detailed information about Performance Insights data types,
 *  parameters and
 * 
 *  errors>
 * 
 *  When Performance Insights is enabled, the Amazon RDS Performance Insights API provides visibility into the performance
 *  of your DB instance. Amazon CloudWatch provides the authoritative source for Amazon Web Services service-vended
 *  monitoring metrics. Performance Insights offers a domain-specific view of DB
 * 
 *  load>
 * 
 *  DB load is measured as average active sessions. Performance Insights provides the data to API consumers as a
 *  two-dimensional time-series dataset. The time dimension provides DB load data for each time point in the queried time
 *  range. Each time point decomposes overall load in relation to the requested dimensions, measured at that time point.
 *  Examples include SQL, Wait event, User, and
 * 
 *  Host> <ul> <li>
 * 
 *  To learn more about Performance Insights and Amazon Aurora DB instances, go to the <i> <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html"> Amazon Aurora User Guide</a>
 *  </i>.
 * 
 *  </p </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon RDS DB instances, go to the <i> <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html"> Amazon RDS User Guide</a> </i>.
 * 
 *  </p </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon DocumentDB clusters, go to the <i> <a
 *  href="https://docs.aws.amazon.com/documentdb/latest/developerguide/performance-insights.html"> Amazon DocumentDB
 *  Developer Guide</a>
 */

/*!
 * \brief Constructs a PiClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PiClient::PiClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PiClientPrivate(this), parent)
{
    Q_D(PiClient);
    d->apiVersion = QStringLiteral("2018-02-27");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("pi");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Performance Insights");
    d->serviceName = QStringLiteral("pi");
}

/*!
 * \overload PiClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PiClient::PiClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PiClientPrivate(this), parent)
{
    Q_D(PiClient);
    d->apiVersion = QStringLiteral("2018-02-27");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("pi");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Performance Insights");
    d->serviceName = QStringLiteral("pi");
}

/*!
 * Sends \a request to the PiClient service, and returns a pointer to an
 * DescribeDimensionKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For a specific time period, retrieve the top <code>N</code> dimension keys for a metric.
 *
 * </p <note>
 *
 * Each response element returns a maximum of 500 bytes. For larger elements, such as SQL statements, only the first 500
 * bytes are
 */
DescribeDimensionKeysResponse * PiClient::describeDimensionKeys(const DescribeDimensionKeysRequest &request)
{
    return qobject_cast<DescribeDimensionKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the PiClient service, and returns a pointer to an
 * GetDimensionKeyDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the attributes of the specified dimension group for a DB instance or data source. For example, if you specify a SQL
 * ID, <code>GetDimensionKeyDetails</code> retrieves the full text of the dimension <code>db.sql.statement</code>
 * associated with this ID. This operation is useful because <code>GetResourceMetrics</code> and
 * <code>DescribeDimensionKeys</code> don't support retrieval of large SQL statement
 */
GetDimensionKeyDetailsResponse * PiClient::getDimensionKeyDetails(const GetDimensionKeyDetailsRequest &request)
{
    return qobject_cast<GetDimensionKeyDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the PiClient service, and returns a pointer to an
 * GetResourceMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve the metadata for different features. For example, the metadata might indicate that a feature is turned on or
 * off on a specific DB instance.
 */
GetResourceMetadataResponse * PiClient::getResourceMetadata(const GetResourceMetadataRequest &request)
{
    return qobject_cast<GetResourceMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the PiClient service, and returns a pointer to an
 * GetResourceMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve Performance Insights metrics for a set of data sources over a time period. You can provide specific dimension
 * groups and dimensions, and provide aggregation and filtering criteria for each
 *
 * group> <note>
 *
 * Each response element returns a maximum of 500 bytes. For larger elements, such as SQL statements, only the first 500
 * bytes are
 */
GetResourceMetricsResponse * PiClient::getResourceMetrics(const GetResourceMetricsRequest &request)
{
    return qobject_cast<GetResourceMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the PiClient service, and returns a pointer to an
 * ListAvailableResourceDimensionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve the dimensions that can be queried for each specified metric type on a specified DB
 */
ListAvailableResourceDimensionsResponse * PiClient::listAvailableResourceDimensions(const ListAvailableResourceDimensionsRequest &request)
{
    return qobject_cast<ListAvailableResourceDimensionsResponse *>(send(request));
}

/*!
 * Sends \a request to the PiClient service, and returns a pointer to an
 * ListAvailableResourceMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve metrics of the specified types that can be queried for a specified DB instance.
 */
ListAvailableResourceMetricsResponse * PiClient::listAvailableResourceMetrics(const ListAvailableResourceMetricsRequest &request)
{
    return qobject_cast<ListAvailableResourceMetricsResponse *>(send(request));
}

/*!
 * \class QtAws::Pi::PiClientPrivate
 * \brief The PiClientPrivate class provides private implementation for PiClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPi
 */

/*!
 * Constructs a PiClientPrivate object with public implementation \a q.
 */
PiClientPrivate::PiClientPrivate(PiClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Pi
} // namespace QtAws
