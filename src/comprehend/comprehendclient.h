/*
    Copyright 2013-2018 Paul Colby

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
class DescribeTopicsDetectionJobRequest;
class DescribeTopicsDetectionJobResponse;
class DetectDominantLanguageRequest;
class DetectDominantLanguageResponse;
class DetectEntitiesRequest;
class DetectEntitiesResponse;
class DetectKeyPhrasesRequest;
class DetectKeyPhrasesResponse;
class DetectSentimentRequest;
class DetectSentimentResponse;
class ListTopicsDetectionJobsRequest;
class ListTopicsDetectionJobsResponse;
class StartTopicsDetectionJobRequest;
class StartTopicsDetectionJobResponse;

class QTAWS_EXPORT ComprehendClient : public QtAws::Core::AwsAbstractClient {
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
    DescribeTopicsDetectionJobResponse * describeTopicsDetectionJob(const DescribeTopicsDetectionJobRequest &request);
    DetectDominantLanguageResponse * detectDominantLanguage(const DetectDominantLanguageRequest &request);
    DetectEntitiesResponse * detectEntities(const DetectEntitiesRequest &request);
    DetectKeyPhrasesResponse * detectKeyPhrases(const DetectKeyPhrasesRequest &request);
    DetectSentimentResponse * detectSentiment(const DetectSentimentRequest &request);
    ListTopicsDetectionJobsResponse * listTopicsDetectionJobs(const ListTopicsDetectionJobsRequest &request);
    StartTopicsDetectionJobResponse * startTopicsDetectionJob(const StartTopicsDetectionJobRequest &request);

private:
    Q_DECLARE_PRIVATE(ComprehendClient)
    Q_DISABLE_COPY(ComprehendClient)

};

} // namespace Comprehend
} // namespace QtAws

#endif
