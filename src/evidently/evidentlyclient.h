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

#ifndef QTAWS_EVIDENTLYCLIENT_H
#define QTAWS_EVIDENTLYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsevidentlyglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Evidently {

class EvidentlyClientPrivate;
class BatchEvaluateFeatureRequest;
class BatchEvaluateFeatureResponse;
class CreateExperimentRequest;
class CreateExperimentResponse;
class CreateFeatureRequest;
class CreateFeatureResponse;
class CreateLaunchRequest;
class CreateLaunchResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class CreateSegmentRequest;
class CreateSegmentResponse;
class DeleteExperimentRequest;
class DeleteExperimentResponse;
class DeleteFeatureRequest;
class DeleteFeatureResponse;
class DeleteLaunchRequest;
class DeleteLaunchResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DeleteSegmentRequest;
class DeleteSegmentResponse;
class EvaluateFeatureRequest;
class EvaluateFeatureResponse;
class GetExperimentRequest;
class GetExperimentResponse;
class GetExperimentResultsRequest;
class GetExperimentResultsResponse;
class GetFeatureRequest;
class GetFeatureResponse;
class GetLaunchRequest;
class GetLaunchResponse;
class GetProjectRequest;
class GetProjectResponse;
class GetSegmentRequest;
class GetSegmentResponse;
class ListExperimentsRequest;
class ListExperimentsResponse;
class ListFeaturesRequest;
class ListFeaturesResponse;
class ListLaunchesRequest;
class ListLaunchesResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class ListSegmentReferencesRequest;
class ListSegmentReferencesResponse;
class ListSegmentsRequest;
class ListSegmentsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutProjectEventsRequest;
class PutProjectEventsResponse;
class StartExperimentRequest;
class StartExperimentResponse;
class StartLaunchRequest;
class StartLaunchResponse;
class StopExperimentRequest;
class StopExperimentResponse;
class StopLaunchRequest;
class StopLaunchResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestSegmentPatternRequest;
class TestSegmentPatternResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateExperimentRequest;
class UpdateExperimentResponse;
class UpdateFeatureRequest;
class UpdateFeatureResponse;
class UpdateLaunchRequest;
class UpdateLaunchResponse;
class UpdateProjectRequest;
class UpdateProjectResponse;
class UpdateProjectDataDeliveryRequest;
class UpdateProjectDataDeliveryResponse;

class QTAWSEVIDENTLY_EXPORT EvidentlyClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EvidentlyClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit EvidentlyClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchEvaluateFeatureResponse * batchEvaluateFeature(const BatchEvaluateFeatureRequest &request);
    CreateExperimentResponse * createExperiment(const CreateExperimentRequest &request);
    CreateFeatureResponse * createFeature(const CreateFeatureRequest &request);
    CreateLaunchResponse * createLaunch(const CreateLaunchRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    CreateSegmentResponse * createSegment(const CreateSegmentRequest &request);
    DeleteExperimentResponse * deleteExperiment(const DeleteExperimentRequest &request);
    DeleteFeatureResponse * deleteFeature(const DeleteFeatureRequest &request);
    DeleteLaunchResponse * deleteLaunch(const DeleteLaunchRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteSegmentResponse * deleteSegment(const DeleteSegmentRequest &request);
    EvaluateFeatureResponse * evaluateFeature(const EvaluateFeatureRequest &request);
    GetExperimentResponse * getExperiment(const GetExperimentRequest &request);
    GetExperimentResultsResponse * getExperimentResults(const GetExperimentResultsRequest &request);
    GetFeatureResponse * getFeature(const GetFeatureRequest &request);
    GetLaunchResponse * getLaunch(const GetLaunchRequest &request);
    GetProjectResponse * getProject(const GetProjectRequest &request);
    GetSegmentResponse * getSegment(const GetSegmentRequest &request);
    ListExperimentsResponse * listExperiments(const ListExperimentsRequest &request);
    ListFeaturesResponse * listFeatures(const ListFeaturesRequest &request);
    ListLaunchesResponse * listLaunches(const ListLaunchesRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    ListSegmentReferencesResponse * listSegmentReferences(const ListSegmentReferencesRequest &request);
    ListSegmentsResponse * listSegments(const ListSegmentsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutProjectEventsResponse * putProjectEvents(const PutProjectEventsRequest &request);
    StartExperimentResponse * startExperiment(const StartExperimentRequest &request);
    StartLaunchResponse * startLaunch(const StartLaunchRequest &request);
    StopExperimentResponse * stopExperiment(const StopExperimentRequest &request);
    StopLaunchResponse * stopLaunch(const StopLaunchRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestSegmentPatternResponse * testSegmentPattern(const TestSegmentPatternRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateExperimentResponse * updateExperiment(const UpdateExperimentRequest &request);
    UpdateFeatureResponse * updateFeature(const UpdateFeatureRequest &request);
    UpdateLaunchResponse * updateLaunch(const UpdateLaunchRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);
    UpdateProjectDataDeliveryResponse * updateProjectDataDelivery(const UpdateProjectDataDeliveryRequest &request);

private:
    Q_DECLARE_PRIVATE(EvidentlyClient)
    Q_DISABLE_COPY(EvidentlyClient)

};

} // namespace Evidently
} // namespace QtAws

#endif
