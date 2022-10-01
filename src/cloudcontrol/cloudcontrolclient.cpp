// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudcontrolclient.h"
#include "cloudcontrolclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelresourcerequestrequest.h"
#include "cancelresourcerequestresponse.h"
#include "createresourcerequest.h"
#include "createresourceresponse.h"
#include "deleteresourcerequest.h"
#include "deleteresourceresponse.h"
#include "getresourcerequest.h"
#include "getresourceresponse.h"
#include "getresourcerequeststatusrequest.h"
#include "getresourcerequeststatusresponse.h"
#include "listresourcerequestsrequest.h"
#include "listresourcerequestsresponse.h"
#include "listresourcesrequest.h"
#include "listresourcesresponse.h"
#include "updateresourcerequest.h"
#include "updateresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudControl
 * \brief Contains classess for accessing AWS Cloud Control API.
 *
 * \inmodule QtAwsCloudControl
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::CloudControlClient
 * \brief The CloudControlClient class provides access to the AWS Cloud Control API service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 */

/*!
 * \brief Constructs a CloudControlClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudControlClient::CloudControlClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudControlClientPrivate(this), parent)
{
    Q_D(CloudControlClient);
    d->apiVersion = QStringLiteral("2021-09-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cloudcontrolapi");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Cloud Control API");
    d->serviceName = QStringLiteral("cloudcontrolapi");
}

/*!
 * \overload CloudControlClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudControlClient::CloudControlClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudControlClientPrivate(this), parent)
{
    Q_D(CloudControlClient);
    d->apiVersion = QStringLiteral("2021-09-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cloudcontrolapi");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Cloud Control API");
    d->serviceName = QStringLiteral("cloudcontrolapi");
}

/*!
 * Sends \a request to the CloudControlClient service, and returns a pointer to an
 * CancelResourceRequestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the specified resource operation request. For more information, see <a
 * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-cancel">Canceling
 * resource operation requests</a> in the <i>Amazon Web Services Cloud Control API User
 *
 * Guide</i>>
 *
 * Only resource operations requests with a status of <code>PENDING</code> or <code>IN_PROGRESS</code> can be
 */
CancelResourceRequestResponse * CloudControlClient::cancelResourceRequest(const CancelResourceRequestRequest &request)
{
    return qobject_cast<CancelResourceRequestResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudControlClient service, and returns a pointer to an
 * CreateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the specified resource. For more information, see <a
 * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-create.html">Creating a
 * resource</a> in the <i>Amazon Web Services Cloud Control API User
 *
 * Guide</i>>
 *
 * After you have initiated a resource creation request, you can monitor the progress of your request by calling <a
 * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
 * using the <code>RequestToken</code> of the <code>ProgressEvent</code> type returned by
 */
CreateResourceResponse * CloudControlClient::createResource(const CreateResourceRequest &request)
{
    return qobject_cast<CreateResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudControlClient service, and returns a pointer to an
 * DeleteResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified resource. For details, see <a
 * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-delete.html">Deleting a
 * resource</a> in the <i>Amazon Web Services Cloud Control API User
 *
 * Guide</i>>
 *
 * After you have initiated a resource deletion request, you can monitor the progress of your request by calling <a
 * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
 * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned by
 */
DeleteResourceResponse * CloudControlClient::deleteResource(const DeleteResourceRequest &request)
{
    return qobject_cast<DeleteResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudControlClient service, and returns a pointer to an
 * GetResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the current state of the specified resource. For details, see <a
 * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-read.html">Reading a resource's
 * current
 *
 * state</a>>
 *
 * You can use this action to return information about an existing resource in your account and Amazon Web Services Region,
 * whether those resources were provisioned using Cloud Control
 */
GetResourceResponse * CloudControlClient::getResource(const GetResourceRequest &request)
{
    return qobject_cast<GetResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudControlClient service, and returns a pointer to an
 * GetResourceRequestStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the current status of a resource operation request. For more information, see <a
 * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-track">Tracking
 * the progress of resource operation requests</a> in the <i>Amazon Web Services Cloud Control API User
 */
GetResourceRequestStatusResponse * CloudControlClient::getResourceRequestStatus(const GetResourceRequestStatusRequest &request)
{
    return qobject_cast<GetResourceRequestStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudControlClient service, and returns a pointer to an
 * ListResourceRequestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns existing resource operation requests. This includes requests of all status types. For more information, see <a
 * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-list">Listing
 * active resource operation requests</a> in the <i>Amazon Web Services Cloud Control API User
 *
 * Guide</i>> <note>
 *
 * Resource operation requests expire after 7
 */
ListResourceRequestsResponse * CloudControlClient::listResourceRequests(const ListResourceRequestsRequest &request)
{
    return qobject_cast<ListResourceRequestsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudControlClient service, and returns a pointer to an
 * ListResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified resources. For more information, see <a
 * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-list.html">Discovering
 * resources</a> in the <i>Amazon Web Services Cloud Control API User
 *
 * Guide</i>>
 *
 * You can use this action to return information about existing resources in your account and Amazon Web Services Region,
 * whether those resources were provisioned using Cloud Control
 */
ListResourcesResponse * CloudControlClient::listResources(const ListResourcesRequest &request)
{
    return qobject_cast<ListResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudControlClient service, and returns a pointer to an
 * UpdateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified property values in the
 *
 * resource>
 *
 * You specify your resource property updates as a list of patch operations contained in a JSON patch document that adheres
 * to the <a href="https://datatracker.ietf.org/doc/html/rfc6902"> <i>RFC 6902 - JavaScript Object Notation (JSON)
 * Patch</i> </a>
 *
 * standard>
 *
 * For details on how Cloud Control API performs resource update operations, see <a
 * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-update.html">Updating a
 * resource</a> in the <i>Amazon Web Services Cloud Control API User
 *
 * Guide</i>>
 *
 * After you have initiated a resource update request, you can monitor the progress of your request by calling <a
 * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
 * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned by
 *
 * <code>UpdateResource</code>>
 *
 * For more information about the properties of a specific resource, refer to the related topic for the resource in the <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Resource and
 * property types reference</a> in the <i>CloudFormation Users
 */
UpdateResourceResponse * CloudControlClient::updateResource(const UpdateResourceRequest &request)
{
    return qobject_cast<UpdateResourceResponse *>(send(request));
}

/*!
 * \class QtAws::CloudControl::CloudControlClientPrivate
 * \brief The CloudControlClientPrivate class provides private implementation for CloudControlClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a CloudControlClientPrivate object with public implementation \a q.
 */
CloudControlClientPrivate::CloudControlClientPrivate(CloudControlClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudControl
} // namespace QtAws
