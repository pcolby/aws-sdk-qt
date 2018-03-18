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

#include "mobileclient.h"
#include "mobileclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Mobile {

/**
 * @class  MobileClient
 *
 * @brief  Client for AWS Mobile
 *
 * AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 * bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 * resources.
 */

/**
 * @brief  Constructs a new MobileClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
MobileClient::MobileClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MobileClientPrivate(this), parent)
{
    Q_D(MobileClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new MobileClient object.
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
MobileClient::MobileClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MobileClientPrivate(this), parent)
{
    Q_D(MobileClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Creates an AWS Mobile Hub project.
 */
CreateProjectResponse * MobileClient::createProject(const CreateProjectRequest &request)
{

}

/**
 * Delets a project in AWS Mobile Hub.
 */
DeleteProjectResponse * MobileClient::deleteProject(const DeleteProjectRequest &request)
{

}

/**
 * Get the bundle details for the requested bundle id.
 */
DescribeBundleResponse * MobileClient::describeBundle(const DescribeBundleRequest &request)
{

}

/**
 * Gets details about a project in AWS Mobile Hub.
 */
DescribeProjectResponse * MobileClient::describeProject(const DescribeProjectRequest &request)
{

}

/**
 * Generates customized software development kit (SDK) and or tool packages used to integrate mobile web or mobile app
 * clients with backend AWS resources.
 */
ExportBundleResponse * MobileClient::exportBundle(const ExportBundleRequest &request)
{

}

/**
 * Exports project configuration to a snapshot which can be downloaded and shared. Note that mobile app push credentials
 * are encrypted in exported projects, so they can only be shared successfully within the same AWS account.
 */
ExportProjectResponse * MobileClient::exportProject(const ExportProjectRequest &request)
{

}

/**
 * List all available bundles.
 */
ListBundlesResponse * MobileClient::listBundles(const ListBundlesRequest &request)
{

}

/**
 * Lists projects in AWS Mobile Hub.
 */
ListProjectsResponse * MobileClient::listProjects(const ListProjectsRequest &request)
{

}

/**
 * Update an existing project.
 */
UpdateProjectResponse * MobileClient::updateProject(const UpdateProjectRequest &request)
{

}

/**
 * @internal
 *
 * @class  MobileClientPrivate
 *
 * @brief  Private implementation for MobileClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MobileClientPrivate object.
 *
 * @param  q  Pointer to this object's public MobileClient instance.
 */
MobileClientPrivate::MobileClientPrivate(MobileClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Mobile
} // namespace AWS
