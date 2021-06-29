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

#ifndef QTAWS_COMPREHENDCLIENT_H
#define QTAWS_COMPREHENDCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscomprehendglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Comprehend {

class ComprehendClientPrivate;
class BatchDetectDominantLanguageRequest;
class BatchDetectDominantLanguageResponse;
class BatchDetectEntitiesRequest;
class BatchDetectEntitiesResponse;
class BatchDetectKeyPhrasesRequest;
class BatchDetectKeyPhrasesResponse;
class BatchDetectSentimentRequest;
class BatchDetectSentimentResponse;
class BatchDetectSyntaxRequest;
class BatchDetectSyntaxResponse;
class ClassifyDocumentRequest;
class ClassifyDocumentResponse;
class ContainsPiiEntitiesRequest;
class ContainsPiiEntitiesResponse;
class CreateDocumentClassifierRequest;
class CreateDocumentClassifierResponse;
class CreateEndpointRequest;
class CreateEndpointResponse;
class CreateEntityRecognizerRequest;
class CreateEntityRecognizerResponse;
class DeleteDocumentClassifierRequest;
class DeleteDocumentClassifierResponse;
class DeleteEndpointRequest;
class DeleteEndpointResponse;
class DeleteEntityRecognizerRequest;
class DeleteEntityRecognizerResponse;
class DescribeDocumentClassificationJobRequest;
class DescribeDocumentClassificationJobResponse;
class DescribeDocumentClassifierRequest;
class DescribeDocumentClassifierResponse;
class DescribeDominantLanguageDetectionJobRequest;
class DescribeDominantLanguageDetectionJobResponse;
class DescribeEndpointRequest;
class DescribeEndpointResponse;
class DescribeEntitiesDetectionJobRequest;
class DescribeEntitiesDetectionJobResponse;
class DescribeEntityRecognizerRequest;
class DescribeEntityRecognizerResponse;
class DescribeEventsDetectionJobRequest;
class DescribeEventsDetectionJobResponse;
class DescribeKeyPhrasesDetectionJobRequest;
class DescribeKeyPhrasesDetectionJobResponse;
class DescribePiiEntitiesDetectionJobRequest;
class DescribePiiEntitiesDetectionJobResponse;
class DescribeSentimentDetectionJobRequest;
class DescribeSentimentDetectionJobResponse;
class DescribeTopicsDetectionJobRequest;
class DescribeTopicsDetectionJobResponse;
class DetectDominantLanguageRequest;
class DetectDominantLanguageResponse;
class DetectEntitiesRequest;
class DetectEntitiesResponse;
class DetectKeyPhrasesRequest;
class DetectKeyPhrasesResponse;
class DetectPiiEntitiesRequest;
class DetectPiiEntitiesResponse;
class DetectSentimentRequest;
class DetectSentimentResponse;
class DetectSyntaxRequest;
class DetectSyntaxResponse;
class ListDocumentClassificationJobsRequest;
class ListDocumentClassificationJobsResponse;
class ListDocumentClassifiersRequest;
class ListDocumentClassifiersResponse;
class ListDominantLanguageDetectionJobsRequest;
class ListDominantLanguageDetectionJobsResponse;
class ListEndpointsRequest;
class ListEndpointsResponse;
class ListEntitiesDetectionJobsRequest;
class ListEntitiesDetectionJobsResponse;
class ListEntityRecognizersRequest;
class ListEntityRecognizersResponse;
class ListEventsDetectionJobsRequest;
class ListEventsDetectionJobsResponse;
class ListKeyPhrasesDetectionJobsRequest;
class ListKeyPhrasesDetectionJobsResponse;
class ListPiiEntitiesDetectionJobsRequest;
class ListPiiEntitiesDetectionJobsResponse;
class ListSentimentDetectionJobsRequest;
class ListSentimentDetectionJobsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTopicsDetectionJobsRequest;
class ListTopicsDetectionJobsResponse;
class StartDocumentClassificationJobRequest;
class StartDocumentClassificationJobResponse;
class StartDominantLanguageDetectionJobRequest;
class StartDominantLanguageDetectionJobResponse;
class StartEntitiesDetectionJobRequest;
class StartEntitiesDetectionJobResponse;
class StartEventsDetectionJobRequest;
class StartEventsDetectionJobResponse;
class StartKeyPhrasesDetectionJobRequest;
class StartKeyPhrasesDetectionJobResponse;
class StartPiiEntitiesDetectionJobRequest;
class StartPiiEntitiesDetectionJobResponse;
class StartSentimentDetectionJobRequest;
class StartSentimentDetectionJobResponse;
class StartTopicsDetectionJobRequest;
class StartTopicsDetectionJobResponse;
class StopDominantLanguageDetectionJobRequest;
class StopDominantLanguageDetectionJobResponse;
class StopEntitiesDetectionJobRequest;
class StopEntitiesDetectionJobResponse;
class StopEventsDetectionJobRequest;
class StopEventsDetectionJobResponse;
class StopKeyPhrasesDetectionJobRequest;
class StopKeyPhrasesDetectionJobResponse;
class StopPiiEntitiesDetectionJobRequest;
class StopPiiEntitiesDetectionJobResponse;
class StopSentimentDetectionJobRequest;
class StopSentimentDetectionJobResponse;
class StopTrainingDocumentClassifierRequest;
class StopTrainingDocumentClassifierResponse;
class StopTrainingEntityRecognizerRequest;
class StopTrainingEntityRecognizerResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateEndpointRequest;
class UpdateEndpointResponse;

