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

#include "lookoutmetricsclient.h"
#include "lookoutmetricsclient_p.h"

#include "core/awssignaturev4.h"
#include "activateanomalydetectorrequest.h"
#include "activateanomalydetectorresponse.h"
#include "backtestanomalydetectorrequest.h"
#include "backtestanomalydetectorresponse.h"
#include "createalertrequest.h"
#include "createalertresponse.h"
#include "createanomalydetectorrequest.h"
#include "createanomalydetectorresponse.h"
#include "createmetricsetrequest.h"
#include "createmetricsetresponse.h"
#include "deactivateanomalydetectorrequest.h"
#include "deactivateanomalydetectorresponse.h"
#include "deletealertrequest.h"
#include "deletealertresponse.h"
#include "deleteanomalydetectorrequest.h"
#include "deleteanomalydetectorresponse.h"
#include "describealertrequest.h"
#include "describealertresponse.h"
#include "describeanomalydetectionexecutionsrequest.h"
#include "describeanomalydetectionexecutionsresponse.h"
#include "describeanomalydetectorrequest.h"
#include "describeanomalydetectorresponse.h"
#include "describemetricsetrequest.h"
#include "describemetricsetresponse.h"
#include "detectmetricsetconfigrequest.h"
#include "detectmetricsetconfigresponse.h"
#include "getanomalygrouprequest.h"
#include "getanomalygroupresponse.h"
#include "getdataqualitymetricsrequest.h"
#include "getdataqualitymetricsresponse.h"
#include "getfeedbackrequest.h"
#include "getfeedbackresponse.h"
#include "getsampledatarequest.h"
#include "getsampledataresponse.h"
#include "listalertsrequest.h"
#include "listalertsresponse.h"
#include "listanomalydetectorsrequest.h"
#include "listanomalydetectorsresponse.h"
#include "listanomalygrouprelatedmetricsrequest.h"
#include "listanomalygrouprelatedmetricsresponse.h"
#include "listanomalygroupsummariesrequest.h"
#include "listanomalygroupsummariesresponse.h"
#include "listanomalygrouptimeseriesrequest.h"
#include "listanomalygrouptimeseriesresponse.h"
#include "listmetricsetsrequest.h"
#include "listmetricsetsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putfeedbackrequest.h"
#include "putfeedbackresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatealertrequest.h"
#include "updatealertresponse.h"
#include "updateanomalydetectorrequest.h"
#include "updateanomalydetectorresponse.h"
#include "updatemetricsetrequest.h"
#include "updatemetricsetresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LookoutMetrics
 * \brief Contains classess for accessing Amazon Lookout for Metrics.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::LookoutMetricsClient
 * \brief The LookoutMetricsClient class provides access to the Amazon Lookout for Metrics service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 */

/*!
 * \brief Constructs a LookoutMetricsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LookoutMetricsClient::LookoutMetricsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LookoutMetricsClientPrivate(this), parent)
{
    Q_D(LookoutMetricsClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("lookoutmetrics");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Lookout for Metrics");
    d->serviceName = QStringLiteral("lookoutmetrics");
}

/*!
 * \overload LookoutMetricsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LookoutMetricsClient::LookoutMetricsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LookoutMetricsClientPrivate(this), parent)
{
    Q_D(LookoutMetricsClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("lookoutmetrics");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Lookout for Metrics");
    d->serviceName = QStringLiteral("lookoutmetrics");
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * ActivateAnomalyDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates an anomaly
 */
