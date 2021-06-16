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

#ifndef QTAWS_IOTJOBSDATAPLANECLIENT_H
#define QTAWS_IOTJOBSDATAPLANECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace IoTJobsDataPlane {

class IoTJobsDataPlaneClientPrivate;
class DescribeJobExecutionRequest;
class DescribeJobExecutionResponse;
class GetPendingJobExecutionsRequest;
class GetPendingJobExecutionsResponse;
class StartNextPendingJobExecutionRequest;
class StartNextPendingJobExecutionResponse;
class UpdateJobExecutionRequest;
class UpdateJobExecutionResponse;

class QTAWS_EXPORT IoTJobsDataPlaneClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTJobsDataPlaneClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    IoTJobsDataPlaneClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeJobExecutionResponse * describeJobExecution(const DescribeJobExecutionRequest &request);
    GetPendingJobExecutionsResponse * getPendingJobExecutions(const GetPendingJobExecutionsRequest &request);
    StartNextPendingJobExecutionResponse * startNextPendingJobExecution(const StartNextPendingJobExecutionRequest &request);
    UpdateJobExecutionResponse * updateJobExecution(const UpdateJobExecutionRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTJobsDataPlaneClient)
    Q_DISABLE_COPY(IoTJobsDataPlaneClient)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
