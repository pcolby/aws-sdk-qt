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

#include "kinesisvideoarchivedmediaclient.h"
#include "kinesisvideoarchivedmediaclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace KinesisVideoArchivedMedia {

/**
 * @class  KinesisVideoArchivedMediaClient
 *
 * @brief  Client for Amazon Kinesis Video Streams Archived Media (Kinesis Video Archived Media)
 *
 */

/**
 * @brief  Constructs a new KinesisVideoArchivedMediaClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new KinesisVideoArchivedMediaClientPrivate(this), parent)
{
    Q_D(KinesisVideoArchivedMediaClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new KinesisVideoArchivedMediaClient object.
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
KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new KinesisVideoArchivedMediaClientPrivate(this), parent)
{
    Q_D(KinesisVideoArchivedMediaClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Gets media for a list of fragments (specified by fragment number) from the archived data in a Kinesis video
 *
 * stream> <note>
 *
 * This operation is only available for the AWS SDK for Java. It is not supported in AWS SDKs for other
 *
 * languages> </note>
 *
 * The following limits apply when using the <code>GetMediaForFragmentList</code>
 *
 * API> <ul> <li>
 *
 * A client can call <code>GetMediaForFragmentList</code> up to five times per second per stream.
 *
 * </p </li> <li>
 *
 * Kinesis Video Streams sends media data at a rate of up to 25 megabytes per second (or 200 megabits per second) during a
 * <code>GetMediaForFragmentList</code> session.
 */
GetMediaForFragmentListResponse * KinesisVideoArchivedMediaClient::getMediaForFragmentList(const GetMediaForFragmentListRequest &request)
{

}

/**
 * Returns a list of <a>Fragment</a> objects from the specified stream and start location within the archived
 */
ListFragmentsResponse * KinesisVideoArchivedMediaClient::listFragments(const ListFragmentsRequest &request)
{

}

/**
 * @internal
 *
 * @class  KinesisVideoArchivedMediaClientPrivate
 *
 * @brief  Private implementation for KinesisVideoArchivedMediaClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new KinesisVideoArchivedMediaClientPrivate object.
 *
 * @param  q  Pointer to this object's public KinesisVideoArchivedMediaClient instance.
 */
KinesisVideoArchivedMediaClientPrivate::KinesisVideoArchivedMediaClientPrivate(KinesisVideoArchivedMediaClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace KinesisVideoArchivedMedia
} // namespace AWS
