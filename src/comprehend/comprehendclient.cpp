/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "comprehendclient.h"
#include "comprehendclient_p.h"

#include "core/awssignaturev4.h"
#include "batchdetectdominantlanguagerequest.h"
#include "batchdetectdominantlanguageresponse.h"
#include "batchdetectentitiesrequest.h"
#include "batchdetectentitiesresponse.h"
#include "batchdetectkeyphrasesrequest.h"
#include "batchdetectkeyphrasesresponse.h"
#include "batchdetectsentimentrequest.h"
#include "batchdetectsentimentresponse.h"
#include "describetopicsdetectionjobrequest.h"
#include "describetopicsdetectionjobresponse.h"
#include "detectdominantlanguagerequest.h"
#include "detectdominantlanguageresponse.h"
#include "detectentitiesrequest.h"
#include "detectentitiesresponse.h"
#include "detectkeyphrasesrequest.h"
#include "detectkeyphrasesresponse.h"
#include "detectsentimentrequest.h"
#include "detectsentimentresponse.h"
#include "listtopicsdetectionjobsrequest.h"
#include "listtopicsdetectionjobsresponse.h"
#include "starttopicsdetectionjobrequest.h"
#include "starttopicsdetectionjobresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Comprehend
 * \brief The QtAws::Comprehend contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ComprehendClient
 *
 * \brief The ComprehendClient class provides access to the Amazon Comprehend service.
 *
 * \ingroup Comprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 */

/*!
 * \brief Constructs a ComprehendClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ComprehendClient::ComprehendClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ComprehendClientPrivate(this), parent)
{
    Q_D(ComprehendClient);
    d->apiVersion = QStringLiteral("2017-11-27");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("comprehend");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Comprehend");
    d->serviceName = QStringLiteral("comprehend");
}

/*!
 * \overload ComprehendClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
ComprehendClient::ComprehendClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ComprehendClientPrivate(this), parent)
{
    Q_D(ComprehendClient);
    d->apiVersion = QStringLiteral("2017-11-27");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("comprehend");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Comprehend");
    d->serviceName = QStringLiteral("comprehend");
}

/*!
 * Determines the dominant language of the input text for a batch of documents. For a list of languages that Amazon
 * Comprehend can detect, see <a href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
 * Comprehend Supported Languages</a>.
 *
 * @param  request Request to send to Amazon Comprehend.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDetectDominantLanguageResponse * ComprehendClient::batchDetectDominantLanguage(const BatchDetectDominantLanguageRequest &request)
{
    return qobject_cast<BatchDetectDominantLanguageResponse *>(send(request));
}

/*!
 * Inspects the text of a batch of documents and returns information about them. For more information about entities, see
 * <a>how-entities</a>
 *
 * @param  request Request to send to Amazon Comprehend.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDetectEntitiesResponse * ComprehendClient::batchDetectEntities(const BatchDetectEntitiesRequest &request)
{
    return qobject_cast<BatchDetectEntitiesResponse *>(send(request));
}

/*!
 * Detects the key noun phrases found in a batch of
 *
 * @param  request Request to send to Amazon Comprehend.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDetectKeyPhrasesResponse * ComprehendClient::batchDetectKeyPhrases(const BatchDetectKeyPhrasesRequest &request)
{
    return qobject_cast<BatchDetectKeyPhrasesResponse *>(send(request));
}

/*!
 * Inspects a batch of documents and returns an inference of the prevailing sentiment, <code>POSITIVE</code>,
 * <code>NEUTRAL</code>, <code>MIXED</code>, or <code>NEGATIVE</code>, in each
 *
 * @param  request Request to send to Amazon Comprehend.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDetectSentimentResponse * ComprehendClient::batchDetectSentiment(const BatchDetectSentimentRequest &request)
{
    return qobject_cast<BatchDetectSentimentResponse *>(send(request));
}

/*!
 * Gets the properties associated with a topic detection job. Use this operation to get the status of a detection
 *
 * @param  request Request to send to Amazon Comprehend.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTopicsDetectionJobResponse * ComprehendClient::describeTopicsDetectionJob(const DescribeTopicsDetectionJobRequest &request)
{
    return qobject_cast<DescribeTopicsDetectionJobResponse *>(send(request));
}

/*!
 * Determines the dominant language of the input text. For a list of languages that Amazon Comprehend can detect, see <a
 * href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon Comprehend Supported Languages</a>.
 *
 * @param  request Request to send to Amazon Comprehend.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectDominantLanguageResponse * ComprehendClient::detectDominantLanguage(const DetectDominantLanguageRequest &request)
{
    return qobject_cast<DetectDominantLanguageResponse *>(send(request));
}

/*!
 * Inspects text for entities, and returns information about them. For more information, about entities, see
 * <a>how-entities</a>.
 *
 * @param  request Request to send to Amazon Comprehend.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectEntitiesResponse * ComprehendClient::detectEntities(const DetectEntitiesRequest &request)
{
    return qobject_cast<DetectEntitiesResponse *>(send(request));
}

/*!
 * Detects the key noun phrases found in the text.
 *
 * @param  request Request to send to Amazon Comprehend.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectKeyPhrasesResponse * ComprehendClient::detectKeyPhrases(const DetectKeyPhrasesRequest &request)
{
    return qobject_cast<DetectKeyPhrasesResponse *>(send(request));
}

/*!
 * Inspects text and returns an inference of the prevailing sentiment (<code>POSITIVE</code>, <code>NEUTRAL</code>,
 * <code>MIXED</code>, or <code>NEGATIVE</code>).
 *
 * @param  request Request to send to Amazon Comprehend.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectSentimentResponse * ComprehendClient::detectSentiment(const DetectSentimentRequest &request)
{
    return qobject_cast<DetectSentimentResponse *>(send(request));
}

/*!
 * Gets a list of the topic detection jobs that you have
 *
 * @param  request Request to send to Amazon Comprehend.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTopicsDetectionJobsResponse * ComprehendClient::listTopicsDetectionJobs(const ListTopicsDetectionJobsRequest &request)
{
    return qobject_cast<ListTopicsDetectionJobsResponse *>(send(request));
}

/*!
 * Starts an asynchronous topic detection job. Use the <code>DescribeTopicDetectionJob</code> operation to track the status
 * of a
 *
 * @param  request Request to send to Amazon Comprehend.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartTopicsDetectionJobResponse * ComprehendClient::startTopicsDetectionJob(const StartTopicsDetectionJobRequest &request)
{
    return qobject_cast<StartTopicsDetectionJobResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  ComprehendClientPrivate
 *
 * @brief  Private implementation for ComprehendClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ComprehendClientPrivate object.
 *
 * @param  q  Pointer to this object's public ComprehendClient instance.
 */
ComprehendClientPrivate::ComprehendClientPrivate(ComprehendClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Comprehend
} // namespace QtAws
