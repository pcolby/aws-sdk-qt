// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REKOGNITIONCLIENT_H
#define QTAWS_REKOGNITIONCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsrekognitionglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Rekognition {

class RekognitionClientPrivate;
class CompareFacesRequest;
class CompareFacesResponse;
class CopyProjectVersionRequest;
class CopyProjectVersionResponse;
class CreateCollectionRequest;
class CreateCollectionResponse;
class CreateDatasetRequest;
class CreateDatasetResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class CreateProjectVersionRequest;
class CreateProjectVersionResponse;
class CreateStreamProcessorRequest;
class CreateStreamProcessorResponse;
class DeleteCollectionRequest;
class DeleteCollectionResponse;
class DeleteDatasetRequest;
class DeleteDatasetResponse;
class DeleteFacesRequest;
class DeleteFacesResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DeleteProjectPolicyRequest;
class DeleteProjectPolicyResponse;
class DeleteProjectVersionRequest;
class DeleteProjectVersionResponse;
class DeleteStreamProcessorRequest;
class DeleteStreamProcessorResponse;
class DescribeCollectionRequest;
class DescribeCollectionResponse;
class DescribeDatasetRequest;
class DescribeDatasetResponse;
class DescribeProjectVersionsRequest;
class DescribeProjectVersionsResponse;
class DescribeProjectsRequest;
class DescribeProjectsResponse;
class DescribeStreamProcessorRequest;
class DescribeStreamProcessorResponse;
class DetectCustomLabelsRequest;
class DetectCustomLabelsResponse;
class DetectFacesRequest;
class DetectFacesResponse;
class DetectLabelsRequest;
class DetectLabelsResponse;
class DetectModerationLabelsRequest;
class DetectModerationLabelsResponse;
class DetectProtectiveEquipmentRequest;
class DetectProtectiveEquipmentResponse;
class DetectTextRequest;
class DetectTextResponse;
class DistributeDatasetEntriesRequest;
class DistributeDatasetEntriesResponse;
class GetCelebrityInfoRequest;
class GetCelebrityInfoResponse;
class GetCelebrityRecognitionRequest;
class GetCelebrityRecognitionResponse;
class GetContentModerationRequest;
class GetContentModerationResponse;
class GetFaceDetectionRequest;
class GetFaceDetectionResponse;
class GetFaceSearchRequest;
class GetFaceSearchResponse;
class GetLabelDetectionRequest;
class GetLabelDetectionResponse;
class GetPersonTrackingRequest;
class GetPersonTrackingResponse;
class GetSegmentDetectionRequest;
class GetSegmentDetectionResponse;
class GetTextDetectionRequest;
class GetTextDetectionResponse;
class IndexFacesRequest;
class IndexFacesResponse;
class ListCollectionsRequest;
class ListCollectionsResponse;
class ListDatasetEntriesRequest;
class ListDatasetEntriesResponse;
class ListDatasetLabelsRequest;
class ListDatasetLabelsResponse;
class ListFacesRequest;
class ListFacesResponse;
class ListProjectPoliciesRequest;
class ListProjectPoliciesResponse;
class ListStreamProcessorsRequest;
class ListStreamProcessorsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutProjectPolicyRequest;
class PutProjectPolicyResponse;
class RecognizeCelebritiesRequest;
class RecognizeCelebritiesResponse;
class SearchFacesRequest;
class SearchFacesResponse;
class SearchFacesByImageRequest;
class SearchFacesByImageResponse;
class StartCelebrityRecognitionRequest;
class StartCelebrityRecognitionResponse;
class StartContentModerationRequest;
class StartContentModerationResponse;
class StartFaceDetectionRequest;
class StartFaceDetectionResponse;
class StartFaceSearchRequest;
class StartFaceSearchResponse;
class StartLabelDetectionRequest;
class StartLabelDetectionResponse;
class StartPersonTrackingRequest;
class StartPersonTrackingResponse;
class StartProjectVersionRequest;
class StartProjectVersionResponse;
class StartSegmentDetectionRequest;
class StartSegmentDetectionResponse;
class StartStreamProcessorRequest;
class StartStreamProcessorResponse;
class StartTextDetectionRequest;
class StartTextDetectionResponse;
class StopProjectVersionRequest;
class StopProjectVersionResponse;
class StopStreamProcessorRequest;
class StopStreamProcessorResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDatasetEntriesRequest;
class UpdateDatasetEntriesResponse;
class UpdateStreamProcessorRequest;
class UpdateStreamProcessorResponse;