ActivateAnomalyDetectorResponse * LookoutMetricsClient::activateAnomalyDetector(const ActivateAnomalyDetectorRequest &request)
{
    return qobject_cast<ActivateAnomalyDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * BackTestAnomalyDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs a backtest for anomaly detection for the specified
 */
BackTestAnomalyDetectorResponse * LookoutMetricsClient::backTestAnomalyDetector(const BackTestAnomalyDetectorRequest &request)
{
    return qobject_cast<BackTestAnomalyDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * CreateAlertResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an alert for an anomaly
 */
CreateAlertResponse * LookoutMetricsClient::createAlert(const CreateAlertRequest &request)
{
    return qobject_cast<CreateAlertResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * CreateAnomalyDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an anomaly
 */
CreateAnomalyDetectorResponse * LookoutMetricsClient::createAnomalyDetector(const CreateAnomalyDetectorRequest &request)
{
    return qobject_cast<CreateAnomalyDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * CreateMetricSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateMetricSetResponse * LookoutMetricsClient::createMetricSet(const CreateMetricSetRequest &request)
{
    return qobject_cast<CreateMetricSetResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * DeactivateAnomalyDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deactivates an anomaly
 */
DeactivateAnomalyDetectorResponse * LookoutMetricsClient::deactivateAnomalyDetector(const DeactivateAnomalyDetectorRequest &request)
{
    return qobject_cast<DeactivateAnomalyDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * DeleteAlertResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteAlertResponse * LookoutMetricsClient::deleteAlert(const DeleteAlertRequest &request)
{
    return qobject_cast<DeleteAlertResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * DeleteAnomalyDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a detector. Deleting an anomaly detector will delete all of its corresponding resources including any configured
 * datasets and
 */
DeleteAnomalyDetectorResponse * LookoutMetricsClient::deleteAnomalyDetector(const DeleteAnomalyDetectorRequest &request)
{
    return qobject_cast<DeleteAnomalyDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * DescribeAlertResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an
 *
 * alert>
 *
 * Amazon Lookout for Metrics API actions are eventually consistent. If you do a read operation on a resource immediately
 * after creating or modifying it, use retries to allow time for the write operation to
 */
DescribeAlertResponse * LookoutMetricsClient::describeAlert(const DescribeAlertRequest &request)
{
    return qobject_cast<DescribeAlertResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * DescribeAnomalyDetectionExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the status of the specified anomaly detection
 */
DescribeAnomalyDetectionExecutionsResponse * LookoutMetricsClient::describeAnomalyDetectionExecutions(const DescribeAnomalyDetectionExecutionsRequest &request)
{
    return qobject_cast<DescribeAnomalyDetectionExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * DescribeAnomalyDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 *
 * detector>
 *
 * Amazon Lookout for Metrics API actions are eventually consistent. If you do a read operation on a resource immediately
 * after creating or modifying it, use retries to allow time for the write operation to
 */
DescribeAnomalyDetectorResponse * LookoutMetricsClient::describeAnomalyDetector(const DescribeAnomalyDetectorRequest &request)
{
    return qobject_cast<DescribeAnomalyDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * DescribeMetricSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 *
 * dataset>
 *
 * Amazon Lookout for Metrics API actions are eventually consistent. If you do a read operation on a resource immediately
 * after creating or modifying it, use retries to allow time for the write operation to
 */
DescribeMetricSetResponse * LookoutMetricsClient::describeMetricSet(const DescribeMetricSetRequest &request)
{
    return qobject_cast<DescribeMetricSetResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * DetectMetricSetConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects an Amazon S3 dataset's file format, interval, and
 */
DetectMetricSetConfigResponse * LookoutMetricsClient::detectMetricSetConfig(const DetectMetricSetConfigRequest &request)
{
    return qobject_cast<DetectMetricSetConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * GetAnomalyGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about a group of anomalous
 */
GetAnomalyGroupResponse * LookoutMetricsClient::getAnomalyGroup(const GetAnomalyGroupRequest &request)
{
    return qobject_cast<GetAnomalyGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * GetDataQualityMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about the requested data quality
 */
GetDataQualityMetricsResponse * LookoutMetricsClient::getDataQualityMetrics(const GetDataQualityMetricsRequest &request)
{
    return qobject_cast<GetDataQualityMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * GetFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get feedback for an anomaly
 */
GetFeedbackResponse * LookoutMetricsClient::getFeedback(const GetFeedbackRequest &request)
{
    return qobject_cast<GetFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * GetSampleDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a selection of sample records from an Amazon S3
 */
GetSampleDataResponse * LookoutMetricsClient::getSampleData(const GetSampleDataRequest &request)
{
    return qobject_cast<GetSampleDataResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * ListAlertsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the alerts attached to a
 *
 * detector>
 *
 * Amazon Lookout for Metrics API actions are eventually consistent. If you do a read operation on a resource immediately
 * after creating or modifying it, use retries to allow time for the write operation to
 */
ListAlertsResponse * LookoutMetricsClient::listAlerts(const ListAlertsRequest &request)
{
    return qobject_cast<ListAlertsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * ListAnomalyDetectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the detectors in the current AWS
 *
 * Region>
 *
 * Amazon Lookout for Metrics API actions are eventually consistent. If you do a read operation on a resource immediately
 * after creating or modifying it, use retries to allow time for the write operation to
 */
ListAnomalyDetectorsResponse * LookoutMetricsClient::listAnomalyDetectors(const ListAnomalyDetectorsRequest &request)
{
    return qobject_cast<ListAnomalyDetectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * ListAnomalyGroupRelatedMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of measures that are potential causes or effects of an anomaly
 */
ListAnomalyGroupRelatedMetricsResponse * LookoutMetricsClient::listAnomalyGroupRelatedMetrics(const ListAnomalyGroupRelatedMetricsRequest &request)
{
    return qobject_cast<ListAnomalyGroupRelatedMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * ListAnomalyGroupSummariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of anomaly
 */
ListAnomalyGroupSummariesResponse * LookoutMetricsClient::listAnomalyGroupSummaries(const ListAnomalyGroupSummariesRequest &request)
{
    return qobject_cast<ListAnomalyGroupSummariesResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * ListAnomalyGroupTimeSeriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of anomalous metrics for a measure in an anomaly
 */
ListAnomalyGroupTimeSeriesResponse * LookoutMetricsClient::listAnomalyGroupTimeSeries(const ListAnomalyGroupTimeSeriesRequest &request)
{
    return qobject_cast<ListAnomalyGroupTimeSeriesResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * ListMetricSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the datasets in the current AWS
 *
 * Region>
 *
 * Amazon Lookout for Metrics API actions are eventually consistent. If you do a read operation on a resource immediately
 * after creating or modifying it, use retries to allow time for the write operation to
 */
ListMetricSetsResponse * LookoutMetricsClient::listMetricSets(const ListMetricSetsRequest &request)
{
    return qobject_cast<ListMetricSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a> for a
 * detector, dataset, or
 */
ListTagsForResourceResponse * LookoutMetricsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * PutFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add feedback for an anomalous
 */
PutFeedbackResponse * LookoutMetricsClient::putFeedback(const PutFeedbackRequest &request)
{
    return qobject_cast<PutFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a> to a detector,
 * dataset, or
 */
TagResourceResponse * LookoutMetricsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a> from a detector,
 * dataset, or
 */
UntagResourceResponse * LookoutMetricsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * UpdateAlertResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Make changes to an existing
 */
UpdateAlertResponse * LookoutMetricsClient::updateAlert(const UpdateAlertRequest &request)
{
    return qobject_cast<UpdateAlertResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * UpdateAnomalyDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a detector. After activation, you can only change a detector's ingestion delay and
 */
UpdateAnomalyDetectorResponse * LookoutMetricsClient::updateAnomalyDetector(const UpdateAnomalyDetectorRequest &request)
{
    return qobject_cast<UpdateAnomalyDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutMetricsClient service, and returns a pointer to an
 * UpdateMetricSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateMetricSetResponse * LookoutMetricsClient::updateMetricSet(const UpdateMetricSetRequest &request)
{
    return qobject_cast<UpdateMetricSetResponse *>(send(request));
}

/*!
 * \class QtAws::LookoutMetrics::LookoutMetricsClientPrivate
 * \brief The LookoutMetricsClientPrivate class provides private implementation for LookoutMetricsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a LookoutMetricsClientPrivate object with public implementation \a q.
 */
LookoutMetricsClientPrivate::LookoutMetricsClientPrivate(LookoutMetricsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace LookoutMetrics
} // namespace QtAws
