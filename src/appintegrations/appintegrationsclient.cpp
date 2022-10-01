// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "appintegrationsclient.h"
#include "appintegrationsclient_p.h"

#include "core/awssignaturev4.h"
#include "createdataintegrationrequest.h"
#include "createdataintegrationresponse.h"
#include "createeventintegrationrequest.h"
#include "createeventintegrationresponse.h"
#include "deletedataintegrationrequest.h"
#include "deletedataintegrationresponse.h"
#include "deleteeventintegrationrequest.h"
#include "deleteeventintegrationresponse.h"
#include "getdataintegrationrequest.h"
#include "getdataintegrationresponse.h"
#include "geteventintegrationrequest.h"
#include "geteventintegrationresponse.h"
#include "listdataintegrationassociationsrequest.h"
#include "listdataintegrationassociationsresponse.h"
#include "listdataintegrationsrequest.h"
#include "listdataintegrationsresponse.h"
#include "listeventintegrationassociationsrequest.h"
#include "listeventintegrationassociationsresponse.h"
#include "listeventintegrationsrequest.h"
#include "listeventintegrationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedataintegrationrequest.h"
#include "updatedataintegrationresponse.h"
#include "updateeventintegrationrequest.h"
#include "updateeventintegrationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AppIntegrations
 * \brief Contains classess for accessing Amazon AppIntegrations Service.
 *
 * \inmodule QtAwsAppIntegrations
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::AppIntegrationsClient
 * \brief The AppIntegrationsClient class provides access to the Amazon AppIntegrations Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppIntegrations
 *
 *  The Amazon AppIntegrations service enables you to configure and reuse connections to external
 * 
 *  applications>
 * 
 *  For information about how you can use external applications with Amazon Connect, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/crm.html">Set up pre-built integrations</a> and <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-wisdom.html">Deliver information to agents
 *  using Amazon Connect Wisdom</a> in the <i>Amazon Connect Administrator
 */

/*!
 * \brief Constructs a AppIntegrationsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AppIntegrationsClient::AppIntegrationsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppIntegrationsClientPrivate(this), parent)
{
    Q_D(AppIntegrationsClient);
    d->apiVersion = QStringLiteral("2020-07-29");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("app-integrations");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon AppIntegrations Service");
    d->serviceName = QStringLiteral("app-integrations");
}

/*!
 * \overload AppIntegrationsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AppIntegrationsClient::AppIntegrationsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppIntegrationsClientPrivate(this), parent)
{
    Q_D(AppIntegrationsClient);
    d->apiVersion = QStringLiteral("2020-07-29");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("app-integrations");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon AppIntegrations Service");
    d->serviceName = QStringLiteral("app-integrations");
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * CreateDataIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and persists a DataIntegration
 *
 * resource> <note>
 *
 * You cannot create a DataIntegration association for a DataIntegration that has been previously associated. Use a
 * different DataIntegration, or recreate the DataIntegration using the <code>CreateDataIntegration</code>
 */
