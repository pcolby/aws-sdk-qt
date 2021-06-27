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

#ifndef QTAWS_COMPREHENDMEDICALCLIENT_H
#define QTAWS_COMPREHENDMEDICALCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ComprehendMedical {

class ComprehendMedicalClientPrivate;
class DescribeEntitiesDetectionV2JobRequest;
class DescribeEntitiesDetectionV2JobResponse;
class DescribeICD10CMInferenceJobRequest;
class DescribeICD10CMInferenceJobResponse;
class DescribePHIDetectionJobRequest;
class DescribePHIDetectionJobResponse;
class DescribeRxNormInferenceJobRequest;
class DescribeRxNormInferenceJobResponse;
class DetectEntitiesRequest;
class DetectEntitiesResponse;
class DetectEntitiesV2Request;
class DetectEntitiesV2Response;
class DetectPHIRequest;
class DetectPHIResponse;
class InferICD10CMRequest;
class InferICD10CMResponse;
class InferRxNormRequest;
class InferRxNormResponse;
class ListEntitiesDetectionV2JobsRequest;
class ListEntitiesDetectionV2JobsResponse;
class ListICD10CMInferenceJobsRequest;
class ListICD10CMInferenceJobsResponse;
class ListPHIDetectionJobsRequest;
class ListPHIDetectionJobsResponse;
class ListRxNormInferenceJobsRequest;
class ListRxNormInferenceJobsResponse;
class StartEntitiesDetectionV2JobRequest;
class StartEntitiesDetectionV2JobResponse;
class StartICD10CMInferenceJobRequest;
class StartICD10CMInferenceJobResponse;
class StartPHIDetectionJobRequest;
class StartPHIDetectionJobResponse;
class StartRxNormInferenceJobRequest;
class StartRxNormInferenceJobResponse;
class StopEntitiesDetectionV2JobRequest;
class StopEntitiesDetectionV2JobResponse;
class StopICD10CMInferenceJobRequest;
class StopICD10CMInferenceJobResponse;
class StopPHIDetectionJobRequest;
class StopPHIDetectionJobResponse;
class StopRxNormInferenceJobRequest;
class StopRxNormInferenceJobResponse;

class QTAWS_EXPORT ComprehendMedicalClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ComprehendMedicalClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ComprehendMedicalClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeEntitiesDetectionV2JobResponse * describeEntitiesDetectionV2Job(const DescribeEntitiesDetectionV2JobRequest &request);
    DescribeICD10CMInferenceJobResponse * describeICD10CMInferenceJob(const DescribeICD10CMInferenceJobRequest &request);
    DescribePHIDetectionJobResponse * describePHIDetectionJob(const DescribePHIDetectionJobRequest &request);
    DescribeRxNormInferenceJobResponse * describeRxNormInferenceJob(const DescribeRxNormInferenceJobRequest &request);
    DetectEntitiesResponse * detectEntities(const DetectEntitiesRequest &request);
    DetectEntitiesV2Response * detectEntitiesV2(const DetectEntitiesV2Request &request);
    DetectPHIResponse * detectPHI(const DetectPHIRequest &request);
    InferICD10CMResponse * inferICD10CM(const InferICD10CMRequest &request);
    InferRxNormResponse * inferRxNorm(const InferRxNormRequest &request);
    ListEntitiesDetectionV2JobsResponse * listEntitiesDetectionV2Jobs(const ListEntitiesDetectionV2JobsRequest &request);
    ListICD10CMInferenceJobsResponse * listICD10CMInferenceJobs(const ListICD10CMInferenceJobsRequest &request);
    ListPHIDetectionJobsResponse * listPHIDetectionJobs(const ListPHIDetectionJobsRequest &request);
    ListRxNormInferenceJobsResponse * listRxNormInferenceJobs(const ListRxNormInferenceJobsRequest &request);
    StartEntitiesDetectionV2JobResponse * startEntitiesDetectionV2Job(const StartEntitiesDetectionV2JobRequest &request);
    StartICD10CMInferenceJobResponse * startICD10CMInferenceJob(const StartICD10CMInferenceJobRequest &request);
    StartPHIDetectionJobResponse * startPHIDetectionJob(const StartPHIDetectionJobRequest &request);
    StartRxNormInferenceJobResponse * startRxNormInferenceJob(const StartRxNormInferenceJobRequest &request);
    StopEntitiesDetectionV2JobResponse * stopEntitiesDetectionV2Job(const StopEntitiesDetectionV2JobRequest &request);
    StopICD10CMInferenceJobResponse * stopICD10CMInferenceJob(const StopICD10CMInferenceJobRequest &request);
    StopPHIDetectionJobResponse * stopPHIDetectionJob(const StopPHIDetectionJobRequest &request);
    StopRxNormInferenceJobResponse * stopRxNormInferenceJob(const StopRxNormInferenceJobRequest &request);

protected:
    /// @cond internal
    ComprehendMedicalClientPrivate * const d_ptr; ///< Internal d-pointer.
    ComprehendMedicalClient(ComprehendMedicalClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ComprehendMedicalClient)
    Q_DISABLE_COPY(ComprehendMedicalClient)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
