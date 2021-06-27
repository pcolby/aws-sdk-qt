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

#include "appintegrationsserviceclient.h"
#include "appintegrationsserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "createeventintegrationrequest.h"
#include "createeventintegrationresponse.h"
#include "deleteeventintegrationrequest.h"
#include "deleteeventintegrationresponse.h"
#include "geteventintegrationrequest.h"
#include "geteventintegrationresponse.h"
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
#include "updateeventintegrationrequest.h"
#include "updateeventintegrationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AppIntegrationsService
 * \brief Contains classess for accessing Amazon AppIntegrations Service.
 *
 * \inmodule QtAwsAppIntegrationsService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AppIntegrationsService {

/*!
 * \class QtAws::AppIntegrationsService::AppIntegrationsServiceClient
 * \brief The AppIntegrationsServiceClient class provides access to the Amazon AppIntegrations Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppIntegrationsService
 *
 *  The Amazon AppIntegrations APIs are in preview release and are subject to
 * 
 *  change>
 * 
 *  The Amazon AppIntegrations service enables you to configure and reuse connections to external
 * 
 *  applications>
 * 
 *  For information about how you can use external applications with Amazon Connect, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/crm.html">Set up pre-built integrations</a> in the <i>Amazon
 *  Connect Administrator
 */

/*!
 * \brief Constructs a AppIntegrationsServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AppIntegrationsServiceClient::AppIntegrationsServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-07-29"),
    QStringLiteral("app-integrations"),
    QStringLiteral("Amazon AppIntegrations Service"),
    QStringLiteral("app-integrations"),
    parent), d_ptr(new AppIntegrationsServiceClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload AppIntegrationsServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AppIntegrationsServiceClient::AppIntegrationsServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-07-29"),
    QStringLiteral("app-integrations"),
    QStringLiteral("Amazon AppIntegrations Service"),
    QStringLiteral("app-integrations"),
    parent), d_ptr(new AppIntegrationsServiceClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the AppIntegrationsServiceClient service, and returns a pointer to an
 * CreateEventIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The Amazon AppIntegrations APIs are in preview release and are subject to
 *
 * change>
 *
 * Creates an EventIntegration, given a specified name, description, and a reference to an Amazon Eventbridge bus in your
 * account and a partner event source that will push events to that bus. No objects are created in the your account, only
 * metadata that is persisted on the EventIntegration control
 */
CreateEventIntegrationResponse * AppIntegrationsServiceClient::createEventIntegration(const CreateEventIntegrationRequest &request)
{
    return qobject_cast<CreateEventIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsServiceClient service, and returns a pointer to an
 * DeleteEventIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The Amazon AppIntegrations APIs are in preview release and are subject to
 *
 * change>
 *
 * Deletes the specified existing event integration. If the event integration is associated with clients, the request is
 */
DeleteEventIntegrationResponse * AppIntegrationsServiceClient::deleteEventIntegration(const DeleteEventIntegrationRequest &request)
{
    return qobject_cast<DeleteEventIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsServiceClient service, and returns a pointer to an
 * GetEventIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The Amazon AppIntegrations APIs are in preview release and are subject to
 *
 * change>
 *
 * Return information about the event
 */
GetEventIntegrationResponse * AppIntegrationsServiceClient::getEventIntegration(const GetEventIntegrationRequest &request)
{
    return qobject_cast<GetEventIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsServiceClient service, and returns a pointer to an
 * ListEventIntegrationAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The Amazon AppIntegrations APIs are in preview release and are subject to
 *
 * change>
 *
 * Returns a paginated list of event integration associations in the account.
 */
ListEventIntegrationAssociationsResponse * AppIntegrationsServiceClient::listEventIntegrationAssociations(const ListEventIntegrationAssociationsRequest &request)
{
    return qobject_cast<ListEventIntegrationAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsServiceClient service, and returns a pointer to an
 * ListEventIntegrationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The Amazon AppIntegrations APIs are in preview release and are subject to
 *
 * change>
 *
 * Returns a paginated list of event integrations in the
 */
ListEventIntegrationsResponse * AppIntegrationsServiceClient::listEventIntegrations(const ListEventIntegrationsRequest &request)
{
    return qobject_cast<ListEventIntegrationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsServiceClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The Amazon AppIntegrations APIs are in preview release and are subject to
 *
 * change>
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * AppIntegrationsServiceClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsServiceClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The Amazon AppIntegrations APIs are in preview release and are subject to
 *
 * change>
 *
 * Adds the specified tags to the specified
 */
TagResourceResponse * AppIntegrationsServiceClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsServiceClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The Amazon AppIntegrations APIs are in preview release and are subject to
 *
 * change>
 *
 * Removes the specified tags from the specified
 */
UntagResourceResponse * AppIntegrationsServiceClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppIntegrationsServiceClient service, and returns a pointer to an
 * UpdateEventIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The Amazon AppIntegrations APIs are in preview release and are subject to
 *
 * change>
 *
 * Updates the description of an event
 */
UpdateEventIntegrationResponse * AppIntegrationsServiceClient::updateEventIntegration(const UpdateEventIntegrationRequest &request)
{
    return qobject_cast<UpdateEventIntegrationResponse *>(send(request));
}

/*!
 * \class QtAws::AppIntegrationsService::AppIntegrationsServiceClientPrivate
 * \brief The AppIntegrationsServiceClientPrivate class provides private implementation for AppIntegrationsServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a AppIntegrationsServiceClientPrivate object with public implementation \a q.
 */
AppIntegrationsServiceClientPrivate::AppIntegrationsServiceClientPrivate(AppIntegrationsServiceClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace AppIntegrationsService
} // namespace QtAws
