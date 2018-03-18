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

#include "comprehendclient.h"
#include "comprehendclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Comprehend {

/**
 * @class  ComprehendClient
 *
 * @brief  Client for Amazon Comprehend
 *
 * Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 * the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 * predominant language used, and
 */

/**
 * @brief  Constructs a new ComprehendClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ComprehendClient::ComprehendClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ComprehendClientPrivate(this), parent)
{
    Q_D(ComprehendClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ComprehendClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
ComprehendClient::ComprehendClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ComprehendClientPrivate(this), parent)
{
    Q_D(ComprehendClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Determines the dominant language of the input text for a batch of documents. For a list of languages that Amazon
 * Comprehend can detect, see <a href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
 * Comprehend Supported Languages</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDetectDominantLanguageResponse * ComprehendClient::batchDetectDominantLanguage(const BatchDetectDominantLanguageRequest &request)
{

}

/**
 * Inspects the text of a batch of documents and returns information about them. For more information about entities, see
 * <a>how-entities</a>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDetectEntitiesResponse * ComprehendClient::batchDetectEntities(const BatchDetectEntitiesRequest &request)
{

}

/**
 * Detects the key noun phrases found in a batch of
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDetectKeyPhrasesResponse * ComprehendClient::batchDetectKeyPhrases(const BatchDetectKeyPhrasesRequest &request)
{

}

/**
 * Inspects a batch of documents and returns an inference of the prevailing sentiment, <code>POSITIVE</code>,
 * <code>NEUTRAL</code>, <code>MIXED</code>, or <code>NEGATIVE</code>, in each
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDetectSentimentResponse * ComprehendClient::batchDetectSentiment(const BatchDetectSentimentRequest &request)
{

}

/**
 * Gets the properties associated with a topic detection job. Use this operation to get the status of a detection
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTopicsDetectionJobResponse * ComprehendClient::describeTopicsDetectionJob(const DescribeTopicsDetectionJobRequest &request)
{

}

/**
 * Determines the dominant language of the input text. For a list of languages that Amazon Comprehend can detect, see <a
 * href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon Comprehend Supported Languages</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectDominantLanguageResponse * ComprehendClient::detectDominantLanguage(const DetectDominantLanguageRequest &request)
{

}

/**
 * Inspects text for entities, and returns information about them. For more information, about entities, see
 * <a>how-entities</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectEntitiesResponse * ComprehendClient::detectEntities(const DetectEntitiesRequest &request)
{

}

/**
 * Detects the key noun phrases found in the text.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectKeyPhrasesResponse * ComprehendClient::detectKeyPhrases(const DetectKeyPhrasesRequest &request)
{

}

/**
 * Inspects text and returns an inference of the prevailing sentiment (<code>POSITIVE</code>, <code>NEUTRAL</code>,
 * <code>MIXED</code>, or <code>NEGATIVE</code>).
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectSentimentResponse * ComprehendClient::detectSentiment(const DetectSentimentRequest &request)
{

}

/**
 * Gets a list of the topic detection jobs that you have
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTopicsDetectionJobsResponse * ComprehendClient::listTopicsDetectionJobs(const ListTopicsDetectionJobsRequest &request)
{

}

/**
 * Starts an asynchronous topic detection job. Use the <code>DescribeTopicDetectionJob</code> operation to track the status
 * of a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartTopicsDetectionJobResponse * ComprehendClient::startTopicsDetectionJob(const StartTopicsDetectionJobRequest &request)
{

}

/**
 * @internal
 *
 * @class  ComprehendClientPrivate
 *
 * @brief  Private implementation for ComprehendClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ComprehendClientPrivate object.
 *
 * @param  q  Pointer to this object's public ComprehendClient instance.
 */
ComprehendClientPrivate::ComprehendClientPrivate(ComprehendClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Comprehend
} // namespace AWS
