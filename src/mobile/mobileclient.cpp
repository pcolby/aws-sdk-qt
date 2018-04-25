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

#include "mobileclient.h"
#include "mobileclient_p.h"

#include "core/awssignaturev4.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "describebundlerequest.h"
#include "describebundleresponse.h"
#include "describeprojectrequest.h"
#include "describeprojectresponse.h"
#include "exportbundlerequest.h"
#include "exportbundleresponse.h"
#include "exportprojectrequest.h"
#include "exportprojectresponse.h"
#include "listbundlesrequest.h"
#include "listbundlesresponse.h"
#include "listprojectsrequest.h"
#include "listprojectsresponse.h"
#include "updateprojectrequest.h"
#include "updateprojectresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Mobile
 * \brief The QtAws::Mobile contains stuff...
 *
 * \inmodule QtAwsMobile
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::MobileClient
 * \brief The MobileClient class provides access to the AWS Mobile service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 */

/*!
 * \brief Constructs a MobileClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MobileClient::MobileClient(
    const QtAws::Core::AwsRegion::Region region,
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

/*!
 * \overload MobileClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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

/*!
 * Sends \a request to the MobileClient service, and returns a pointer to an
 * CreateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS Mobile Hub project.
 */
CreateProjectResponse * MobileClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the MobileClient service, and returns a pointer to an
 * DeleteProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delets a project in AWS Mobile Hub.
 */
DeleteProjectResponse * MobileClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the MobileClient service, and returns a pointer to an
 * DescribeBundleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the bundle details for the requested bundle id.
 */
DescribeBundleResponse * MobileClient::describeBundle(const DescribeBundleRequest &request)
{
    return qobject_cast<DescribeBundleResponse *>(send(request));
}

/*!
 * Sends \a request to the MobileClient service, and returns a pointer to an
 * DescribeProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about a project in AWS Mobile Hub.
 */
DescribeProjectResponse * MobileClient::describeProject(const DescribeProjectRequest &request)
{
    return qobject_cast<DescribeProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the MobileClient service, and returns a pointer to an
 * ExportBundleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates customized software development kit (SDK) and or tool packages used to integrate mobile web or mobile app
 * clients with backend AWS resources.
 */
ExportBundleResponse * MobileClient::exportBundle(const ExportBundleRequest &request)
{
    return qobject_cast<ExportBundleResponse *>(send(request));
}

/*!
 * Sends \a request to the MobileClient service, and returns a pointer to an
 * ExportProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports project configuration to a snapshot which can be downloaded and shared. Note that mobile app push credentials
 * are encrypted in exported projects, so they can only be shared successfully within the same AWS account.
 */
ExportProjectResponse * MobileClient::exportProject(const ExportProjectRequest &request)
{
    return qobject_cast<ExportProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the MobileClient service, and returns a pointer to an
 * ListBundlesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all available bundles.
 */
ListBundlesResponse * MobileClient::listBundles(const ListBundlesRequest &request)
{
    return qobject_cast<ListBundlesResponse *>(send(request));
}

/*!
 * Sends \a request to the MobileClient service, and returns a pointer to an
 * ListProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists projects in AWS Mobile Hub.
 */
ListProjectsResponse * MobileClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the MobileClient service, and returns a pointer to an
 * UpdateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an existing project.
 */
UpdateProjectResponse * MobileClient::updateProject(const UpdateProjectRequest &request)
{
    return qobject_cast<UpdateProjectResponse *>(send(request));
}

/*!
 * \class QtAws::Mobile::MobileClientPrivate
 * \brief The MobileClientPrivate class provides private implementation for MobileClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a MobileClientPrivate object with public implementation \a q.
 */
MobileClientPrivate::MobileClientPrivate(MobileClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Mobile
} // namespace QtAws
