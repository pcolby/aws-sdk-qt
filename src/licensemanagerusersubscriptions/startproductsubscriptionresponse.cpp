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

#include "startproductsubscriptionresponse.h"
#include "startproductsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::StartProductSubscriptionResponse
 * \brief The StartProductSubscriptionResponse class provides an interace for LicenseManagerUserSubscriptions StartProductSubscription responses.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::startProductSubscription
 */

/*!
 * Constructs a StartProductSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
StartProductSubscriptionResponse::StartProductSubscriptionResponse(
        const StartProductSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerUserSubscriptionsResponse(new StartProductSubscriptionResponsePrivate(this), parent)
{
    setRequest(new StartProductSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartProductSubscriptionRequest * StartProductSubscriptionResponse::request() const
{
    Q_D(const StartProductSubscriptionResponse);
    return static_cast<const StartProductSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManagerUserSubscriptions StartProductSubscription \a response.
 */
void StartProductSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartProductSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::StartProductSubscriptionResponsePrivate
 * \brief The StartProductSubscriptionResponsePrivate class provides private implementation for StartProductSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a StartProductSubscriptionResponsePrivate object with public implementation \a q.
 */
StartProductSubscriptionResponsePrivate::StartProductSubscriptionResponsePrivate(
    StartProductSubscriptionResponse * const q) : LicenseManagerUserSubscriptionsResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManagerUserSubscriptions StartProductSubscription response element from \a xml.
 */
void StartProductSubscriptionResponsePrivate::parseStartProductSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartProductSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
