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

#include "transcribeclient.h"
#include "transcribeclient_p.h"

#include "core/awssignaturev4.h"
#include "createcallanalyticscategoryrequest.h"
#include "createcallanalyticscategoryresponse.h"
#include "createlanguagemodelrequest.h"
#include "createlanguagemodelresponse.h"
#include "createmedicalvocabularyrequest.h"
#include "createmedicalvocabularyresponse.h"
#include "createvocabularyrequest.h"
#include "createvocabularyresponse.h"
#include "createvocabularyfilterrequest.h"
#include "createvocabularyfilterresponse.h"
#include "deletecallanalyticscategoryrequest.h"
#include "deletecallanalyticscategoryresponse.h"
#include "deletecallanalyticsjobrequest.h"
#include "deletecallanalyticsjobresponse.h"
#include "deletelanguagemodelrequest.h"
#include "deletelanguagemodelresponse.h"
#include "deletemedicaltranscriptionjobrequest.h"
#include "deletemedicaltranscriptionjobresponse.h"
#include "deletemedicalvocabularyrequest.h"
#include "deletemedicalvocabularyresponse.h"
#include "deletetranscriptionjobrequest.h"
#include "deletetranscriptionjobresponse.h"
#include "deletevocabularyrequest.h"
#include "deletevocabularyresponse.h"
#include "deletevocabularyfilterrequest.h"
#include "deletevocabularyfilterresponse.h"
#include "describelanguagemodelrequest.h"
#include "describelanguagemodelresponse.h"
#include "getcallanalyticscategoryrequest.h"
#include "getcallanalyticscategoryresponse.h"
#include "getcallanalyticsjobrequest.h"
#include "getcallanalyticsjobresponse.h"
#include "getmedicaltranscriptionjobrequest.h"
#include "getmedicaltranscriptionjobresponse.h"
#include "getmedicalvocabularyrequest.h"
#include "getmedicalvocabularyresponse.h"
#include "gettranscriptionjobrequest.h"
#include "gettranscriptionjobresponse.h"
#include "getvocabularyrequest.h"
#include "getvocabularyresponse.h"
#include "getvocabularyfilterrequest.h"
#include "getvocabularyfilterresponse.h"
#include "listcallanalyticscategoriesrequest.h"
#include "listcallanalyticscategoriesresponse.h"
#include "listcallanalyticsjobsrequest.h"
#include "listcallanalyticsjobsresponse.h"
#include "listlanguagemodelsrequest.h"
#include "listlanguagemodelsresponse.h"
#include "listmedicaltranscriptionjobsrequest.h"
#include "listmedicaltranscriptionjobsresponse.h"
#include "listmedicalvocabulariesrequest.h"
#include "listmedicalvocabulariesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtranscriptionjobsrequest.h"
#include "listtranscriptionjobsresponse.h"
#include "listvocabulariesrequest.h"
#include "listvocabulariesresponse.h"
#include "listvocabularyfiltersrequest.h"
#include "listvocabularyfiltersresponse.h"
#include "startcallanalyticsjobrequest.h"
#include "startcallanalyticsjobresponse.h"
#include "startmedicaltranscriptionjobrequest.h"
#include "startmedicaltranscriptionjobresponse.h"
#include "starttranscriptionjobrequest.h"
#include "starttranscriptionjobresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatecallanalyticscategoryrequest.h"
#include "updatecallanalyticscategoryresponse.h"
#include "updatemedicalvocabularyrequest.h"
#include "updatemedicalvocabularyresponse.h"
#include "updatevocabularyrequest.h"
#include "updatevocabularyresponse.h"
#include "updatevocabularyfilterrequest.h"
#include "updatevocabularyfilterresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Transcribe
 * \brief Contains classess for accessing Amazon Transcribe Service.
 *
 * \inmodule QtAwsTranscribe
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::TranscribeClient
 * \brief The TranscribeClient class provides access to the Amazon Transcribe Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranscribe
 *
 *  Amazon Transcribe offers three main types of batch transcription: <b>Standard</b>, <b>Medical</b>, and <b>Call
 * 
 *  Analytics</b>> <ul> <li>
 * 
 *  <b>Standard transcriptions</b> are the most common option. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Medical transcriptions</b> are tailored to medical professionals and incorporate medical terms. A common use case for
 *  this service is transcribing doctor-patient dialogue into after-visit notes. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Call Analytics transcriptions</b> are designed for use with call center audio on two different channels; if you're
 *  looking for insight into customer service calls, use this option. Refer to for
 */

