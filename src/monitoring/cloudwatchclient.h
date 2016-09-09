/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CLOUDWATCHCLIENT_H
#define QTAWS_CLOUDWATCHCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class CloudWatchClientPrivate;

class QTAWS_EXPORT CloudWatchClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CloudWatchClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudWatchClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CloudWatchDeleteAlarmsResponse * deleteAlarms(const CloudWatchDeleteAlarmsRequest &request);
    CloudWatchDescribeAlarmHistoryResponse * describeAlarmHistory(const CloudWatchDescribeAlarmHistoryRequest &request);
    CloudWatchDescribeAlarmsResponse * describeAlarms(const CloudWatchDescribeAlarmsRequest &request);
    CloudWatchDescribeAlarmsForMetricResponse * describeAlarmsForMetric(const CloudWatchDescribeAlarmsForMetricRequest &request);
    CloudWatchDisableAlarmActionsResponse * disableAlarmActions(const CloudWatchDisableAlarmActionsRequest &request);
    CloudWatchEnableAlarmActionsResponse * enableAlarmActions(const CloudWatchEnableAlarmActionsRequest &request);
    CloudWatchGetMetricStatisticsResponse * getMetricStatistics(const CloudWatchGetMetricStatisticsRequest &request);
    CloudWatchListMetricsResponse * listMetrics(const CloudWatchListMetricsRequest &request);
    CloudWatchPutMetricAlarmResponse * putMetricAlarm(const CloudWatchPutMetricAlarmRequest &request);
    CloudWatchPutMetricDataResponse * putMetricData(const CloudWatchPutMetricDataRequest &request);
    CloudWatchSetAlarmStateResponse * setAlarmState(const CloudWatchSetAlarmStateRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudWatchClient)
    Q_DISABLE_COPY(CloudWatchClient)

};

QTAWS_END_NAMESPACE

#endif
