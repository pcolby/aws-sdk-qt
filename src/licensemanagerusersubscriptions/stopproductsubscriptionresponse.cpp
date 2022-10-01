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

#include "stopproductsubscriptionresponse.h"
#include "stopproductsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::StopProductSubscriptionResponse
 * \brief The StopProductSubscriptionResponse class provides an interace for LicenseManagerUserSubscriptions StopProductSubscription responses.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::stopProductSubscription
 */

/*!
 * Constructs a StopProductSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
StopProductSubscriptionResponse::StopProductSubscriptionResponse(
        const StopProductSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerUserSubscriptionsResponse(new StopProductSubscriptionResponsePrivate(this), parent)
{
    setRequest(new StopProductSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopProductSubscriptionRequest * StopProductSubscriptionResponse::request() const
{
    Q_D(const StopProductSubscriptionResponse);
    return static_cast<const StopProductSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManagerUserSubscriptions StopProductSubscription \a response.
 */
void StopProductSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopProductSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::StopProductSubscriptionResponsePrivate
 * \brief The StopProductSubscriptionResponsePrivate class provides private implementation for StopProductSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a StopProductSubscriptionResponsePrivate object with public implementation \a q.
 */
StopProductSubscriptionResponsePrivate::StopProductSubscriptionResponsePrivate(
    StopProductSubscriptionResponse * const q) : LicenseManagerUserSubscriptionsResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManagerUserSubscriptions StopProductSubscription response element from \a xml.
 */
void StopProductSubscriptionResponsePrivate::parseStopProductSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopProductSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
