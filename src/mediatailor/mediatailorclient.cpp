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

#include "mediatailorclient.h"
#include "mediatailorclient_p.h"

#include "core/awssignaturev4.h"
#include "deleteplaybackconfigurationrequest.h"
#include "deleteplaybackconfigurationresponse.h"
#include "getplaybackconfigurationrequest.h"
#include "getplaybackconfigurationresponse.h"
#include "listplaybackconfigurationsrequest.h"
#include "listplaybackconfigurationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putplaybackconfigurationrequest.h"
#include "putplaybackconfigurationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MediaTailor
 * \brief Contains classess for accessing AWS MediaTailor.
 *
 * \inmodule QtAwsMediaTailor
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::MediaTailorClient
 * \brief The MediaTailorClient class provides access to the AWS MediaTailor service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDK to configure scalable ad insertion for your live and VOD content. With AWS
 *  Elemental MediaTailor, you can serve targeted ads to viewers while maintaining broadcast quality in over-the-top (OTT)
 *  video applications. For information about using the service, including detailed information about the settings covered
 *  in this guide, see the AWS Elemental MediaTailor User Guide.<p>Through the SDK, you manage AWS Elemental MediaTailor
 *  configurations the same as you do through the console. For example, you specify ad insertion behavior and mapping
 *  information for the origin server and the ad decision server
 */

/*!
 * \brief Constructs a MediaTailorClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MediaTailorClient::MediaTailorClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaTailorClientPrivate(this), parent)
{
    Q_D(MediaTailorClient);
    d->apiVersion = QStringLiteral("2018-04-23");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("api.mediatailor");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS MediaTailor");
    d->serviceName = QStringLiteral("mediatailor");
}

/*!
 * \overload MediaTailorClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MediaTailorClient::MediaTailorClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaTailorClientPrivate(this), parent)
{
    Q_D(MediaTailorClient);
    d->apiVersion = QStringLiteral("2018-04-23");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("api.mediatailor");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS MediaTailor");
    d->serviceName = QStringLiteral("mediatailor");
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * DeletePlaybackConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the playback configuration for the specified name.
 */
DeletePlaybackConfigurationResponse * MediaTailorClient::deletePlaybackConfiguration(const DeletePlaybackConfigurationRequest &request)
{
    return qobject_cast<DeletePlaybackConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * GetPlaybackConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the playback configuration for the specified name.
 */
GetPlaybackConfigurationResponse * MediaTailorClient::getPlaybackConfiguration(const GetPlaybackConfigurationRequest &request)
{
    return qobject_cast<GetPlaybackConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * ListPlaybackConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the playback configurations defined in AWS Elemental MediaTailor. You can specify a maximum number of
 * configurations to return at a time. The default maximum is 50. Results are returned in pagefuls. If MediaTailor has more
 * configurations than the specified maximum, it provides parameters in the response that you can use to retrieve the next
 * pageful.
 */
ListPlaybackConfigurationsResponse * MediaTailorClient::listPlaybackConfigurations(const ListPlaybackConfigurationsRequest &request)
{
    return qobject_cast<ListPlaybackConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the tags assigned to the specified playback configuration resource.
 */
ListTagsForResourceResponse * MediaTailorClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * PutPlaybackConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new playback configuration to AWS Elemental MediaTailor.
 */
PutPlaybackConfigurationResponse * MediaTailorClient::putPlaybackConfiguration(const PutPlaybackConfigurationRequest &request)
{
    return qobject_cast<PutPlaybackConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to the specified playback configuration resource. You can specify one or more tags to add.
 */
TagResourceResponse * MediaTailorClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the specified playback configuration resource. You can specify one or more tags to remove.
 */
UntagResourceResponse * MediaTailorClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::MediaTailor::MediaTailorClientPrivate
 * \brief The MediaTailorClientPrivate class provides private implementation for MediaTailorClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a MediaTailorClientPrivate object with public implementation \a q.
 */
MediaTailorClientPrivate::MediaTailorClientPrivate(MediaTailorClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MediaTailor
} // namespace QtAws