/*!
 * \brief Constructs a TranscribeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
TranscribeClient::TranscribeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranscribeClientPrivate(this), parent)
{
    Q_D(TranscribeClient);
    d->apiVersion = QStringLiteral("2017-10-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("transcribe");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Transcribe Service");
    d->serviceName = QStringLiteral("transcribe");
}

/*!
 * \overload TranscribeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
TranscribeClient::TranscribeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranscribeClientPrivate(this), parent)
{
    Q_D(TranscribeClient);
    d->apiVersion = QStringLiteral("2017-10-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("transcribe");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Transcribe Service");
    d->serviceName = QStringLiteral("transcribe");
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * CreateCallAnalyticsCategoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Call Analytics
 *
 * category>
 *
 * All categories are automatically applied to your Call Analytics jobs. Note that in order to apply your categories to
 * your jobs, you must create them before submitting your job request, as categories cannot be applied
 *
 * retroactively>
 *
 * Call Analytics categories are composed of rules. For each category, you must create between 1 and 20 rules. Rules can
 * include these parameters: , , , and
 *
 * >
 *
 * To update an existing category, see
 *
 * >
 *
 * To learn more
 *
 * about> <ul> <li>
 *
 * Call Analytics categories, see <a
 * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics-create-categories.html">Creating categories</a>
 *
 * </p </li> <li>
 *
 * Using rules, see <a
 * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics-create-categories.html#call-analytics-create-categories-rules">Rule
 * criteria</a> and refer to the data
 *
 * typ> </li> <li>
 *
 * Call Analytics, see <a href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics.html">Analyzing call center
 * audio with Call Analytics</a>
 */
