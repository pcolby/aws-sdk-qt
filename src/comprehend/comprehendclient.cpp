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
#include "batchdetectsyntaxrequest.h"
#include "batchdetectsyntaxresponse.h"
#include "createdocumentclassifierrequest.h"
#include "createdocumentclassifierresponse.h"
#include "createentityrecognizerrequest.h"
#include "createentityrecognizerresponse.h"
#include "deletedocumentclassifierrequest.h"
#include "deletedocumentclassifierresponse.h"
#include "deleteentityrecognizerrequest.h"
#include "deleteentityrecognizerresponse.h"
#include "describedocumentclassificationjobrequest.h"
#include "describedocumentclassificationjobresponse.h"
#include "describedocumentclassifierrequest.h"
#include "describedocumentclassifierresponse.h"
#include "describedominantlanguagedetectionjobrequest.h"
#include "describedominantlanguagedetectionjobresponse.h"
#include "describeentitiesdetectionjobrequest.h"
#include "describeentitiesdetectionjobresponse.h"
#include "describeentityrecognizerrequest.h"
#include "describeentityrecognizerresponse.h"
#include "describekeyphrasesdetectionjobrequest.h"
#include "describekeyphrasesdetectionjobresponse.h"
#include "describesentimentdetectionjobrequest.h"
#include "describesentimentdetectionjobresponse.h"
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
#include "detectsyntaxrequest.h"
#include "detectsyntaxresponse.h"
#include "listdocumentclassificationjobsrequest.h"
#include "listdocumentclassificationjobsresponse.h"
#include "listdocumentclassifiersrequest.h"
#include "listdocumentclassifiersresponse.h"
#include "listdominantlanguagedetectionjobsrequest.h"
#include "listdominantlanguagedetectionjobsresponse.h"
#include "listentitiesdetectionjobsrequest.h"
#include "listentitiesdetectionjobsresponse.h"
#include "listentityrecognizersrequest.h"
#include "listentityrecognizersresponse.h"
#include "listkeyphrasesdetectionjobsrequest.h"
#include "listkeyphrasesdetectionjobsresponse.h"
#include "listsentimentdetectionjobsrequest.h"
#include "listsentimentdetectionjobsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtopicsdetectionjobsrequest.h"
#include "listtopicsdetectionjobsresponse.h"
#include "startdocumentclassificationjobrequest.h"
#include "startdocumentclassificationjobresponse.h"
#include "startdominantlanguagedetectionjobrequest.h"
#include "startdominantlanguagedetectionjobresponse.h"
#include "startentitiesdetectionjobrequest.h"
#include "startentitiesdetectionjobresponse.h"
#include "startkeyphrasesdetectionjobrequest.h"
#include "startkeyphrasesdetectionjobresponse.h"
#include "startsentimentdetectionjobrequest.h"
#include "startsentimentdetectionjobresponse.h"
#include "starttopicsdetectionjobrequest.h"
#include "starttopicsdetectionjobresponse.h"
#include "stopdominantlanguagedetectionjobrequest.h"
#include "stopdominantlanguagedetectionjobresponse.h"
#include "stopentitiesdetectionjobrequest.h"
#include "stopentitiesdetectionjobresponse.h"
#include "stopkeyphrasesdetectionjobrequest.h"
#include "stopkeyphrasesdetectionjobresponse.h"
#include "stopsentimentdetectionjobrequest.h"
#include "stopsentimentdetectionjobresponse.h"
#include "stoptrainingdocumentclassifierrequest.h"
#include "stoptrainingdocumentclassifierresponse.h"
#include "stoptrainingentityrecognizerrequest.h"
#include "stoptrainingentityrecognizerresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Comprehend
 * \brief Contains classess for accessing Amazon Comprehend.
 *
 * \inmodule QtAwsComprehend
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ComprehendClient
 * \brief The ComprehendClient class provides access to the Amazon Comprehend service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsComprehend
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
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * BatchDetectDominantLanguageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Determines the dominant language of the input text for a batch of documents. For a list of languages that Amazon
 * Comprehend can detect, see <a href="https://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
 * Comprehend Supported Languages</a>.
 */
