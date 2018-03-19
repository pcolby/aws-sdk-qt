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

#include "transcribeserviceclient.h"
#include "transcribeserviceclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace TranscribeService {

/**
 * @class  TranscribeServiceClient
 *
 * @brief  Client for Amazon Transcribe Service
 *
 * Operations and objects for transcribing speech to
 */

/**
 * @brief  Constructs a new TranscribeServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
TranscribeServiceClient::TranscribeServiceClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new TranscribeServiceClientPrivate(this), parent)
{
    Q_D(TranscribeServiceClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("transcribe");
}

/**
 * @brief  Constructs a new TranscribeServiceClient object.
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
TranscribeServiceClient::TranscribeServiceClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new TranscribeServiceClientPrivate(this), parent)
{
    Q_D(TranscribeServiceClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("transcribe");
}

/// @todo override getEndpoint() to use transcribe.

/**
 * Returns information about a transcription job. To see the status of the job, check the <code>Status</code> field. If the
 * status is <code>COMPLETE</code>, the job is finished and you can find the results at the location specified in the
 * <code>TranscriptionFileUri</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTranscriptionJobResponse * TranscribeServiceClient::getTranscriptionJob(const GetTranscriptionJobRequest &request)
{

}

/**
 * Lists transcription jobs with the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTranscriptionJobsResponse * TranscribeServiceClient::listTranscriptionJobs(const ListTranscriptionJobsRequest &request)
{

}

/**
 * Starts an asynchronous job to transcribe speech to
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartTranscriptionJobResponse * TranscribeServiceClient::startTranscriptionJob(const StartTranscriptionJobRequest &request)
{

}

/**
 * @internal
 *
 * @class  TranscribeServiceClientPrivate
 *
 * @brief  Private implementation for TranscribeServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TranscribeServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public TranscribeServiceClient instance.
 */
TranscribeServiceClientPrivate::TranscribeServiceClientPrivate(TranscribeServiceClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace TranscribeService
} // namespace AWS
