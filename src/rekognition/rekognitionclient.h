/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_REKOGNITIONCLIENT_H
#define QTAWS_REKOGNITIONCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace Rekognition {

class RekognitionClientPrivate;
class CompareFacesResponse;
class CreateCollectionResponse;
class CreateStreamProcessorResponse;
class DeleteCollectionResponse;
class DeleteFacesResponse;
class DeleteStreamProcessorResponse;
class DescribeStreamProcessorResponse;
class DetectFacesResponse;
class DetectLabelsResponse;
class DetectModerationLabelsResponse;
class DetectTextResponse;
class GetCelebrityInfoResponse;
class GetCelebrityRecognitionResponse;
class GetContentModerationResponse;
class GetFaceDetectionResponse;
class GetFaceSearchResponse;
class GetLabelDetectionResponse;
class GetPersonTrackingResponse;
class IndexFacesResponse;
class ListCollectionsResponse;
class ListFacesResponse;
class ListStreamProcessorsResponse;
class RecognizeCelebritiesResponse;
class SearchFacesResponse;
class SearchFacesByImageResponse;
class StartCelebrityRecognitionResponse;
class StartContentModerationResponse;
class StartFaceDetectionResponse;
class StartFaceSearchResponse;
class StartLabelDetectionResponse;
class StartPersonTrackingResponse;
class StartStreamProcessorResponse;
class StopStreamProcessorResponse;

class QTAWS_EXPORT RekognitionClient : public AwsAbstractClient {
    Q_OBJECT

public:
    RekognitionClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    RekognitionClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CompareFacesResponse * compareFaces(const CompareFacesRequest &request);
    CreateCollectionResponse * createCollection(const CreateCollectionRequest &request);
    CreateStreamProcessorResponse * createStreamProcessor(const CreateStreamProcessorRequest &request);
    DeleteCollectionResponse * deleteCollection(const DeleteCollectionRequest &request);
    DeleteFacesResponse * deleteFaces(const DeleteFacesRequest &request);
    DeleteStreamProcessorResponse * deleteStreamProcessor(const DeleteStreamProcessorRequest &request);
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
} // namespace AWS

#endif
