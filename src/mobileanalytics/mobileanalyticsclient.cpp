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

#include "mobileanalyticsclient.h"
#include "mobileanalyticsclient_p.h"

#include "core/awssignaturev4.h"
#include "puteventsrequest.h"
#include "puteventsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MobileAnalytics
 * \brief Contains classess for accessing Amazon Mobile Analytics.
 *
 * \inmodule QtAwsMobileAnalytics
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MobileAnalytics {

/*!
 * \class QtAws::MobileAnalytics::MobileAnalyticsClient
 * \brief The MobileAnalyticsClient class provides access to the Amazon Mobile Analytics service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMobileAnalytics
 *
 *  Amazon Mobile Analytics is a service for collecting, visualizing, and understanding app usage data at
 */

/*!
 * \brief Constructs a MobileAnalyticsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MobileAnalyticsClient::MobileAnalyticsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MobileAnalyticsClientPrivate(this), parent)
{
    Q_D(MobileAnalyticsClient);
    d->apiVersion = QStringLiteral("2014-06-05");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("mobileanalytics");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Mobile Analytics");
    d->serviceName = QStringLiteral("mobileanalytics");
}

/*!
 * \overload MobileAnalyticsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MobileAnalyticsClient::MobileAnalyticsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MobileAnalyticsClientPrivate(this), parent)
{
    Q_D(MobileAnalyticsClient);
    d->apiVersion = QStringLiteral("2014-06-05");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("mobileanalytics");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Mobile Analytics");
    d->serviceName = QStringLiteral("mobileanalytics");
}

/*!
 * Sends \a request to the MobileAnalyticsClient service, and returns a pointer to an
 * PutEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The PutEvents operation records one or more events. You can have up to 1,500 unique custom events per app, any
 * combination of up to 40 attributes and metrics per custom event, and any number of attribute or metric
 */
PutEventsResponse * MobileAnalyticsClient::putEvents(const PutEventsRequest &request)
{
    return qobject_cast<PutEventsResponse *>(send(request));
}

/*!
 * \class QtAws::MobileAnalytics::MobileAnalyticsClientPrivate
 * \brief The MobileAnalyticsClientPrivate class provides private implementation for MobileAnalyticsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMobileAnalytics
 */

/*!
 * Constructs a MobileAnalyticsClientPrivate object with public implementation \a q.
 */
MobileAnalyticsClientPrivate::MobileAnalyticsClientPrivate(MobileAnalyticsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MobileAnalytics
} // namespace QtAws
