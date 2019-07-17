/*
    Copyright 2013-2019 Paul Colby

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
: QtAws::Core::AwsAbstractClient(new PersonalizeEventsClientPrivate(this), parent)
{
    Q_D(PersonalizeEventsClient);
    d->apiVersion = QStringLiteral("2018-03-22");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("personalize-events");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Personalize Events");
    d->serviceName = QStringLiteral("personalize");
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
: QtAws::Core::AwsAbstractClient(new PersonalizeEventsClientPrivate(this), parent)
{
    Q_D(PersonalizeEventsClient);
    d->apiVersion = QStringLiteral("2018-03-22");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("personalize-events");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Personalize Events");
    d->serviceName = QStringLiteral("personalize");
}

/*!
 * Sends \a request to the PersonalizeEventsClient service, and returns a pointer to an
 * PutEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Records user interaction event
 */
PutEventsResponse * PersonalizeEventsClient::putEvents(const PutEventsRequest &request)
{
    return qobject_cast<PutEventsResponse *>(send(request));
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
PersonalizeEventsClientPrivate::PersonalizeEventsClientPrivate(PersonalizeEventsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace PersonalizeEvents
} // namespace QtAws
