// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