CreateDataIntegrationResponse * AppIntegrationsClient::createDataIntegration(const CreateDataIntegrationRequest &request)
{
    return qobject_cast<CreateDataIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * CreateEventIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an EventIntegration, given a specified name, description, and a reference to an Amazon EventBridge bus in your
 * account and a partner event source that pushes events to that bus. No objects are created in the your account, only
 * metadata that is persisted on the EventIntegration control
 */
CreateEventIntegrationResponse * AppIntegrationsClient::createEventIntegration(const CreateEventIntegrationRequest &request)
{
    return qobject_cast<CreateEventIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * DeleteDataIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the DataIntegration. Only DataIntegrations that don't have any DataIntegrationAssociations can be deleted.
 * Deleting a DataIntegration also deletes the underlying Amazon AppFlow flow and service linked role.
 *
 * </p <note>
 *
 * You cannot create a DataIntegration association for a DataIntegration that has been previously associated. Use a
 * different DataIntegration, or recreate the DataIntegration using the <a
 * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
 */
DeleteDataIntegrationResponse * AppIntegrationsClient::deleteDataIntegration(const DeleteDataIntegrationRequest &request)
{
    return qobject_cast<DeleteDataIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * DeleteEventIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified existing event integration. If the event integration is associated with clients, the request is
 */
DeleteEventIntegrationResponse * AppIntegrationsClient::deleteEventIntegration(const DeleteEventIntegrationRequest &request)
{
    return qobject_cast<DeleteEventIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * GetDataIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the
 *
 * DataIntegration> <note>
 *
 * You cannot create a DataIntegration association for a DataIntegration that has been previously associated. Use a
 * different DataIntegration, or recreate the DataIntegration using the <a
 * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
 */
GetDataIntegrationResponse * AppIntegrationsClient::getDataIntegration(const GetDataIntegrationRequest &request)
{
    return qobject_cast<GetDataIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * GetEventIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the event
 */
GetEventIntegrationResponse * AppIntegrationsClient::getEventIntegration(const GetEventIntegrationRequest &request)
{
    return qobject_cast<GetEventIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * ListDataIntegrationAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of DataIntegration associations in the
 *
 * account> <note>
 *
 * You cannot create a DataIntegration association for a DataIntegration that has been previously associated. Use a
 * different DataIntegration, or recreate the DataIntegration using the <a
 * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
 */
ListDataIntegrationAssociationsResponse * AppIntegrationsClient::listDataIntegrationAssociations(const ListDataIntegrationAssociationsRequest &request)
{
    return qobject_cast<ListDataIntegrationAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * ListDataIntegrationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of DataIntegrations in the
 *
 * account> <note>
 *
 * You cannot create a DataIntegration association for a DataIntegration that has been previously associated. Use a
 * different DataIntegration, or recreate the DataIntegration using the <a
 * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
 */
ListDataIntegrationsResponse * AppIntegrationsClient::listDataIntegrations(const ListDataIntegrationsRequest &request)
{
    return qobject_cast<ListDataIntegrationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * ListEventIntegrationAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of event integration associations in the account.
 */
ListEventIntegrationAssociationsResponse * AppIntegrationsClient::listEventIntegrationAssociations(const ListEventIntegrationAssociationsRequest &request)
{
    return qobject_cast<ListEventIntegrationAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * ListEventIntegrationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of event integrations in the
 */
ListEventIntegrationsResponse * AppIntegrationsClient::listEventIntegrations(const ListEventIntegrationsRequest &request)
{
    return qobject_cast<ListEventIntegrationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * AppIntegrationsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified
 */
TagResourceResponse * AppIntegrationsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified
 */
UntagResourceResponse * AppIntegrationsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * UpdateDataIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the description of a
 *
 * DataIntegration> <note>
 *
 * You cannot create a DataIntegration association for a DataIntegration that has been previously associated. Use a
 * different DataIntegration, or recreate the DataIntegration using the <a
 * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
 */
UpdateDataIntegrationResponse * AppIntegrationsClient::updateDataIntegration(const UpdateDataIntegrationRequest &request)
{
    return qobject_cast<UpdateDataIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsClient service, and returns a pointer to an
 * UpdateEventIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the description of an event
 */
UpdateEventIntegrationResponse * AppIntegrationsClient::updateEventIntegration(const UpdateEventIntegrationRequest &request)
{
    return qobject_cast<UpdateEventIntegrationResponse *>(send(request));
}

/*!
 * \class QtAws::AppIntegrations::AppIntegrationsClientPrivate
 * \brief The AppIntegrationsClientPrivate class provides private implementation for AppIntegrationsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a AppIntegrationsClientPrivate object with public implementation \a q.
 */
AppIntegrationsClientPrivate::AppIntegrationsClientPrivate(AppIntegrationsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AppIntegrations
} // namespace QtAws
