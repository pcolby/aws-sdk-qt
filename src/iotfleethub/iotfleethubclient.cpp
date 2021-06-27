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

#include "iotfleethubclient.h"
#include "iotfleethubclient_p.h"

#include "core/awssignaturev4.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "describeapplicationrequest.h"
#include "describeapplicationresponse.h"
#include "listapplicationsrequest.h"
#include "listapplicationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTFleetHub
 * \brief Contains classess for accessing AWS IoT Fleet Hub.
 *
 * \inmodule QtAwsIoTFleetHub
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::IoTFleetHubClient
 * \brief The IoTFleetHubClient class provides access to the AWS IoT Fleet Hub service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTFleetHub
 *
 *  With Fleet Hub for AWS IoT Device Management you can build stand-alone web applications for monitoring the health of
 *  your device
 * 
 *  fleets> <note>
 * 
 *  Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 */

/*!
 * \brief Constructs a IoTFleetHubClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTFleetHubClient::IoTFleetHubClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-11-03"),
    QStringLiteral("api.fleethub.iot"),
    QStringLiteral("AWS IoT Fleet Hub"),
    QStringLiteral("iotfleethub"),
    parent), d_ptr(new IoTFleetHubClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload IoTFleetHubClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTFleetHubClient::IoTFleetHubClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-11-03"),
    QStringLiteral("api.fleethub.iot"),
    QStringLiteral("AWS IoT Fleet Hub"),
    QStringLiteral("iotfleethub"),
    parent), d_ptr(new IoTFleetHubClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the IoTFleetHubClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Fleet Hub for AWS IoT Device Management web
 *
 * application> <note>
 *
 * Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 */
CreateApplicationResponse * IoTFleetHubClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTFleetHubClient service, and returns a pointer to an
 * DeleteApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Fleet Hub for AWS IoT Device Management web
 *
 * application> <note>
 *
 * Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 */
DeleteApplicationResponse * IoTFleetHubClient::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTFleetHubClient service, and returns a pointer to an
 * DescribeApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Fleet Hub for AWS IoT Device Management web
 *
 * application> <note>
 *
 * Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 */
DescribeApplicationResponse * IoTFleetHubClient::describeApplication(const DescribeApplicationRequest &request)
{
    return qobject_cast<DescribeApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTFleetHubClient service, and returns a pointer to an
 * ListApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of Fleet Hub for AWS IoT Device Management web applications for the current
 *
 * account> <note>
 *
 * Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 */
ListApplicationsResponse * IoTFleetHubClient::listApplications(const ListApplicationsRequest &request)
{
    return qobject_cast<ListApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTFleetHubClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 *
 * resource> <note>
 *
 * Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 */
ListTagsForResourceResponse * IoTFleetHubClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTFleetHubClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds to or modifies the tags of the specified resource. Tags are metadata which can be used to manage a
 *
 * resource> <note>
 *
 * Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 */
TagResourceResponse * IoTFleetHubClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTFleetHubClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags (metadata) from the
 *
 * resource> <note>
 *
 * Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 */
UntagResourceResponse * IoTFleetHubClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTFleetHubClient service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates information about a Fleet Hub for a AWS IoT Device Management web
 *
 * application> <note>
 *
 * Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 */
UpdateApplicationResponse * IoTFleetHubClient::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * \class QtAws::IoTFleetHub::IoTFleetHubClientPrivate
 * \brief The IoTFleetHubClientPrivate class provides private implementation for IoTFleetHubClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a IoTFleetHubClientPrivate object with public implementation \a q.
 */
IoTFleetHubClientPrivate::IoTFleetHubClientPrivate(IoTFleetHubClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace IoTFleetHub
} // namespace QtAws