class QTAWSREKOGNITION_EXPORT RekognitionClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RekognitionClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit RekognitionClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CompareFacesResponse * compareFaces(const CompareFacesRequest &request);
    CopyProjectVersionResponse * copyProjectVersion(const CopyProjectVersionRequest &request);
    CreateCollectionResponse * createCollection(const CreateCollectionRequest &request);
    CreateDatasetResponse * createDataset(const CreateDatasetRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    CreateProjectVersionResponse * createProjectVersion(const CreateProjectVersionRequest &request);
    CreateStreamProcessorResponse * createStreamProcessor(const CreateStreamProcessorRequest &request);
    DeleteCollectionResponse * deleteCollection(const DeleteCollectionRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DeleteFacesResponse * deleteFaces(const DeleteFacesRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteProjectPolicyResponse * deleteProjectPolicy(const DeleteProjectPolicyRequest &request);
    DeleteProjectVersionResponse * deleteProjectVersion(const DeleteProjectVersionRequest &request);
    DeleteStreamProcessorResponse * deleteStreamProcessor(const DeleteStreamProcessorRequest &request);
    DescribeCollectionResponse * describeCollection(const DescribeCollectionRequest &request);
    DescribeDatasetResponse * describeDataset(const DescribeDatasetRequest &request);
    DescribeProjectVersionsResponse * describeProjectVersions(const DescribeProjectVersionsRequest &request);
    DescribeProjectsResponse * describeProjects(const DescribeProjectsRequest &request);
    DescribeStreamProcessorResponse * describeStreamProcessor(const DescribeStreamProcessorRequest &request);
    DetectCustomLabelsResponse * detectCustomLabels(const DetectCustomLabelsRequest &request);
    DetectFacesResponse * detectFaces(const DetectFacesRequest &request);
    DetectLabelsResponse * detectLabels(const DetectLabelsRequest &request);
    DetectModerationLabelsResponse * detectModerationLabels(const DetectModerationLabelsRequest &request);
    DetectProtectiveEquipmentResponse * detectProtectiveEquipment(const DetectProtectiveEquipmentRequest &request);
    DetectTextResponse * detectText(const DetectTextRequest &request);
    DistributeDatasetEntriesResponse * distributeDatasetEntries(const DistributeDatasetEntriesRequest &request);
    GetCelebrityInfoResponse * getCelebrityInfo(const GetCelebrityInfoRequest &request);
    GetCelebrityRecognitionResponse * getCelebrityRecognition(const GetCelebrityRecognitionRequest &request);
    GetContentModerationResponse * getContentModeration(const GetContentModerationRequest &request);
    GetFaceDetectionResponse * getFaceDetection(const GetFaceDetectionRequest &request);
    GetFaceSearchResponse * getFaceSearch(const GetFaceSearchRequest &request);
    GetLabelDetectionResponse * getLabelDetection(const GetLabelDetectionRequest &request);
    GetPersonTrackingResponse * getPersonTracking(const GetPersonTrackingRequest &request);
    GetSegmentDetectionResponse * getSegmentDetection(const GetSegmentDetectionRequest &request);
    GetTextDetectionResponse * getTextDetection(const GetTextDetectionRequest &request);
    IndexFacesResponse * indexFaces(const IndexFacesRequest &request);
    ListCollectionsResponse * listCollections(const ListCollectionsRequest &request);
    ListDatasetEntriesResponse * listDatasetEntries(const ListDatasetEntriesRequest &request);
    ListDatasetLabelsResponse * listDatasetLabels(const ListDatasetLabelsRequest &request);
    ListFacesResponse * listFaces(const ListFacesRequest &request);
    ListProjectPoliciesResponse * listProjectPolicies(const ListProjectPoliciesRequest &request);
    ListStreamProcessorsResponse * listStreamProcessors(const ListStreamProcessorsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutProjectPolicyResponse * putProjectPolicy(const PutProjectPolicyRequest &request);
    RecognizeCelebritiesResponse * recognizeCelebrities(const RecognizeCelebritiesRequest &request);
    SearchFacesResponse * searchFaces(const SearchFacesRequest &request);
    SearchFacesByImageResponse * searchFacesByImage(const SearchFacesByImageRequest &request);
    StartCelebrityRecognitionResponse * startCelebrityRecognition(const StartCelebrityRecognitionRequest &request);
    StartContentModerationResponse * startContentModeration(const StartContentModerationRequest &request);
    StartFaceDetectionResponse * startFaceDetection(const StartFaceDetectionRequest &request);
    StartFaceSearchResponse * startFaceSearch(const StartFaceSearchRequest &request);
    StartLabelDetectionResponse * startLabelDetection(const StartLabelDetectionRequest &request);
    StartPersonTrackingResponse * startPersonTracking(const StartPersonTrackingRequest &request);
    StartProjectVersionResponse * startProjectVersion(const StartProjectVersionRequest &request);
    StartSegmentDetectionResponse * startSegmentDetection(const StartSegmentDetectionRequest &request);
    StartStreamProcessorResponse * startStreamProcessor(const StartStreamProcessorRequest &request);
    StartTextDetectionResponse * startTextDetection(const StartTextDetectionRequest &request);
    StopProjectVersionResponse * stopProjectVersion(const StopProjectVersionRequest &request);
    StopStreamProcessorResponse * stopStreamProcessor(const StopStreamProcessorRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDatasetEntriesResponse * updateDatasetEntries(const UpdateDatasetEntriesRequest &request);
    UpdateStreamProcessorResponse * updateStreamProcessor(const UpdateStreamProcessorRequest &request);

private:
    Q_DECLARE_PRIVATE(RekognitionClient)
    Q_DISABLE_COPY(RekognitionClient)

};

} // namespace Rekognition
} // namespace QtAws

#endif