BatchDetectDominantLanguageResponse * ComprehendClient::batchDetectDominantLanguage(const BatchDetectDominantLanguageRequest &request)
{
    return qobject_cast<BatchDetectDominantLanguageResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * BatchDetectEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects the text of a batch of documents for named entities and returns information about them. For more information
 * about named entities, see <a>how-entities</a>
 */
BatchDetectEntitiesResponse * ComprehendClient::batchDetectEntities(const BatchDetectEntitiesRequest &request)
{
    return qobject_cast<BatchDetectEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * BatchDetectKeyPhrasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects the key noun phrases found in a batch of
 */
BatchDetectKeyPhrasesResponse * ComprehendClient::batchDetectKeyPhrases(const BatchDetectKeyPhrasesRequest &request)
{
    return qobject_cast<BatchDetectKeyPhrasesResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * BatchDetectSentimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects a batch of documents and returns an inference of the prevailing sentiment, <code>POSITIVE</code>,
 * <code>NEUTRAL</code>, <code>MIXED</code>, or <code>NEGATIVE</code>, in each
 */
BatchDetectSentimentResponse * ComprehendClient::batchDetectSentiment(const BatchDetectSentimentRequest &request)
{
    return qobject_cast<BatchDetectSentimentResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * BatchDetectSyntaxResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects the text of a batch of documents for the syntax and part of speech of the words in the document and returns
 * information about them. For more information, see
 */
BatchDetectSyntaxResponse * ComprehendClient::batchDetectSyntax(const BatchDetectSyntaxRequest &request)
{
    return qobject_cast<BatchDetectSyntaxResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * CreateDocumentClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new document classifier that you can use to categorize documents. To create a classifier you provide a set of
 * training documents that labeled with the categories that you want to use. After the classifier is trained you can use it
 * to categorize a set of labeled documents into the categories. For more information, see
 */
CreateDocumentClassifierResponse * ComprehendClient::createDocumentClassifier(const CreateDocumentClassifierRequest &request)
{
    return qobject_cast<CreateDocumentClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * CreateEntityRecognizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an entity recognizer using submitted files. After your <code>CreateEntityRecognizer</code> request is submitted,
 * you can check job status using the API.
 */
CreateEntityRecognizerResponse * ComprehendClient::createEntityRecognizer(const CreateEntityRecognizerRequest &request)
{
    return qobject_cast<CreateEntityRecognizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DeleteDocumentClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a previously created document
 *
 * classifie>
 *
 * Only those classifiers that are in terminated states (IN_ERROR, TRAINED) will be deleted. If an active inference job is
 * using the model, a <code>ResourceInUseException</code> will be
 *
 * returned>
 *
 * This is an asynchronous action that puts the classifier into a DELETING state, and it is then removed by a background
 * job. Once removed, the classifier disappears from your account and is no longer available for use.
 */
DeleteDocumentClassifierResponse * ComprehendClient::deleteDocumentClassifier(const DeleteDocumentClassifierRequest &request)
{
    return qobject_cast<DeleteDocumentClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DeleteEntityRecognizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an entity
 *
 * recognizer>
 *
 * Only those recognizers that are in terminated states (IN_ERROR, TRAINED) will be deleted. If an active inference job is
 * using the model, a <code>ResourceInUseException</code> will be
 *
 * returned>
 *
 * This is an asynchronous action that puts the recognizer into a DELETING state, and it is then removed by a background
 * job. Once removed, the recognizer disappears from your account and is no longer available for use.
 */
DeleteEntityRecognizerResponse * ComprehendClient::deleteEntityRecognizer(const DeleteEntityRecognizerRequest &request)
{
    return qobject_cast<DeleteEntityRecognizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DescribeDocumentClassificationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with a document classification job. Use this operation to get the status of a
 * classification
 */
DescribeDocumentClassificationJobResponse * ComprehendClient::describeDocumentClassificationJob(const DescribeDocumentClassificationJobRequest &request)
{
    return qobject_cast<DescribeDocumentClassificationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DescribeDocumentClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with a document
 */
DescribeDocumentClassifierResponse * ComprehendClient::describeDocumentClassifier(const DescribeDocumentClassifierRequest &request)
{
    return qobject_cast<DescribeDocumentClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DescribeDominantLanguageDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with a dominant language detection job. Use this operation to get the status of a
 * detection
 */
DescribeDominantLanguageDetectionJobResponse * ComprehendClient::describeDominantLanguageDetectionJob(const DescribeDominantLanguageDetectionJobRequest &request)
{
    return qobject_cast<DescribeDominantLanguageDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DescribeEntitiesDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with an entities detection job. Use this operation to get the status of a detection
 */
DescribeEntitiesDetectionJobResponse * ComprehendClient::describeEntitiesDetectionJob(const DescribeEntitiesDetectionJobRequest &request)
{
    return qobject_cast<DescribeEntitiesDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DescribeEntityRecognizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides details about an entity recognizer including status, S3 buckets containing training data, recognizer metadata,
 * metrics, and so
 */
DescribeEntityRecognizerResponse * ComprehendClient::describeEntityRecognizer(const DescribeEntityRecognizerRequest &request)
{
    return qobject_cast<DescribeEntityRecognizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DescribeKeyPhrasesDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with a key phrases detection job. Use this operation to get the status of a detection
 */
DescribeKeyPhrasesDetectionJobResponse * ComprehendClient::describeKeyPhrasesDetectionJob(const DescribeKeyPhrasesDetectionJobRequest &request)
{
    return qobject_cast<DescribeKeyPhrasesDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DescribeSentimentDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with a sentiment detection job. Use this operation to get the status of a detection
 */
DescribeSentimentDetectionJobResponse * ComprehendClient::describeSentimentDetectionJob(const DescribeSentimentDetectionJobRequest &request)
{
    return qobject_cast<DescribeSentimentDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DescribeTopicsDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with a topic detection job. Use this operation to get the status of a detection
 */
DescribeTopicsDetectionJobResponse * ComprehendClient::describeTopicsDetectionJob(const DescribeTopicsDetectionJobRequest &request)
{
    return qobject_cast<DescribeTopicsDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DetectDominantLanguageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Determines the dominant language of the input text. For a list of languages that Amazon Comprehend can detect, see <a
 * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon Comprehend Supported Languages</a>.
 */
DetectDominantLanguageResponse * ComprehendClient::detectDominantLanguage(const DetectDominantLanguageRequest &request)
{
    return qobject_cast<DetectDominantLanguageResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DetectEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects text for named entities, and returns information about them. For more information, about named entities, see
 * <a>how-entities</a>.
 */
DetectEntitiesResponse * ComprehendClient::detectEntities(const DetectEntitiesRequest &request)
{
    return qobject_cast<DetectEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DetectKeyPhrasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects the key noun phrases found in the text.
 */
DetectKeyPhrasesResponse * ComprehendClient::detectKeyPhrases(const DetectKeyPhrasesRequest &request)
{
    return qobject_cast<DetectKeyPhrasesResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DetectSentimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects text and returns an inference of the prevailing sentiment (<code>POSITIVE</code>, <code>NEUTRAL</code>,
 * <code>MIXED</code>, or <code>NEGATIVE</code>).
 */
DetectSentimentResponse * ComprehendClient::detectSentiment(const DetectSentimentRequest &request)
{
    return qobject_cast<DetectSentimentResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DetectSyntaxResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects text for syntax and the part of speech of words in the document. For more information,
 */
DetectSyntaxResponse * ComprehendClient::detectSyntax(const DetectSyntaxRequest &request)
{
    return qobject_cast<DetectSyntaxResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * ListDocumentClassificationJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the documentation classification jobs that you have
 */
ListDocumentClassificationJobsResponse * ComprehendClient::listDocumentClassificationJobs(const ListDocumentClassificationJobsRequest &request)
{
    return qobject_cast<ListDocumentClassificationJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * ListDocumentClassifiersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the document classifiers that you have
 */
ListDocumentClassifiersResponse * ComprehendClient::listDocumentClassifiers(const ListDocumentClassifiersRequest &request)
{
    return qobject_cast<ListDocumentClassifiersResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * ListDominantLanguageDetectionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the dominant language detection jobs that you have
 */
ListDominantLanguageDetectionJobsResponse * ComprehendClient::listDominantLanguageDetectionJobs(const ListDominantLanguageDetectionJobsRequest &request)
{
    return qobject_cast<ListDominantLanguageDetectionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * ListEntitiesDetectionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the entity detection jobs that you have
 */
ListEntitiesDetectionJobsResponse * ComprehendClient::listEntitiesDetectionJobs(const ListEntitiesDetectionJobsRequest &request)
{
    return qobject_cast<ListEntitiesDetectionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * ListEntityRecognizersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the properties of all entity recognizers that you created, including recognizers currently in training.
 * Allows you to filter the list of recognizers based on criteria such as status and submission time. This call returns up
 * to 500 entity recognizers in the list, with a default number of 100 recognizers in the
 *
 * list>
 *
 * The results of this list are not in any particular order. Please get the list and sort locally if
 */
ListEntityRecognizersResponse * ComprehendClient::listEntityRecognizers(const ListEntityRecognizersRequest &request)
{
    return qobject_cast<ListEntityRecognizersResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * ListKeyPhrasesDetectionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a list of key phrase detection jobs that you have
 */
ListKeyPhrasesDetectionJobsResponse * ComprehendClient::listKeyPhrasesDetectionJobs(const ListKeyPhrasesDetectionJobsRequest &request)
{
    return qobject_cast<ListKeyPhrasesDetectionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * ListSentimentDetectionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of sentiment detection jobs that you have
 */
ListSentimentDetectionJobsResponse * ComprehendClient::listSentimentDetectionJobs(const ListSentimentDetectionJobsRequest &request)
{
    return qobject_cast<ListSentimentDetectionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags associated with a given Amazon Comprehend resource.
 */
ListTagsForResourceResponse * ComprehendClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * ListTopicsDetectionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the topic detection jobs that you have
 */
ListTopicsDetectionJobsResponse * ComprehendClient::listTopicsDetectionJobs(const ListTopicsDetectionJobsRequest &request)
{
    return qobject_cast<ListTopicsDetectionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StartDocumentClassificationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous document classification job. Use the operation to track the progress of the
 */
StartDocumentClassificationJobResponse * ComprehendClient::startDocumentClassificationJob(const StartDocumentClassificationJobRequest &request)
{
    return qobject_cast<StartDocumentClassificationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StartDominantLanguageDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous dominant language detection job for a collection of documents. Use the operation to track the
 * status of a
 */
StartDominantLanguageDetectionJobResponse * ComprehendClient::startDominantLanguageDetectionJob(const StartDominantLanguageDetectionJobRequest &request)
{
    return qobject_cast<StartDominantLanguageDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StartEntitiesDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous entity detection job for a collection of documents. Use the operation to track the status of a
 *
 * job>
 *
 * This API can be used for either standard entity detection or custom entity recognition. In order to be used for custom
 * entity recognition, the optional <code>EntityRecognizerArn</code> must be used in order to provide access to the
 * recognizer being used to detect the custom
 */
StartEntitiesDetectionJobResponse * ComprehendClient::startEntitiesDetectionJob(const StartEntitiesDetectionJobRequest &request)
{
    return qobject_cast<StartEntitiesDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StartKeyPhrasesDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous key phrase detection job for a collection of documents. Use the operation to track the status of
 * a
 */
StartKeyPhrasesDetectionJobResponse * ComprehendClient::startKeyPhrasesDetectionJob(const StartKeyPhrasesDetectionJobRequest &request)
{
    return qobject_cast<StartKeyPhrasesDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StartSentimentDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous sentiment detection job for a collection of documents. use the operation to track the status of a
 */
StartSentimentDetectionJobResponse * ComprehendClient::startSentimentDetectionJob(const StartSentimentDetectionJobRequest &request)
{
    return qobject_cast<StartSentimentDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StartTopicsDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous topic detection job. Use the <code>DescribeTopicDetectionJob</code> operation to track the status
 * of a
 */
StartTopicsDetectionJobResponse * ComprehendClient::startTopicsDetectionJob(const StartTopicsDetectionJobRequest &request)
{
    return qobject_cast<StartTopicsDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StopDominantLanguageDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a dominant language detection job in
 *
 * progress>
 *
 * If the job state is <code>IN_PROGRESS</code> the job is marked for termination and put into the
 * <code>STOP_REQUESTED</code> state. If the job completes before it can be stopped, it is put into the
 * <code>COMPLETED</code> state; otherwise the job is stopped and put into the <code>STOPPED</code>
 *
 * state>
 *
 * If the job is in the <code>COMPLETED</code> or <code>FAILED</code> state when you call the
 * <code>StopDominantLanguageDetectionJob</code> operation, the operation returns a 400 Internal Request Exception.
 *
 * </p
 *
 * When a job is stopped, any documents already processed are written to the output
 */
StopDominantLanguageDetectionJobResponse * ComprehendClient::stopDominantLanguageDetectionJob(const StopDominantLanguageDetectionJobRequest &request)
{
    return qobject_cast<StopDominantLanguageDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StopEntitiesDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an entities detection job in
 *
 * progress>
 *
 * If the job state is <code>IN_PROGRESS</code> the job is marked for termination and put into the
 * <code>STOP_REQUESTED</code> state. If the job completes before it can be stopped, it is put into the
 * <code>COMPLETED</code> state; otherwise the job is stopped and put into the <code>STOPPED</code>
 *
 * state>
 *
 * If the job is in the <code>COMPLETED</code> or <code>FAILED</code> state when you call the
 * <code>StopDominantLanguageDetectionJob</code> operation, the operation returns a 400 Internal Request Exception.
 *
 * </p
 *
 * When a job is stopped, any documents already processed are written to the output
 */
StopEntitiesDetectionJobResponse * ComprehendClient::stopEntitiesDetectionJob(const StopEntitiesDetectionJobRequest &request)
{
    return qobject_cast<StopEntitiesDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StopKeyPhrasesDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a key phrases detection job in
 *
 * progress>
 *
 * If the job state is <code>IN_PROGRESS</code> the job is marked for termination and put into the
 * <code>STOP_REQUESTED</code> state. If the job completes before it can be stopped, it is put into the
 * <code>COMPLETED</code> state; otherwise the job is stopped and put into the <code>STOPPED</code>
 *
 * state>
 *
 * If the job is in the <code>COMPLETED</code> or <code>FAILED</code> state when you call the
 * <code>StopDominantLanguageDetectionJob</code> operation, the operation returns a 400 Internal Request Exception.
 *
 * </p
 *
 * When a job is stopped, any documents already processed are written to the output
 */
StopKeyPhrasesDetectionJobResponse * ComprehendClient::stopKeyPhrasesDetectionJob(const StopKeyPhrasesDetectionJobRequest &request)
{
    return qobject_cast<StopKeyPhrasesDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StopSentimentDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a sentiment detection job in
 *
 * progress>
 *
 * If the job state is <code>IN_PROGRESS</code> the job is marked for termination and put into the
 * <code>STOP_REQUESTED</code> state. If the job completes before it can be stopped, it is put into the
 * <code>COMPLETED</code> state; otherwise the job is be stopped and put into the <code>STOPPED</code>
 *
 * state>
 *
 * If the job is in the <code>COMPLETED</code> or <code>FAILED</code> state when you call the
 * <code>StopDominantLanguageDetectionJob</code> operation, the operation returns a 400 Internal Request Exception.
 *
 * </p
 *
 * When a job is stopped, any documents already processed are written to the output
 */
StopSentimentDetectionJobResponse * ComprehendClient::stopSentimentDetectionJob(const StopSentimentDetectionJobRequest &request)
{
    return qobject_cast<StopSentimentDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StopTrainingDocumentClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a document classifier training job while in
 *
 * progress>
 *
 * If the training job state is <code>TRAINING</code>, the job is marked for termination and put into the
 * <code>STOP_REQUESTED</code> state. If the training job completes before it can be stopped, it is put into the
 * <code>TRAINED</code>; otherwise the training job is stopped and put into the <code>STOPPED</code> state and the service
 * sends back an HTTP 200 response with an empty HTTP body.
 */
StopTrainingDocumentClassifierResponse * ComprehendClient::stopTrainingDocumentClassifier(const StopTrainingDocumentClassifierRequest &request)
{
    return qobject_cast<StopTrainingDocumentClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StopTrainingEntityRecognizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an entity recognizer training job while in
 *
 * progress>
 *
 * If the training job state is <code>TRAINING</code>, the job is marked for termination and put into the
 * <code>STOP_REQUESTED</code> state. If the training job completes before it can be stopped, it is put into the
 * <code>TRAINED</code>; otherwise the training job is stopped and putted into the <code>STOPPED</code> state and the
 * service sends back an HTTP 200 response with an empty HTTP
 */
StopTrainingEntityRecognizerResponse * ComprehendClient::stopTrainingEntityRecognizer(const StopTrainingEntityRecognizerRequest &request)
{
    return qobject_cast<StopTrainingEntityRecognizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a specific tag with an Amazon Comprehend resource. A tag is a key-value pair that adds as a metadata to a
 * resource used by Amazon Comprehend. For example, a tag with "Sales" as the key might be added to a resource to indicate
 * its use by the sales department.
 */
TagResourceResponse * ComprehendClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a specific tag associated with an Amazon Comprehend resource.
 */
UntagResourceResponse * ComprehendClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::Comprehend::ComprehendClientPrivate
 * \brief The ComprehendClientPrivate class provides private implementation for ComprehendClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ComprehendClientPrivate object with public implementation \a q.
 */
ComprehendClientPrivate::ComprehendClientPrivate(ComprehendClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Comprehend
} // namespace QtAws