class QTAWSCOMPREHEND_EXPORT ComprehendClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ComprehendClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ComprehendClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchDetectDominantLanguageResponse * batchDetectDominantLanguage(const BatchDetectDominantLanguageRequest &request);
    BatchDetectEntitiesResponse * batchDetectEntities(const BatchDetectEntitiesRequest &request);
    BatchDetectKeyPhrasesResponse * batchDetectKeyPhrases(const BatchDetectKeyPhrasesRequest &request);
    BatchDetectSentimentResponse * batchDetectSentiment(const BatchDetectSentimentRequest &request);
    BatchDetectSyntaxResponse * batchDetectSyntax(const BatchDetectSyntaxRequest &request);
    ClassifyDocumentResponse * classifyDocument(const ClassifyDocumentRequest &request);
    ContainsPiiEntitiesResponse * containsPiiEntities(const ContainsPiiEntitiesRequest &request);
    CreateDocumentClassifierResponse * createDocumentClassifier(const CreateDocumentClassifierRequest &request);
    CreateEndpointResponse * createEndpoint(const CreateEndpointRequest &request);
    CreateEntityRecognizerResponse * createEntityRecognizer(const CreateEntityRecognizerRequest &request);
    DeleteDocumentClassifierResponse * deleteDocumentClassifier(const DeleteDocumentClassifierRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeleteEntityRecognizerResponse * deleteEntityRecognizer(const DeleteEntityRecognizerRequest &request);
    DescribeDocumentClassificationJobResponse * describeDocumentClassificationJob(const DescribeDocumentClassificationJobRequest &request);
    DescribeDocumentClassifierResponse * describeDocumentClassifier(const DescribeDocumentClassifierRequest &request);
    DescribeDominantLanguageDetectionJobResponse * describeDominantLanguageDetectionJob(const DescribeDominantLanguageDetectionJobRequest &request);
    DescribeEndpointResponse * describeEndpoint(const DescribeEndpointRequest &request);
    DescribeEntitiesDetectionJobResponse * describeEntitiesDetectionJob(const DescribeEntitiesDetectionJobRequest &request);
    DescribeEntityRecognizerResponse * describeEntityRecognizer(const DescribeEntityRecognizerRequest &request);
    DescribeEventsDetectionJobResponse * describeEventsDetectionJob(const DescribeEventsDetectionJobRequest &request);
    DescribeKeyPhrasesDetectionJobResponse * describeKeyPhrasesDetectionJob(const DescribeKeyPhrasesDetectionJobRequest &request);
    DescribePiiEntitiesDetectionJobResponse * describePiiEntitiesDetectionJob(const DescribePiiEntitiesDetectionJobRequest &request);
    DescribeSentimentDetectionJobResponse * describeSentimentDetectionJob(const DescribeSentimentDetectionJobRequest &request);
    DescribeTopicsDetectionJobResponse * describeTopicsDetectionJob(const DescribeTopicsDetectionJobRequest &request);
    DetectDominantLanguageResponse * detectDominantLanguage(const DetectDominantLanguageRequest &request);
    DetectEntitiesResponse * detectEntities(const DetectEntitiesRequest &request);
    DetectKeyPhrasesResponse * detectKeyPhrases(const DetectKeyPhrasesRequest &request);
    DetectPiiEntitiesResponse * detectPiiEntities(const DetectPiiEntitiesRequest &request);
    DetectSentimentResponse * detectSentiment(const DetectSentimentRequest &request);
    DetectSyntaxResponse * detectSyntax(const DetectSyntaxRequest &request);
    ListDocumentClassificationJobsResponse * listDocumentClassificationJobs(const ListDocumentClassificationJobsRequest &request);
    ListDocumentClassifiersResponse * listDocumentClassifiers(const ListDocumentClassifiersRequest &request);
    ListDominantLanguageDetectionJobsResponse * listDominantLanguageDetectionJobs(const ListDominantLanguageDetectionJobsRequest &request);
    ListEndpointsResponse * listEndpoints(const ListEndpointsRequest &request);
    ListEntitiesDetectionJobsResponse * listEntitiesDetectionJobs(const ListEntitiesDetectionJobsRequest &request);
    ListEntityRecognizersResponse * listEntityRecognizers(const ListEntityRecognizersRequest &request);
    ListEventsDetectionJobsResponse * listEventsDetectionJobs(const ListEventsDetectionJobsRequest &request);
    ListKeyPhrasesDetectionJobsResponse * listKeyPhrasesDetectionJobs(const ListKeyPhrasesDetectionJobsRequest &request);
    ListPiiEntitiesDetectionJobsResponse * listPiiEntitiesDetectionJobs(const ListPiiEntitiesDetectionJobsRequest &request);
    ListSentimentDetectionJobsResponse * listSentimentDetectionJobs(const ListSentimentDetectionJobsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTopicsDetectionJobsResponse * listTopicsDetectionJobs(const ListTopicsDetectionJobsRequest &request);
    StartDocumentClassificationJobResponse * startDocumentClassificationJob(const StartDocumentClassificationJobRequest &request);
    StartDominantLanguageDetectionJobResponse * startDominantLanguageDetectionJob(const StartDominantLanguageDetectionJobRequest &request);
    StartEntitiesDetectionJobResponse * startEntitiesDetectionJob(const StartEntitiesDetectionJobRequest &request);
    StartEventsDetectionJobResponse * startEventsDetectionJob(const StartEventsDetectionJobRequest &request);
    StartKeyPhrasesDetectionJobResponse * startKeyPhrasesDetectionJob(const StartKeyPhrasesDetectionJobRequest &request);
    StartPiiEntitiesDetectionJobResponse * startPiiEntitiesDetectionJob(const StartPiiEntitiesDetectionJobRequest &request);
    StartSentimentDetectionJobResponse * startSentimentDetectionJob(const StartSentimentDetectionJobRequest &request);
    StartTopicsDetectionJobResponse * startTopicsDetectionJob(const StartTopicsDetectionJobRequest &request);
    StopDominantLanguageDetectionJobResponse * stopDominantLanguageDetectionJob(const StopDominantLanguageDetectionJobRequest &request);
    StopEntitiesDetectionJobResponse * stopEntitiesDetectionJob(const StopEntitiesDetectionJobRequest &request);
    StopEventsDetectionJobResponse * stopEventsDetectionJob(const StopEventsDetectionJobRequest &request);
    StopKeyPhrasesDetectionJobResponse * stopKeyPhrasesDetectionJob(const StopKeyPhrasesDetectionJobRequest &request);
    StopPiiEntitiesDetectionJobResponse * stopPiiEntitiesDetectionJob(const StopPiiEntitiesDetectionJobRequest &request);
    StopSentimentDetectionJobResponse * stopSentimentDetectionJob(const StopSentimentDetectionJobRequest &request);
    StopTrainingDocumentClassifierResponse * stopTrainingDocumentClassifier(const StopTrainingDocumentClassifierRequest &request);
    StopTrainingEntityRecognizerResponse * stopTrainingEntityRecognizer(const StopTrainingEntityRecognizerRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateEndpointResponse * updateEndpoint(const UpdateEndpointRequest &request);

protected:
    /// @cond internal
    ComprehendClientPrivate * const d_ptr; ///< Internal d-pointer.
    ComprehendClient(ComprehendClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ComprehendClient)
    Q_DISABLE_COPY(ComprehendClient)

};

} // namespace Comprehend
} // namespace QtAws

#endif
