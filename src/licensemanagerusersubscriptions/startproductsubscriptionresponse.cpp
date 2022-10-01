// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
