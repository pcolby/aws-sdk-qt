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

#include "kinesisvideoarchivedmediaclient.h"
#include "kinesisvideoarchivedmediaclient_p.h"

#include "core/awssignaturev4.h"
#include "getmediaforfragmentlistrequest.h"
#include "getmediaforfragmentlistresponse.h"
#include "listfragmentsrequest.h"
#include "listfragmentsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::KinesisVideoArchivedMedia
 * \brief Contains classess for accessing Amazon Kinesis Video Streams Archived Media (Kinesis Video Archived Media).
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClient
 * \brief The KinesisVideoArchivedMediaClient class provides access to the Amazon Kinesis Video Streams Archived Media (Kinesis Video Archived Media) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 */

/*!
 * \brief Constructs a KinesisVideoArchivedMediaClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoArchivedMediaClientPrivate(this), parent)
{
    Q_D(KinesisVideoArchivedMediaClient);
    d->apiVersion = QStringLiteral("2017-09-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Streams Archived Media");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/*!
 * \overload KinesisVideoArchivedMediaClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoArchivedMediaClientPrivate(this), parent)
{
    Q_D(KinesisVideoArchivedMediaClient);
    d->apiVersion = QStringLiteral("2017-09-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Streams Archived Media");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/*!
 * Sends \a request to the KinesisVideoArchivedMediaClient service, and returns a pointer to an
 * GetMediaForFragmentListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<GetMediaForFragmentListResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoArchivedMediaClient service, and returns a pointer to an
 * ListFragmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a>Fragment</a> objects from the specified stream and start location within the archived
 */
ListFragmentsResponse * KinesisVideoArchivedMediaClient::listFragments(const ListFragmentsRequest &request)
{
    return qobject_cast<ListFragmentsResponse *>(send(request));
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClientPrivate
 * \brief The KinesisVideoArchivedMediaClientPrivate class provides private implementation for KinesisVideoArchivedMediaClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a KinesisVideoArchivedMediaClientPrivate object with public implementation \a q.
 */
KinesisVideoArchivedMediaClientPrivate::KinesisVideoArchivedMediaClientPrivate(KinesisVideoArchivedMediaClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
