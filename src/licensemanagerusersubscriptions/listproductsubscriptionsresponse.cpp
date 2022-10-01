// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listproductsubscriptionsresponse.h"
#include "listproductsubscriptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListProductSubscriptionsResponse
 * \brief The ListProductSubscriptionsResponse class provides an interace for LicenseManagerUserSubscriptions ListProductSubscriptions responses.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::listProductSubscriptions
 */

/*!
 * Constructs a ListProductSubscriptionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProductSubscriptionsResponse::ListProductSubscriptionsResponse(
        const ListProductSubscriptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerUserSubscriptionsResponse(new ListProductSubscriptionsResponsePrivate(this), parent)
{
    setRequest(new ListProductSubscriptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProductSubscriptionsRequest * ListProductSubscriptionsResponse::request() const
{
    Q_D(const ListProductSubscriptionsResponse);
    return static_cast<const ListProductSubscriptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManagerUserSubscriptions ListProductSubscriptions \a response.
 */
void ListProductSubscriptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProductSubscriptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListProductSubscriptionsResponsePrivate
 * \brief The ListProductSubscriptionsResponsePrivate class provides private implementation for ListProductSubscriptionsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a ListProductSubscriptionsResponsePrivate object with public implementation \a q.
 */
ListProductSubscriptionsResponsePrivate::ListProductSubscriptionsResponsePrivate(
    ListProductSubscriptionsResponse * const q) : LicenseManagerUserSubscriptionsResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManagerUserSubscriptions ListProductSubscriptions response element from \a xml.
 */
void ListProductSubscriptionsResponsePrivate::parseListProductSubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProductSubscriptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