CreateCallAnalyticsCategoryResponse * TranscribeClient::createCallAnalyticsCategory(const CreateCallAnalyticsCategoryRequest &request)
{
    return qobject_cast<CreateCallAnalyticsCategoryResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * CreateLanguageModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new custom language
 *
 * model>
 *
 * When creating a new language model, you must
 *
 * specify> <ul> <li>
 *
 * If you want a Wideband (audio sample rates over 16,000 Hz) or Narrowband (audio sample rates under 16,000 Hz) base
 *
 * mode> </li> <li>
 *
 * The location of your training and tuning files (this must be an Amazon S3
 *
 * URI> </li> <li>
 *
 * The language of your
 *
 * mode> </li> <li>
 *
 * A unique name for your
 *
 * mode> </li> </ul>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
 * language
 */
CreateLanguageModelResponse * TranscribeClient::createLanguageModel(const CreateLanguageModelRequest &request)
{
    return qobject_cast<CreateLanguageModelResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * CreateMedicalVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new custom medical
 *
 * vocabulary>
 *
 * Prior to creating a new medical vocabulary, you must first upload a text file that contains your new entries, phrases,
 * and terms into an Amazon S3 bucket. Note that this differs from , where you can include a list of terms within your
 * request using the <code>Phrases</code> flag; <code>CreateMedicalVocabulary</code> does not support the
 * <code>Phrases</code>
 *
 * flag>
 *
 * Each language has a character set that contains all allowed characters for that specific language. If you use
 * unsupported characters, your vocabulary request fails. Refer to <a
 * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character Sets for Custom Vocabularies</a> to get
 * the character set for your
 *
 * language>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary-create.html">Creating a custom
 */
CreateMedicalVocabularyResponse * TranscribeClient::createMedicalVocabulary(const CreateMedicalVocabularyRequest &request)
{
    return qobject_cast<CreateMedicalVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * CreateVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new custom
 *
 * vocabulary>
 *
 * When creating a new vocabulary, you can either upload a text file that contains your new entries, phrases, and terms
 * into an Amazon S3 bucket and include the URI in your request, or you can include a list of terms directly in your
 * request using the <code>Phrases</code>
 *
 * flag>
 *
 * Each language has a character set that contains all allowed characters for that specific language. If you use
 * unsupported characters, your vocabulary request fails. Refer to <a
 * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character Sets for Custom Vocabularies</a> to get
 * the character set for your
 *
 * language>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary-create.html">Creating a custom
 */
CreateVocabularyResponse * TranscribeClient::createVocabulary(const CreateVocabularyRequest &request)
{
    return qobject_cast<CreateVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * CreateVocabularyFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new custom vocabulary
 *
 * filter>
 *
 * You can use vocabulary filters to mask, delete, or flag specific words from your transcript. Vocabulary filters are
 * commonly used to mask profanity in
 *
 * transcripts>
 *
 * Each language has a character set that contains all allowed characters for that specific language. If you use
 * unsupported characters, your vocabulary filter request fails. Refer to <a
 * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character Sets for Custom Vocabularies</a> to get
 * the character set for your
 *
 * language>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
 * vocabulary filtering with unwanted
 */
CreateVocabularyFilterResponse * TranscribeClient::createVocabularyFilter(const CreateVocabularyFilterRequest &request)
{
    return qobject_cast<CreateVocabularyFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * DeleteCallAnalyticsCategoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Call Analytics category. To use this operation, specify the name of the category you want to delete using
 * <code>CategoryName</code>. Category names are case
 */
DeleteCallAnalyticsCategoryResponse * TranscribeClient::deleteCallAnalyticsCategory(const DeleteCallAnalyticsCategoryRequest &request)
{
    return qobject_cast<DeleteCallAnalyticsCategoryResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * DeleteCallAnalyticsJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Call Analytics job. To use this operation, specify the name of the job you want to delete using
 * <code>CallAnalyticsJobName</code>. Job names are case
 */
DeleteCallAnalyticsJobResponse * TranscribeClient::deleteCallAnalyticsJob(const DeleteCallAnalyticsJobRequest &request)
{
    return qobject_cast<DeleteCallAnalyticsJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * DeleteLanguageModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a custom language model. To use this operation, specify the name of the language model you want to delete using
 * <code>ModelName</code>. Language model names are case
 */
DeleteLanguageModelResponse * TranscribeClient::deleteLanguageModel(const DeleteLanguageModelRequest &request)
{
    return qobject_cast<DeleteLanguageModelResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * DeleteMedicalTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a medical transcription job. To use this operation, specify the name of the job you want to delete using
 * <code>MedicalTranscriptionJobName</code>. Job names are case
 */
DeleteMedicalTranscriptionJobResponse * TranscribeClient::deleteMedicalTranscriptionJob(const DeleteMedicalTranscriptionJobRequest &request)
{
    return qobject_cast<DeleteMedicalTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * DeleteMedicalVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a custom medical vocabulary. To use this operation, specify the name of the vocabulary you want to delete using
 * <code>VocabularyName</code>. Vocabulary names are case
 */
DeleteMedicalVocabularyResponse * TranscribeClient::deleteMedicalVocabulary(const DeleteMedicalVocabularyRequest &request)
{
    return qobject_cast<DeleteMedicalVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * DeleteTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a transcription job. To use this operation, specify the name of the job you want to delete using
 * <code>TranscriptionJobName</code>. Job names are case
 */
DeleteTranscriptionJobResponse * TranscribeClient::deleteTranscriptionJob(const DeleteTranscriptionJobRequest &request)
{
    return qobject_cast<DeleteTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * DeleteVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a custom vocabulary. To use this operation, specify the name of the vocabulary you want to delete using
 * <code>VocabularyName</code>. Vocabulary names are case
 */
DeleteVocabularyResponse * TranscribeClient::deleteVocabulary(const DeleteVocabularyRequest &request)
{
    return qobject_cast<DeleteVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * DeleteVocabularyFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a vocabulary filter. To use this operation, specify the name of the vocabulary filter you want to delete using
 * <code>VocabularyFilterName</code>. Vocabulary filter names are case
 */
DeleteVocabularyFilterResponse * TranscribeClient::deleteVocabularyFilter(const DeleteVocabularyFilterRequest &request)
{
    return qobject_cast<DeleteVocabularyFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * DescribeLanguageModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the specified custom language
 *
 * model>
 *
 * This operation also shows if the base language model you used to create your custom language model has been updated. If
 * Amazon Transcribe has updated the base model, you can create a new custom language model using the updated base
 *
 * model>
 *
 * If you tried to create a new custom language model and the request wasn't successful, you can use
 * <code>DescribeLanguageModel</code> to help identify the reason for this
 *
 * failure>
 *
 * To get a list of your custom language models, use the
 */
DescribeLanguageModelResponse * TranscribeClient::describeLanguageModel(const DescribeLanguageModelRequest &request)
{
    return qobject_cast<DescribeLanguageModelResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * GetCallAnalyticsCategoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the specified Call Analytics
 *
 * category>
 *
 * To get a list of your Call Analytics categories, use the
 */
GetCallAnalyticsCategoryResponse * TranscribeClient::getCallAnalyticsCategory(const GetCallAnalyticsCategoryRequest &request)
{
    return qobject_cast<GetCallAnalyticsCategoryResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * GetCallAnalyticsJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the specified Call Analytics
 *
 * job>
 *
 * To view the job's status, refer to <code>CallAnalyticsJobStatus</code>. If the status is <code>COMPLETED</code>, the job
 * is finished. You can find your completed transcript at the URI specified in <code>TranscriptFileUri</code>. If the
 * status is <code>FAILED</code>, <code>FailureReason</code> provides details on why your transcription job
 *
 * failed>
 *
 * If you enabled personally identifiable information (PII) redaction, the redacted transcript appears at the location
 * specified in
 *
 * <code>RedactedTranscriptFileUri</code>>
 *
 * If you chose to redact the audio in your media file, you can find your redacted media file at the location specified in
 *
 * <code>RedactedMediaFileUri</code>>
 *
 * To get a list of your Call Analytics jobs, use the
 */
GetCallAnalyticsJobResponse * TranscribeClient::getCallAnalyticsJob(const GetCallAnalyticsJobRequest &request)
{
    return qobject_cast<GetCallAnalyticsJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * GetMedicalTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the specified medical transcription
 *
 * job>
 *
 * To view the status of the specified medical transcription job, check the <code>TranscriptionJobStatus</code> field. If
 * the status is <code>COMPLETED</code>, the job is finished and you can find the results at the location specified in
 * <code>TranscriptFileUri</code>. If the status is <code>FAILED</code>, <code>FailureReason</code> provides details on why
 * your transcription job
 *
 * failed>
 *
 * To get a list of your medical transcription jobs, use the
 */
GetMedicalTranscriptionJobResponse * TranscribeClient::getMedicalTranscriptionJob(const GetMedicalTranscriptionJobRequest &request)
{
    return qobject_cast<GetMedicalTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * GetMedicalVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the specified custom medical
 *
 * vocabulary>
 *
 * To view the status of the specified medical vocabulary, check the <code>VocabularyState</code> field. If the status is
 * <code>READY</code>, your vocabulary is available to use. If the status is <code>FAILED</code>,
 * <code>FailureReason</code> provides details on why your vocabulary
 *
 * failed>
 *
 * To get a list of your custom medical vocabularies, use the
 */
GetMedicalVocabularyResponse * TranscribeClient::getMedicalVocabulary(const GetMedicalVocabularyRequest &request)
{
    return qobject_cast<GetMedicalVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * GetTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the specified transcription
 *
 * job>
 *
 * To view the status of the specified transcription job, check the <code>TranscriptionJobStatus</code> field. If the
 * status is <code>COMPLETED</code>, the job is finished and you can find the results at the location specified in
 * <code>TranscriptFileUri</code>. If the status is <code>FAILED</code>, <code>FailureReason</code> provides details on why
 * your transcription job
 *
 * failed>
 *
 * If you enabled content redaction, the redacted transcript can be found at the location specified in
 *
 * <code>RedactedTranscriptFileUri</code>>
 *
 * To get a list of your transcription jobs, use the
 */
GetTranscriptionJobResponse * TranscribeClient::getTranscriptionJob(const GetTranscriptionJobRequest &request)
{
    return qobject_cast<GetTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * GetVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the specified custom
 *
 * vocabulary>
 *
 * To view the status of the specified vocabulary, check the <code>VocabularyState</code> field. If the status is
 * <code>READY</code>, your vocabulary is available to use. If the status is <code>FAILED</code>,
 * <code>FailureReason</code> provides details on why your vocabulary
 *
 * failed>
 *
 * To get a list of your custom vocabularies, use the
 */
GetVocabularyResponse * TranscribeClient::getVocabulary(const GetVocabularyRequest &request)
{
    return qobject_cast<GetVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * GetVocabularyFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the specified custom vocabulary
 *
 * filter>
 *
 * To view the status of the specified vocabulary filter, check the <code>VocabularyState</code> field. If the status is
 * <code>READY</code>, your vocabulary is available to use. If the status is <code>FAILED</code>,
 * <code>FailureReason</code> provides details on why your vocabulary filter
 *
 * failed>
 *
 * To get a list of your custom vocabulary filters, use the
 */
GetVocabularyFilterResponse * TranscribeClient::getVocabularyFilter(const GetVocabularyFilterRequest &request)
{
    return qobject_cast<GetVocabularyFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * ListCallAnalyticsCategoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of Call Analytics categories, including all rules that make up each
 *
 * category>
 *
 * To get detailed information about a specific Call Analytics category, use the
 */
ListCallAnalyticsCategoriesResponse * TranscribeClient::listCallAnalyticsCategories(const ListCallAnalyticsCategoriesRequest &request)
{
    return qobject_cast<ListCallAnalyticsCategoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * ListCallAnalyticsJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of Call Analytics jobs that match the specified criteria. If no criteria are specified, all Call
 * Analytics jobs are
 *
 * returned>
 *
 * To get detailed information about a specific Call Analytics job, use the
 */
ListCallAnalyticsJobsResponse * TranscribeClient::listCallAnalyticsJobs(const ListCallAnalyticsJobsRequest &request)
{
    return qobject_cast<ListCallAnalyticsJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * ListLanguageModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of custom language models that match the specified criteria. If no criteria are specified, all language
 * models are
 *
 * returned>
 *
 * To get detailed information about a specific custom language model, use the
 */
ListLanguageModelsResponse * TranscribeClient::listLanguageModels(const ListLanguageModelsRequest &request)
{
    return qobject_cast<ListLanguageModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * ListMedicalTranscriptionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of medical transcription jobs that match the specified criteria. If no criteria are specified, all
 * medical transcription jobs are
 *
 * returned>
 *
 * To get detailed information about a specific medical transcription job, use the
 */
ListMedicalTranscriptionJobsResponse * TranscribeClient::listMedicalTranscriptionJobs(const ListMedicalTranscriptionJobsRequest &request)
{
    return qobject_cast<ListMedicalTranscriptionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * ListMedicalVocabulariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of custom medical vocabularies that match the specified criteria. If no criteria are specified, all
 * custom medical vocabularies are
 *
 * returned>
 *
 * To get detailed information about a specific custom medical vocabulary, use the
 */
ListMedicalVocabulariesResponse * TranscribeClient::listMedicalVocabularies(const ListMedicalVocabulariesRequest &request)
{
    return qobject_cast<ListMedicalVocabulariesResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags associated with the specified transcription job, vocabulary, model, or
 *
 * resource>
 *
 * To learn more about using tags with Amazon Transcribe, refer to <a
 * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
 */
ListTagsForResourceResponse * TranscribeClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * ListTranscriptionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of transcription jobs that match the specified criteria. If no criteria are specified, all transcription
 * jobs are
 *
 * returned>
 *
 * To get detailed information about a specific transcription job, use the
 */
ListTranscriptionJobsResponse * TranscribeClient::listTranscriptionJobs(const ListTranscriptionJobsRequest &request)
{
    return qobject_cast<ListTranscriptionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * ListVocabulariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of custom vocabularies that match the specified criteria. If no criteria are specified, all custom
 * vocabularies are
 *
 * returned>
 *
 * To get detailed information about a specific custom vocabulary, use the
 */
ListVocabulariesResponse * TranscribeClient::listVocabularies(const ListVocabulariesRequest &request)
{
    return qobject_cast<ListVocabulariesResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * ListVocabularyFiltersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of custom vocabulary filters that match the specified criteria. If no criteria are specified, all custom
 * vocabularies are
 *
 * returned>
 *
 * To get detailed information about a specific custom vocabulary filter, use the
 */
ListVocabularyFiltersResponse * TranscribeClient::listVocabularyFilters(const ListVocabularyFiltersRequest &request)
{
    return qobject_cast<ListVocabularyFiltersResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * StartCallAnalyticsJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Transcribes the audio from a customer service call and applies any additional Request Parameters you choose to include
 * in your
 *
 * request>
 *
 * In addition to many of the standard transcription features, Call Analytics provides you with call characteristics, call
 * summarization, speaker sentiment, and optional redaction of your text transcript and your audio file. You can also apply
 * custom categories to flag specified conditions. To learn more about these features and insights, refer to <a
 * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics.html">Analyzing call center audio with Call
 *
 * Analytics</a>>
 *
 * If you want to apply categories to your Call Analytics job, you must create them before submitting your job request.
 * Categories cannot be retroactively applied to a job. To create a new category, use the operation. To learn more about
 * Call Analytics categories, see <a
 * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics-create-categories.html">Creating
 *
 * categories</a>>
 *
 * To make a <code>StartCallAnalyticsJob</code> request, you must first upload your media file into an Amazon S3 bucket;
 * you can then specify the Amazon S3 location of the file using the <code>Media</code>
 *
 * parameter>
 *
 * You must include the following parameters in your <code>StartCallAnalyticsJob</code>
 *
 * request> <ul> <li>
 *
 * <code>region</code>: The Amazon Web Services Region where you are making your request. For a list of Amazon Web Services
 * Regions supported with Amazon Transcribe, refer to <a
 * href="https://docs.aws.amazon.com/general/latest/gr/transcribe.html">Amazon Transcribe endpoints and
 *
 * quotas</a>> </li> <li>
 *
 * <code>CallAnalyticsJobName</code>: A custom name you create for your transcription job that is unique within your Amazon
 * Web Services
 *
 * account> </li> <li>
 *
 * <code>DataAccessRoleArn</code>: The Amazon Resource Name (ARN) of an IAM role that has permissions to access the Amazon
 * S3 bucket that contains your input
 *
 * files> </li> <li>
 *
 * <code>Media</code> (<code>MediaFileUri</code> or <code>RedactedMediaFileUri</code>): The Amazon S3 location of your
 * media
 *
 * file> </li> </ul> <note>
 *
 * With Call Analytics, you can redact the audio contained in your media file by including
 * <code>RedactedMediaFileUri</code>, instead of <code>MediaFileUri</code>, to specify the location of your input audio. If
 * you choose to redact your audio, you can find your redacted media at the location specified in the
 * <code>RedactedMediaFileUri</code> field of your
 */
StartCallAnalyticsJobResponse * TranscribeClient::startCallAnalyticsJob(const StartCallAnalyticsJobRequest &request)
{
    return qobject_cast<StartCallAnalyticsJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * StartMedicalTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Transcribes the audio from a medical dictation or conversation and applies any additional Request Parameters you choose
 * to include in your
 *
 * request>
 *
 * In addition to many of the standard transcription features, Amazon Transcribe Medical provides you with a robust medical
 * vocabulary and, optionally, content identification, which adds flags to personal health information (PHI). To learn more
 * about these features, refer to <a href="https://docs.aws.amazon.com/transcribe/latest/dg/how-it-works-med.html">How
 * Amazon Transcribe Medical
 *
 * works</a>>
 *
 * To make a <code>StartMedicalTranscriptionJob</code> request, you must first upload your media file into an Amazon S3
 * bucket; you can then specify the S3 location of the file using the <code>Media</code>
 *
 * parameter>
 *
 * You must include the following parameters in your <code>StartMedicalTranscriptionJob</code>
 *
 * request> <ul> <li>
 *
 * <code>region</code>: The Amazon Web Services Region where you are making your request. For a list of Amazon Web Services
 * Regions supported with Amazon Transcribe, refer to <a
 * href="https://docs.aws.amazon.com/general/latest/gr/transcribe.html">Amazon Transcribe endpoints and
 *
 * quotas</a>> </li> <li>
 *
 * <code>MedicalTranscriptionJobName</code>: A custom name you create for your transcription job that is unique within your
 * Amazon Web Services
 *
 * account> </li> <li>
 *
 * <code>Media</code> (<code>MediaFileUri</code>): The Amazon S3 location of your media
 *
 * file> </li> <li>
 *
 * <code>LanguageCode</code>: This must be
 *
 * <code>en-US</code>> </li> <li>
 *
 * <code>OutputBucketName</code>: The Amazon S3 bucket where you want your transcript stored. If you want your output
 * stored in a sub-folder of this bucket, you must also include
 *
 * <code>OutputKey</code>> </li> <li>
 *
 * <code>Specialty</code>: This must be
 *
 * <code>PRIMARYCARE</code>> </li> <li>
 *
 * <code>Type</code>: Choose whether your audio is a conversation or a
 */
StartMedicalTranscriptionJobResponse * TranscribeClient::startMedicalTranscriptionJob(const StartMedicalTranscriptionJobRequest &request)
{
    return qobject_cast<StartMedicalTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * StartTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Transcribes the audio from a media file and applies any additional Request Parameters you choose to include in your
 *
 * request>
 *
 * To make a <code>StartTranscriptionJob</code> request, you must first upload your media file into an Amazon S3 bucket;
 * you can then specify the Amazon S3 location of the file using the <code>Media</code>
 *
 * parameter>
 *
 * You must include the following parameters in your <code>StartTranscriptionJob</code>
 *
 * request> <ul> <li>
 *
 * <code>region</code>: The Amazon Web Services Region where you are making your request. For a list of Amazon Web Services
 * Regions supported with Amazon Transcribe, refer to <a
 * href="https://docs.aws.amazon.com/general/latest/gr/transcribe.html">Amazon Transcribe endpoints and
 *
 * quotas</a>> </li> <li>
 *
 * <code>TranscriptionJobName</code>: A custom name you create for your transcription job that is unique within your Amazon
 * Web Services
 *
 * account> </li> <li>
 *
 * <code>Media</code> (<code>MediaFileUri</code>): The Amazon S3 location of your media
 *
 * file> </li> <li>
 *
 * One of <code>LanguageCode</code>, <code>IdentifyLanguage</code>, or <code>IdentifyMultipleLanguages</code>: If you know
 * the language of your media file, specify it using the <code>LanguageCode</code> parameter; you can find all valid
 * language codes in the <a href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
 * languages</a> table. If you don't know the languages spoken in your media, use either <code>IdentifyLanguage</code> or
 * <code>IdentifyMultipleLanguages</code> and let Amazon Transcribe identify the languages for
 */
StartTranscriptionJobResponse * TranscribeClient::startTranscriptionJob(const StartTranscriptionJobRequest &request)
{
    return qobject_cast<StartTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more custom tags, each in the form of a key:value pair, to the specified
 *
 * resource>
 *
 * To learn more about using tags with Amazon Transcribe, refer to <a
 * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
 */
TagResourceResponse * TranscribeClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified Amazon Transcribe
 *
 * resource>
 *
 * If you include <code>UntagResource</code> in your request, you must also include <code>ResourceArn</code> and
 */
UntagResourceResponse * TranscribeClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * UpdateCallAnalyticsCategoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified Call Analytics category with new rules. Note that the <code>UpdateCallAnalyticsCategory</code>
 * operation overwrites all existing rules contained in the specified category. You cannot append additional rules onto an
 * existing
 *
 * category>
 *
 * To create a new category, see
 */
UpdateCallAnalyticsCategoryResponse * TranscribeClient::updateCallAnalyticsCategory(const UpdateCallAnalyticsCategoryRequest &request)
{
    return qobject_cast<UpdateCallAnalyticsCategoryResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * UpdateMedicalVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing custom medical vocabulary with new values. This operation overwrites all existing information with
 * your new values; you cannot append new terms onto an existing
 */
UpdateMedicalVocabularyResponse * TranscribeClient::updateMedicalVocabulary(const UpdateMedicalVocabularyRequest &request)
{
    return qobject_cast<UpdateMedicalVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * UpdateVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing custom vocabulary with new values. This operation overwrites all existing information with your new
 * values; you cannot append new terms onto an existing
 */
UpdateVocabularyResponse * TranscribeClient::updateVocabulary(const UpdateVocabularyRequest &request)
{
    return qobject_cast<UpdateVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeClient service, and returns a pointer to an
 * UpdateVocabularyFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing custom vocabulary filter with a new list of words. The new list you provide overwrites all previous
 * entries; you cannot append new terms onto an existing vocabulary
 */
UpdateVocabularyFilterResponse * TranscribeClient::updateVocabularyFilter(const UpdateVocabularyFilterRequest &request)
{
    return qobject_cast<UpdateVocabularyFilterResponse *>(send(request));
}

/*!
 * \class QtAws::Transcribe::TranscribeClientPrivate
 * \brief The TranscribeClientPrivate class provides private implementation for TranscribeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a TranscribeClientPrivate object with public implementation \a q.
 */
TranscribeClientPrivate::TranscribeClientPrivate(TranscribeClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Transcribe
} // namespace QtAws
