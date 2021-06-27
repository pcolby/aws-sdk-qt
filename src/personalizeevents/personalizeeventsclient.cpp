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

#include "personalizeeventsclient.h"
#include "personalizeeventsclient_p.h"

#include "core/awssignaturev4.h"
#include "puteventsrequest.h"
#include "puteventsresponse.h"
#include "putitemsrequest.h"
#include "putitemsresponse.h"
#include "putusersrequest.h"
#include "putusersresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::PersonalizeEvents
 * \brief Contains classess for accessing Amazon Personalize Events.
 *
 * \inmodule QtAwsPersonalizeEvents
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace PersonalizeEvents {

/*!
 * \class QtAws::PersonalizeEvents::PersonalizeEventsClient
 * \brief The PersonalizeEventsClient class provides access to the Amazon Personalize Events service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPersonalizeEvents
 *
 *  Amazon Personalize can consume real-time user event data, such as <i>stream</i> or <i>click</i> data, and use it for
 *  model training either alone or combined with historical data. For more information see <a
 *  href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
 */

/*!
 * \brief Constructs a PersonalizeEventsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PersonalizeEventsClient::PersonalizeEventsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-03-22"),
    QStringLiteral("personalize-events"),
    QStringLiteral("Amazon Personalize Events"),
    QStringLiteral("personalize"),
    parent), d_ptr(new PersonalizeEventsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload PersonalizeEventsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PersonalizeEventsClient::PersonalizeEventsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-03-22"),
    QStringLiteral("personalize-events"),
    QStringLiteral("Amazon Personalize Events"),
    QStringLiteral("personalize"),
    parent), d_ptr(new PersonalizeEventsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the PersonalizeEventsClient service, and returns a pointer to an
 * PutEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Records user interaction event data. For more information see <a
 * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
 */
PutEventsResponse * PersonalizeEventsClient::putEvents(const PutEventsRequest &request)
{
    return qobject_cast<PutEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeEventsClient service, and returns a pointer to an
 * PutItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more items to an Items dataset. For more information see <a
 * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-items.html">Importing Items Incrementally</a>.
 */
PutItemsResponse * PersonalizeEventsClient::putItems(const PutItemsRequest &request)
{
    return qobject_cast<PutItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeEventsClient service, and returns a pointer to an
 * PutUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more users to a Users dataset. For more information see <a
 * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-users.html">Importing Users
 */
PutUsersResponse * PersonalizeEventsClient::putUsers(const PutUsersRequest &request)
{
    return qobject_cast<PutUsersResponse *>(send(request));
}

/*!
 * \class QtAws::PersonalizeEvents::PersonalizeEventsClientPrivate
 * \brief The PersonalizeEventsClientPrivate class provides private implementation for PersonalizeEventsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPersonalizeEvents
 */

/*!
 * Constructs a PersonalizeEventsClientPrivate object with public implementation \a q.
 */
PersonalizeEventsClientPrivate::PersonalizeEventsClientPrivate(PersonalizeEventsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace PersonalizeEvents
} // namespace QtAws
