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

#include "mediatailorclient.h"
#include "mediatailorclient_p.h"

#include "core/awssignaturev4.h"
#include "createchannelrequest.h"
#include "createchannelresponse.h"
#include "createprogramrequest.h"
#include "createprogramresponse.h"
#include "createsourcelocationrequest.h"
#include "createsourcelocationresponse.h"
#include "createvodsourcerequest.h"
#include "createvodsourceresponse.h"
#include "deletechannelrequest.h"
#include "deletechannelresponse.h"
#include "deletechannelpolicyrequest.h"
#include "deletechannelpolicyresponse.h"
#include "deleteplaybackconfigurationrequest.h"
#include "deleteplaybackconfigurationresponse.h"
#include "deleteprogramrequest.h"
#include "deleteprogramresponse.h"
#include "deletesourcelocationrequest.h"
#include "deletesourcelocationresponse.h"
#include "deletevodsourcerequest.h"
#include "deletevodsourceresponse.h"
#include "describechannelrequest.h"
#include "describechannelresponse.h"
#include "describeprogramrequest.h"
#include "describeprogramresponse.h"
#include "describesourcelocationrequest.h"
#include "describesourcelocationresponse.h"
#include "describevodsourcerequest.h"
#include "describevodsourceresponse.h"
#include "getchannelpolicyrequest.h"
#include "getchannelpolicyresponse.h"
#include "getchannelschedulerequest.h"
#include "getchannelscheduleresponse.h"
#include "getplaybackconfigurationrequest.h"
#include "getplaybackconfigurationresponse.h"
#include "listchannelsrequest.h"
#include "listchannelsresponse.h"
#include "listplaybackconfigurationsrequest.h"
#include "listplaybackconfigurationsresponse.h"
#include "listsourcelocationsrequest.h"
#include "listsourcelocationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listvodsourcesrequest.h"
#include "listvodsourcesresponse.h"
#include "putchannelpolicyrequest.h"
#include "putchannelpolicyresponse.h"
#include "putplaybackconfigurationrequest.h"
#include "putplaybackconfigurationresponse.h"
#include "startchannelrequest.h"
#include "startchannelresponse.h"
#include "stopchannelrequest.h"
#include "stopchannelresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatechannelrequest.h"
#include "updatechannelresponse.h"
#include "updatesourcelocationrequest.h"
#include "updatesourcelocationresponse.h"
#include "updatevodsourcerequest.h"
#include "updatevodsourceresponse.h"

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
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
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
 * CreateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateChannelResponse * MediaTailorClient::createChannel(const CreateChannelRequest &request)
{
    return qobject_cast<CreateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * CreateProgramResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateProgramResponse * MediaTailorClient::createProgram(const CreateProgramRequest &request)
{
    return qobject_cast<CreateProgramResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * CreateSourceLocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a source location on a specific
 */
CreateSourceLocationResponse * MediaTailorClient::createSourceLocation(const CreateSourceLocationRequest &request)
{
    return qobject_cast<CreateSourceLocationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * CreateVodSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates name for a specific VOD source in a source
 */
CreateVodSourceResponse * MediaTailorClient::createVodSource(const CreateVodSourceRequest &request)
{
    return qobject_cast<CreateVodSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * DeleteChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a channel. You must stop the channel before it can be
 */
DeleteChannelResponse * MediaTailorClient::deleteChannel(const DeleteChannelRequest &request)
{
    return qobject_cast<DeleteChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * DeleteChannelPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a channel's IAM
 */
DeleteChannelPolicyResponse * MediaTailorClient::deleteChannelPolicy(const DeleteChannelPolicyRequest &request)
{
    return qobject_cast<DeleteChannelPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * DeletePlaybackConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the playback configuration for the specified
 */
DeletePlaybackConfigurationResponse * MediaTailorClient::deletePlaybackConfiguration(const DeletePlaybackConfigurationRequest &request)
{
    return qobject_cast<DeletePlaybackConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * DeleteProgramResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific program on a specific
 */
DeleteProgramResponse * MediaTailorClient::deleteProgram(const DeleteProgramRequest &request)
{
    return qobject_cast<DeleteProgramResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * DeleteSourceLocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a source location on a specific
 */
DeleteSourceLocationResponse * MediaTailorClient::deleteSourceLocation(const DeleteSourceLocationRequest &request)
{
    return qobject_cast<DeleteSourceLocationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * DeleteVodSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific VOD source in a specific source
 */
DeleteVodSourceResponse * MediaTailorClient::deleteVodSource(const DeleteVodSourceRequest &request)
{
    return qobject_cast<DeleteVodSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * DescribeChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the properties of a specific
 */
DescribeChannelResponse * MediaTailorClient::describeChannel(const DescribeChannelRequest &request)
{
    return qobject_cast<DescribeChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * DescribeProgramResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the properties of the requested
 */
DescribeProgramResponse * MediaTailorClient::describeProgram(const DescribeProgramRequest &request)
{
    return qobject_cast<DescribeProgramResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * DescribeSourceLocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the properties of the requested source
 */
DescribeSourceLocationResponse * MediaTailorClient::describeSourceLocation(const DescribeSourceLocationRequest &request)
{
    return qobject_cast<DescribeSourceLocationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * DescribeVodSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides details about a specific VOD source in a specific source
 */
DescribeVodSourceResponse * MediaTailorClient::describeVodSource(const DescribeVodSourceRequest &request)
{
    return qobject_cast<DescribeVodSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * GetChannelPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a channel's IAM
 */
GetChannelPolicyResponse * MediaTailorClient::getChannelPolicy(const GetChannelPolicyRequest &request)
{
    return qobject_cast<GetChannelPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * GetChannelScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about your channel's
 */
GetChannelScheduleResponse * MediaTailorClient::getChannelSchedule(const GetChannelScheduleRequest &request)
{
    return qobject_cast<GetChannelScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * GetPlaybackConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the playback configuration for the specified
 */
GetPlaybackConfigurationResponse * MediaTailorClient::getPlaybackConfiguration(const GetPlaybackConfigurationRequest &request)
{
    return qobject_cast<GetPlaybackConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * ListChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of channels that are associated with this
 */
ListChannelsResponse * MediaTailorClient::listChannels(const ListChannelsRequest &request)
{
    return qobject_cast<ListChannelsResponse *>(send(request));
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
 */
ListPlaybackConfigurationsResponse * MediaTailorClient::listPlaybackConfigurations(const ListPlaybackConfigurationsRequest &request)
{
    return qobject_cast<ListPlaybackConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * ListSourceLocationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of source
 */
ListSourceLocationsResponse * MediaTailorClient::listSourceLocations(const ListSourceLocationsRequest &request)
{
    return qobject_cast<ListSourceLocationsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the tags assigned to the specified playback configuration
 */
ListTagsForResourceResponse * MediaTailorClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * ListVodSourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the VOD sources in a source
 */
ListVodSourcesResponse * MediaTailorClient::listVodSources(const ListVodSourcesRequest &request)
{
    return qobject_cast<ListVodSourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * PutChannelPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an IAM policy for the
 */
PutChannelPolicyResponse * MediaTailorClient::putChannelPolicy(const PutChannelPolicyRequest &request)
{
    return qobject_cast<PutChannelPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * PutPlaybackConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new playback configuration to AWS Elemental
 */
PutPlaybackConfigurationResponse * MediaTailorClient::putPlaybackConfiguration(const PutPlaybackConfigurationRequest &request)
{
    return qobject_cast<PutPlaybackConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * StartChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a specific
 */
StartChannelResponse * MediaTailorClient::startChannel(const StartChannelRequest &request)
{
    return qobject_cast<StartChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * StopChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a specific
 */
StopChannelResponse * MediaTailorClient::stopChannel(const StopChannelRequest &request)
{
    return qobject_cast<StopChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to the specified playback configuration resource. You can specify one or more tags to
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
 * Removes tags from the specified playback configuration resource. You can specify one or more tags to
 */
UntagResourceResponse * MediaTailorClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * UpdateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing
 */
UpdateChannelResponse * MediaTailorClient::updateChannel(const UpdateChannelRequest &request)
{
    return qobject_cast<UpdateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * UpdateSourceLocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a source location on a specific
 */
UpdateSourceLocationResponse * MediaTailorClient::updateSourceLocation(const UpdateSourceLocationRequest &request)
{
    return qobject_cast<UpdateSourceLocationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaTailorClient service, and returns a pointer to an
 * UpdateVodSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a specific VOD source in a specific source
 */
UpdateVodSourceResponse * MediaTailorClient::updateVodSource(const UpdateVodSourceRequest &request)
{
    return qobject_cast<UpdateVodSourceResponse *>(send(request));
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
