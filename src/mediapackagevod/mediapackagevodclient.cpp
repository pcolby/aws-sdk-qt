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

#include "mediapackagevodclient.h"
#include "mediapackagevodclient_p.h"

#include "core/awssignaturev4.h"
#include "configurelogsrequest.h"
#include "configurelogsresponse.h"
#include "createassetrequest.h"
#include "createassetresponse.h"
#include "createpackagingconfigurationrequest.h"
#include "createpackagingconfigurationresponse.h"
#include "createpackaginggrouprequest.h"
#include "createpackaginggroupresponse.h"
#include "deleteassetrequest.h"
#include "deleteassetresponse.h"
#include "deletepackagingconfigurationrequest.h"
#include "deletepackagingconfigurationresponse.h"
#include "deletepackaginggrouprequest.h"
#include "deletepackaginggroupresponse.h"
#include "describeassetrequest.h"
#include "describeassetresponse.h"
#include "describepackagingconfigurationrequest.h"
#include "describepackagingconfigurationresponse.h"
#include "describepackaginggrouprequest.h"
#include "describepackaginggroupresponse.h"
#include "listassetsrequest.h"
#include "listassetsresponse.h"
#include "listpackagingconfigurationsrequest.h"
#include "listpackagingconfigurationsresponse.h"
#include "listpackaginggroupsrequest.h"
#include "listpackaginggroupsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatepackaginggrouprequest.h"
#include "updatepackaginggroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MediaPackageVod
 * \brief Contains classess for accessing AWS Elemental MediaPackage VOD (MediaPackage Vod).
 *
 * \inmodule QtAwsMediaPackageVod
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::MediaPackageVodClient
 * \brief The MediaPackageVodClient class provides access to the AWS Elemental MediaPackage VOD (MediaPackage Vod) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaPackageVod
 *
 */

/*!
 * \brief Constructs a MediaPackageVodClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MediaPackageVodClient::MediaPackageVodClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-11-07"),
    QStringLiteral("mediapackage-vod"),
    QStringLiteral("AWS Elemental MediaPackage VOD"),
    QStringLiteral("mediapackage-vod"),
    parent), d_ptr(new MediaPackageVodClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload MediaPackageVodClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MediaPackageVodClient::MediaPackageVodClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-11-07"),
    QStringLiteral("mediapackage-vod"),
    QStringLiteral("AWS Elemental MediaPackage VOD"),
    QStringLiteral("mediapackage-vod"),
    parent), d_ptr(new MediaPackageVodClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * ConfigureLogsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ConfigureLogsResponse * MediaPackageVodClient::configureLogs(const ConfigureLogsRequest &request)
{
    return qobject_cast<ConfigureLogsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * CreateAssetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateAssetResponse * MediaPackageVodClient::createAsset(const CreateAssetRequest &request)
{
    return qobject_cast<CreateAssetResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * CreatePackagingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreatePackagingConfigurationResponse * MediaPackageVodClient::createPackagingConfiguration(const CreatePackagingConfigurationRequest &request)
{
    return qobject_cast<CreatePackagingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * CreatePackagingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreatePackagingGroupResponse * MediaPackageVodClient::createPackagingGroup(const CreatePackagingGroupRequest &request)
{
    return qobject_cast<CreatePackagingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * DeleteAssetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteAssetResponse * MediaPackageVodClient::deleteAsset(const DeleteAssetRequest &request)
{
    return qobject_cast<DeleteAssetResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * DeletePackagingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeletePackagingConfigurationResponse * MediaPackageVodClient::deletePackagingConfiguration(const DeletePackagingConfigurationRequest &request)
{
    return qobject_cast<DeletePackagingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * DeletePackagingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeletePackagingGroupResponse * MediaPackageVodClient::deletePackagingGroup(const DeletePackagingGroupRequest &request)
{
    return qobject_cast<DeletePackagingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * DescribeAssetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeAssetResponse * MediaPackageVodClient::describeAsset(const DescribeAssetRequest &request)
{
    return qobject_cast<DescribeAssetResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * DescribePackagingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribePackagingConfigurationResponse * MediaPackageVodClient::describePackagingConfiguration(const DescribePackagingConfigurationRequest &request)
{
    return qobject_cast<DescribePackagingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * DescribePackagingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribePackagingGroupResponse * MediaPackageVodClient::describePackagingGroup(const DescribePackagingGroupRequest &request)
{
    return qobject_cast<DescribePackagingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * ListAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListAssetsResponse * MediaPackageVodClient::listAssets(const ListAssetsRequest &request)
{
    return qobject_cast<ListAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * ListPackagingConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListPackagingConfigurationsResponse * MediaPackageVodClient::listPackagingConfigurations(const ListPackagingConfigurationsRequest &request)
{
    return qobject_cast<ListPackagingConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * ListPackagingGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListPackagingGroupsResponse * MediaPackageVodClient::listPackagingGroups(const ListPackagingGroupsRequest &request)
{
    return qobject_cast<ListPackagingGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListTagsForResourceResponse * MediaPackageVodClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
TagResourceResponse * MediaPackageVodClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UntagResourceResponse * MediaPackageVodClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageVodClient service, and returns a pointer to an
 * UpdatePackagingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdatePackagingGroupResponse * MediaPackageVodClient::updatePackagingGroup(const UpdatePackagingGroupRequest &request)
{
    return qobject_cast<UpdatePackagingGroupResponse *>(send(request));
}

/*!
 * \class QtAws::MediaPackageVod::MediaPackageVodClientPrivate
 * \brief The MediaPackageVodClientPrivate class provides private implementation for MediaPackageVodClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a MediaPackageVodClientPrivate object with public implementation \a q.
 */
MediaPackageVodClientPrivate::MediaPackageVodClientPrivate(MediaPackageVodClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace MediaPackageVod
} // namespace QtAws
