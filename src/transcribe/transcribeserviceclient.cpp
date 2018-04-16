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

#include "transcribeserviceclient.h"
#include "transcribeserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "createvocabularyrequest.h"
#include "createvocabularyresponse.h"
#include "deletevocabularyrequest.h"
#include "deletevocabularyresponse.h"
#include "gettranscriptionjobrequest.h"
#include "gettranscriptionjobresponse.h"
#include "getvocabularyrequest.h"
#include "getvocabularyresponse.h"
#include "listtranscriptionjobsrequest.h"
#include "listtranscriptionjobsresponse.h"
#include "listvocabulariesrequest.h"
#include "listvocabulariesresponse.h"
#include "starttranscriptionjobrequest.h"
#include "starttranscriptionjobresponse.h"
#include "updatevocabularyrequest.h"
#include "updatevocabularyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::TranscribeService
 * \brief The QtAws::TranscribeService contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::TranscribeServiceClient
 *
 * \brief The TranscribeServiceClient class provides access the Amazon Transcribe Service service.
 *
 * \ingroup TranscribeService
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
 * \a  AwsEndpoint::getEndpoint()
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
 * Creates a new custom vocabulary that you can use to change the way Amazon Transcribe handles transcription of an audio
 *
 * @param  request Request to send to Amazon Transcribe Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateVocabularyResponse * TranscribeServiceClient::createVocabulary(const CreateVocabularyRequest &request)
{
    return qobject_cast<CreateVocabularyResponse *>(send(request));
}

/*!
 * Deletes a vocabulary from Amazon Transcribe.
 *
 * @param  request Request to send to Amazon Transcribe Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteVocabularyResponse * TranscribeServiceClient::deleteVocabulary(const DeleteVocabularyRequest &request)
{
    return qobject_cast<DeleteVocabularyResponse *>(send(request));
}

/*!
 * Returns information about a transcription job. To see the status of the job, check the
 * <code>TranscriptionJobStatus</code> field. If the status is <code>COMPLETED</code>, the job is finished and you can find
 * the results at the location specified in the <code>TranscriptionFileUri</code>
 *
 * @param  request Request to send to Amazon Transcribe Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTranscriptionJobResponse * TranscribeServiceClient::getTranscriptionJob(const GetTranscriptionJobRequest &request)
{
    return qobject_cast<GetTranscriptionJobResponse *>(send(request));
}

/*!
 * Gets information about a
 *
 * @param  request Request to send to Amazon Transcribe Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetVocabularyResponse * TranscribeServiceClient::getVocabulary(const GetVocabularyRequest &request)
{
    return qobject_cast<GetVocabularyResponse *>(send(request));
}

/*!
 * Lists transcription jobs with the specified
 *
 * @param  request Request to send to Amazon Transcribe Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTranscriptionJobsResponse * TranscribeServiceClient::listTranscriptionJobs(const ListTranscriptionJobsRequest &request)
{
    return qobject_cast<ListTranscriptionJobsResponse *>(send(request));
}

/*!
 * Returns a list of vocabularies that match the specified criteria. If no criteria are specified, returns the entire list
 * of
 *
 * @param  request Request to send to Amazon Transcribe Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListVocabulariesResponse * TranscribeServiceClient::listVocabularies(const ListVocabulariesRequest &request)
{
    return qobject_cast<ListVocabulariesResponse *>(send(request));
}

/*!
 * Starts an asynchronous job to transcribe speech to
 *
 * @param  request Request to send to Amazon Transcribe Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartTranscriptionJobResponse * TranscribeServiceClient::startTranscriptionJob(const StartTranscriptionJobRequest &request)
{
    return qobject_cast<StartTranscriptionJobResponse *>(send(request));
}

/*!
 * Updates an existing vocabulary with new
 *
 * @param  request Request to send to Amazon Transcribe Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateVocabularyResponse * TranscribeServiceClient::updateVocabulary(const UpdateVocabularyRequest &request)
{
    return qobject_cast<UpdateVocabularyResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  TranscribeServiceClientPrivate
 *
 * @brief  Private implementation for TranscribeServiceClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TranscribeServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public TranscribeServiceClient instance.
 */
TranscribeServiceClientPrivate::TranscribeServiceClientPrivate(TranscribeServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace TranscribeService
} // namespace QtAws
