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

#include "mobileclient.h"
#include "mobileclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
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
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MobileClientPrivate(this), parent)
{
    Q_D(MobileClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("mobile");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Mobile");
    d->serviceName = QStringLiteral("AWSMobileHubService");
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
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MobileClientPrivate(this), parent)
{
    Q_D(MobileClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("mobile");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Mobile");
    d->serviceName = QStringLiteral("AWSMobileHubService");
}

/**
 * Creates an AWS Mobile Hub project.
 *
 * @param  request Request to send to AWS Mobile.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProjectResponse * MobileClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/**
 * Delets a project in AWS Mobile Hub.
 *
 * @param  request Request to send to AWS Mobile.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProjectResponse * MobileClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/**
 * Get the bundle details for the requested bundle id.
 *
 * @param  request Request to send to AWS Mobile.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeBundleResponse * MobileClient::describeBundle(const DescribeBundleRequest &request)
{
    return qobject_cast<DescribeBundleResponse *>(send(request));
}

/**
 * Gets details about a project in AWS Mobile Hub.
 *
 * @param  request Request to send to AWS Mobile.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProjectResponse * MobileClient::describeProject(const DescribeProjectRequest &request)
{
    return qobject_cast<DescribeProjectResponse *>(send(request));
}

/**
 * Generates customized software development kit (SDK) and or tool packages used to integrate mobile web or mobile app
 * clients with backend AWS resources.
 *
 * @param  request Request to send to AWS Mobile.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ExportBundleResponse * MobileClient::exportBundle(const ExportBundleRequest &request)
{
    return qobject_cast<ExportBundleResponse *>(send(request));
}

/**
 * Exports project configuration to a snapshot which can be downloaded and shared. Note that mobile app push credentials
 * are encrypted in exported projects, so they can only be shared successfully within the same AWS account.
 *
 * @param  request Request to send to AWS Mobile.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ExportProjectResponse * MobileClient::exportProject(const ExportProjectRequest &request)
{
    return qobject_cast<ExportProjectResponse *>(send(request));
}

/**
 * List all available bundles.
 *
 * @param  request Request to send to AWS Mobile.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListBundlesResponse * MobileClient::listBundles(const ListBundlesRequest &request)
{
    return qobject_cast<ListBundlesResponse *>(send(request));
}

/**
 * Lists projects in AWS Mobile Hub.
 *
 * @param  request Request to send to AWS Mobile.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListProjectsResponse * MobileClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/**
 * Update an existing project.
 *
 * @param  request Request to send to AWS Mobile.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateProjectResponse * MobileClient::updateProject(const UpdateProjectRequest &request)
{
    return qobject_cast<UpdateProjectResponse *>(send(request));
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
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Mobile
} // namespace QtAws
