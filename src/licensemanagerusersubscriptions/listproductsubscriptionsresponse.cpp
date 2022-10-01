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
