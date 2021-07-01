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

#include "transcribeserviceclient.h"
#include "transcribeserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "createlanguagemodelrequest.h"
#include "createlanguagemodelresponse.h"
#include "createmedicalvocabularyrequest.h"
#include "createmedicalvocabularyresponse.h"
#include "createvocabularyrequest.h"
#include "createvocabularyresponse.h"
#include "createvocabularyfilterrequest.h"
#include "createvocabularyfilterresponse.h"
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
#include "listlanguagemodelsrequest.h"
#include "listlanguagemodelsresponse.h"
#include "listmedicaltranscriptionjobsrequest.h"
#include "listmedicaltranscriptionjobsresponse.h"
#include "listmedicalvocabulariesrequest.h"
#include "listmedicalvocabulariesresponse.h"
#include "listtranscriptionjobsrequest.h"
#include "listtranscriptionjobsresponse.h"
#include "listvocabulariesrequest.h"
#include "listvocabulariesresponse.h"
#include "listvocabularyfiltersrequest.h"
#include "listvocabularyfiltersresponse.h"
#include "startmedicaltranscriptionjobrequest.h"
#include "startmedicaltranscriptionjobresponse.h"
#include "starttranscriptionjobrequest.h"
#include "starttranscriptionjobresponse.h"
#include "updatemedicalvocabularyrequest.h"
#include "updatemedicalvocabularyresponse.h"
#include "updatevocabularyrequest.h"
#include "updatevocabularyresponse.h"
#include "updatevocabularyfilterrequest.h"
#include "updatevocabularyfilterresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::TranscribeService
 * \brief Contains classess for accessing Amazon Transcribe Service.
 *
 * \inmodule QtAwsTranscribeService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::TranscribeServiceClient
 * \brief The TranscribeServiceClient class provides access to the Amazon Transcribe Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 */

/*!
 * \brief Constructs a TranscribeServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
TranscribeServiceClient::TranscribeServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranscribeServiceClientPrivate(this), parent)
{
    Q_D(TranscribeServiceClient);
    d->apiVersion = QStringLiteral("2017-10-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("transcribe");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Transcribe Service");
    d->serviceName = QStringLiteral("transcribe");
}

/*!
 * \overload TranscribeServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
TranscribeServiceClient::TranscribeServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranscribeServiceClientPrivate(this), parent)
{
    Q_D(TranscribeServiceClient);
    d->apiVersion = QStringLiteral("2017-10-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("transcribe");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Transcribe Service");
    d->serviceName = QStringLiteral("transcribe");
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * CreateLanguageModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new custom language model. Use Amazon S3 prefixes to provide the location of your input files. The time it
 * takes to create your model depends on the size of your training
 */
