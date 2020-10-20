/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_REKOGNITIONCLIENT_H
#define QTAWS_REKOGNITIONCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Rekognition {

class RekognitionClientPrivate;
class CompareFacesRequest;
class CompareFacesResponse;
class CreateCollectionRequest;
class CreateCollectionResponse;
class CreateStreamProcessorRequest;
class CreateStreamProcessorResponse;
class DeleteCollectionRequest;
class DeleteCollectionResponse;
class DeleteFacesRequest;
class DeleteFacesResponse;
class DeleteStreamProcessorRequest;
class DeleteStreamProcessorResponse;
class DescribeCollectionRequest;
class DescribeCollectionResponse;
class DescribeStreamProcessorRequest;
class DescribeStreamProcessorResponse;
class DetectFacesRequest;
class DetectFacesResponse;
class DetectLabelsRequest;
class DetectLabelsResponse;
class DetectModerationLabelsRequest;
class DetectModerationLabelsResponse;
class DetectTextRequest;
class DetectTextResponse;
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
class IndexFacesRequest;
class IndexFacesResponse;
class ListCollectionsRequest;
class ListCollectionsResponse;
class ListFacesRequest;
class ListFacesResponse;
class ListStreamProcessorsRequest;
class ListStreamProcessorsResponse;
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
class StartStreamProcessorRequest;
class StartStreamProcessorResponse;
class StopStreamProcessorRequest;
class StopStreamProcessorResponse;

class QTAWS_EXPORT RekognitionClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RekognitionClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    RekognitionClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CompareFacesResponse * compareFaces(const CompareFacesRequest &request);
    CreateCollectionResponse * createCollection(const CreateCollectionRequest &request);
    CreateStreamProcessorResponse * createStreamProcessor(const CreateStreamProcessorRequest &request);
    DeleteCollectionResponse * deleteCollection(const DeleteCollectionRequest &request);
    DeleteFacesResponse * deleteFaces(const DeleteFacesRequest &request);
    DeleteStreamProcessorResponse * deleteStreamProcessor(const DeleteStreamProcessorRequest &request);
    DescribeCollectionResponse * describeCollection(const DescribeCollectionRequest &request);
    DescribeStreamProcessorResponse * describeStreamProcessor(const DescribeStreamProcessorRequest &request);
    DetectFacesResponse * detectFaces(const DetectFacesRequest &request);
    DetectLabelsResponse * detectLabels(const DetectLabelsRequest &request);
    DetectModerationLabelsResponse * detectModerationLabels(const DetectModerationLabelsRequest &request);
    DetectTextResponse * detectText(const DetectTextRequest &request);
    GetCelebrityInfoResponse * getCelebrityInfo(const GetCelebrityInfoRequest &request);
    GetCelebrityRecognitionResponse * getCelebrityRecognition(const GetCelebrityRecognitionRequest &request);
    GetContentModerationResponse * getContentModeration(const GetContentModerationRequest &request);
    GetFaceDetectionResponse * getFaceDetection(const GetFaceDetectionRequest &request);
    GetFaceSearchResponse * getFaceSearch(const GetFaceSearchRequest &request);
    GetLabelDetectionResponse * getLabelDetection(const GetLabelDetectionRequest &request);
    GetPersonTrackingResponse * getPersonTracking(const GetPersonTrackingRequest &request);
    IndexFacesResponse * indexFaces(const IndexFacesRequest &request);
    ListCollectionsResponse * listCollections(const ListCollectionsRequest &request);
    ListFacesResponse * listFaces(const ListFacesRequest &request);
    ListStreamProcessorsResponse * listStreamProcessors(const ListStreamProcessorsRequest &request);
    RecognizeCelebritiesResponse * recognizeCelebrities(const RecognizeCelebritiesRequest &request);
    SearchFacesResponse * searchFaces(const SearchFacesRequest &request);
    SearchFacesByImageResponse * searchFacesByImage(const SearchFacesByImageRequest &request);
    StartCelebrityRecognitionResponse * startCelebrityRecognition(const StartCelebrityRecognitionRequest &request);
    StartContentModerationResponse * startContentModeration(const StartContentModerationRequest &request);
    StartFaceDetectionResponse * startFaceDetection(const StartFaceDetectionRequest &request);
    StartFaceSearchResponse * startFaceSearch(const StartFaceSearchRequest &request);
    StartLabelDetectionResponse * startLabelDetection(const StartLabelDetectionRequest &request);
    StartPersonTrackingResponse * startPersonTracking(const StartPersonTrackingRequest &request);
    StartStreamProcessorResponse * startStreamProcessor(const StartStreamProcessorRequest &request);
    StopStreamProcessorResponse * stopStreamProcessor(const StopStreamProcessorRequest &request);

private:
    Q_DECLARE_PRIVATE(RekognitionClient)
    Q_DISABLE_COPY(RekognitionClient)

};

} // namespace Rekognition
} // namespace QtAws

#endif
