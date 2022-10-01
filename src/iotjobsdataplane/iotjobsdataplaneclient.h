// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTJOBSDATAPLANECLIENT_H
#define QTAWS_IOTJOBSDATAPLANECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiotjobsdataplaneglobal.h"

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

class QTAWSIOTJOBSDATAPLANE_EXPORT IoTJobsDataPlaneClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTJobsDataPlaneClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoTJobsDataPlaneClient(
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