CreateLanguageModelResponse * TranscribeServiceClient::createLanguageModel(const CreateLanguageModelRequest &request)
{
    return qobject_cast<CreateLanguageModelResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * CreateMedicalVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new custom vocabulary that you can use to change how Amazon Transcribe Medical transcribes your audio
 */
CreateMedicalVocabularyResponse * TranscribeServiceClient::createMedicalVocabulary(const CreateMedicalVocabularyRequest &request)
{
    return qobject_cast<CreateMedicalVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * CreateVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new custom vocabulary that you can use to change the way Amazon Transcribe handles transcription of an audio
 */
CreateVocabularyResponse * TranscribeServiceClient::createVocabulary(const CreateVocabularyRequest &request)
{
    return qobject_cast<CreateVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * CreateVocabularyFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new vocabulary filter that you can use to filter words, such as profane words, from the output of a
 * transcription
 */
CreateVocabularyFilterResponse * TranscribeServiceClient::createVocabularyFilter(const CreateVocabularyFilterRequest &request)
{
    return qobject_cast<CreateVocabularyFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * DeleteLanguageModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a custom language model using its
 */
DeleteLanguageModelResponse * TranscribeServiceClient::deleteLanguageModel(const DeleteLanguageModelRequest &request)
{
    return qobject_cast<DeleteLanguageModelResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * DeleteMedicalTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a transcription job generated by Amazon Transcribe Medical and any related
 */
DeleteMedicalTranscriptionJobResponse * TranscribeServiceClient::deleteMedicalTranscriptionJob(const DeleteMedicalTranscriptionJobRequest &request)
{
    return qobject_cast<DeleteMedicalTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * DeleteMedicalVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a vocabulary from Amazon Transcribe
 */
DeleteMedicalVocabularyResponse * TranscribeServiceClient::deleteMedicalVocabulary(const DeleteMedicalVocabularyRequest &request)
{
    return qobject_cast<DeleteMedicalVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * DeleteTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a previously submitted transcription job along with any other generated results such as the transcription,
 * models, and so
 */
DeleteTranscriptionJobResponse * TranscribeServiceClient::deleteTranscriptionJob(const DeleteTranscriptionJobRequest &request)
{
    return qobject_cast<DeleteTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * DeleteVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a vocabulary from Amazon Transcribe.
 */
DeleteVocabularyResponse * TranscribeServiceClient::deleteVocabulary(const DeleteVocabularyRequest &request)
{
    return qobject_cast<DeleteVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * DeleteVocabularyFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a vocabulary
 */
DeleteVocabularyFilterResponse * TranscribeServiceClient::deleteVocabularyFilter(const DeleteVocabularyFilterRequest &request)
{
    return qobject_cast<DeleteVocabularyFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * DescribeLanguageModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a single custom language model. Use this information to see details about the language model in
 * your AWS account. You can also see whether the base language model used to create your custom language model has been
 * updated. If Amazon Transcribe has updated the base model, you can create a new custom language model using the updated
 * base model. If the language model wasn't created, you can use this operation to understand why Amazon Transcribe
 * couldn't create it.
 */
DescribeLanguageModelResponse * TranscribeServiceClient::describeLanguageModel(const DescribeLanguageModelRequest &request)
{
    return qobject_cast<DescribeLanguageModelResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * GetMedicalTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a transcription job from Amazon Transcribe Medical. To see the status of the job, check the
 * <code>TranscriptionJobStatus</code> field. If the status is <code>COMPLETED</code>, the job is finished. You find the
 * results of the completed job in the <code>TranscriptFileUri</code>
 */
GetMedicalTranscriptionJobResponse * TranscribeServiceClient::getMedicalTranscriptionJob(const GetMedicalTranscriptionJobRequest &request)
{
    return qobject_cast<GetMedicalTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * GetMedicalVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a medical
 */
GetMedicalVocabularyResponse * TranscribeServiceClient::getMedicalVocabulary(const GetMedicalVocabularyRequest &request)
{
    return qobject_cast<GetMedicalVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * GetTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a transcription job. To see the status of the job, check the
 * <code>TranscriptionJobStatus</code> field. If the status is <code>COMPLETED</code>, the job is finished and you can find
 * the results at the location specified in the <code>TranscriptFileUri</code> field. If you enable content redaction, the
 * redacted transcript appears in
 */
GetTranscriptionJobResponse * TranscribeServiceClient::getTranscriptionJob(const GetTranscriptionJobRequest &request)
{
    return qobject_cast<GetTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * GetVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a vocabulary.
 */
GetVocabularyResponse * TranscribeServiceClient::getVocabulary(const GetVocabularyRequest &request)
{
    return qobject_cast<GetVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * GetVocabularyFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a vocabulary
 */
GetVocabularyFilterResponse * TranscribeServiceClient::getVocabularyFilter(const GetVocabularyFilterRequest &request)
{
    return qobject_cast<GetVocabularyFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * ListLanguageModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides more information about the custom language models you've created. You can use the information in this list to
 * find a specific custom language model. You can then use the operation to get more information about
 */
ListLanguageModelsResponse * TranscribeServiceClient::listLanguageModels(const ListLanguageModelsRequest &request)
{
    return qobject_cast<ListLanguageModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * ListMedicalTranscriptionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists medical transcription jobs with a specified status or substring that matches their
 */
ListMedicalTranscriptionJobsResponse * TranscribeServiceClient::listMedicalTranscriptionJobs(const ListMedicalTranscriptionJobsRequest &request)
{
    return qobject_cast<ListMedicalTranscriptionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * ListMedicalVocabulariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of vocabularies that match the specified criteria. If you don't enter a value in any of the request
 * parameters, returns the entire list of
 */
ListMedicalVocabulariesResponse * TranscribeServiceClient::listMedicalVocabularies(const ListMedicalVocabulariesRequest &request)
{
    return qobject_cast<ListMedicalVocabulariesResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * ListTranscriptionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists transcription jobs with the specified
 */
ListTranscriptionJobsResponse * TranscribeServiceClient::listTranscriptionJobs(const ListTranscriptionJobsRequest &request)
{
    return qobject_cast<ListTranscriptionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * ListVocabulariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of vocabularies that match the specified criteria. If no criteria are specified, returns the entire list
 * of
 */
ListVocabulariesResponse * TranscribeServiceClient::listVocabularies(const ListVocabulariesRequest &request)
{
    return qobject_cast<ListVocabulariesResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * ListVocabularyFiltersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about vocabulary
 */
ListVocabularyFiltersResponse * TranscribeServiceClient::listVocabularyFilters(const ListVocabularyFiltersRequest &request)
{
    return qobject_cast<ListVocabularyFiltersResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * StartMedicalTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a batch job to transcribe medical speech to
 */
StartMedicalTranscriptionJobResponse * TranscribeServiceClient::startMedicalTranscriptionJob(const StartMedicalTranscriptionJobRequest &request)
{
    return qobject_cast<StartMedicalTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * StartTranscriptionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous job to transcribe speech to
 */
StartTranscriptionJobResponse * TranscribeServiceClient::startTranscriptionJob(const StartTranscriptionJobRequest &request)
{
    return qobject_cast<StartTranscriptionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * UpdateMedicalVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a vocabulary with new values that you provide in a different text file from the one you used to create the
 * vocabulary. The <code>UpdateMedicalVocabulary</code> operation overwrites all of the existing information with the
 * values that you provide in the
 */
UpdateMedicalVocabularyResponse * TranscribeServiceClient::updateMedicalVocabulary(const UpdateMedicalVocabularyRequest &request)
{
    return qobject_cast<UpdateMedicalVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * UpdateVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing vocabulary with new values. The <code>UpdateVocabulary</code> operation overwrites all of the
 * existing information with the values that you provide in the request.
 */
UpdateVocabularyResponse * TranscribeServiceClient::updateVocabulary(const UpdateVocabularyRequest &request)
{
    return qobject_cast<UpdateVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeServiceClient service, and returns a pointer to an
 * UpdateVocabularyFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a vocabulary filter with a new list of filtered
 */
UpdateVocabularyFilterResponse * TranscribeServiceClient::updateVocabularyFilter(const UpdateVocabularyFilterRequest &request)
{
    return qobject_cast<UpdateVocabularyFilterResponse *>(send(request));
}

/*!
 * \class QtAws::TranscribeService::TranscribeServiceClientPrivate
 * \brief The TranscribeServiceClientPrivate class provides private implementation for TranscribeServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a TranscribeServiceClientPrivate object with public implementation \a q.
 */
TranscribeServiceClientPrivate::TranscribeServiceClientPrivate(TranscribeServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace TranscribeService
} // namespace QtAws
