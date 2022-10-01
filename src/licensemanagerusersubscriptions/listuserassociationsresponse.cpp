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

#include "listuserassociationsresponse.h"
#include "listuserassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListUserAssociationsResponse
 * \brief The ListUserAssociationsResponse class provides an interace for LicenseManagerUserSubscriptions ListUserAssociations responses.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::listUserAssociations
 */

/*!
 * Constructs a ListUserAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUserAssociationsResponse::ListUserAssociationsResponse(
        const ListUserAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerUserSubscriptionsResponse(new ListUserAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListUserAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUserAssociationsRequest * ListUserAssociationsResponse::request() const
{
    Q_D(const ListUserAssociationsResponse);
    return static_cast<const ListUserAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManagerUserSubscriptions ListUserAssociations \a response.
 */
void ListUserAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUserAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListUserAssociationsResponsePrivate
 * \brief The ListUserAssociationsResponsePrivate class provides private implementation for ListUserAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a ListUserAssociationsResponsePrivate object with public implementation \a q.
 */
ListUserAssociationsResponsePrivate::ListUserAssociationsResponsePrivate(
    ListUserAssociationsResponse * const q) : LicenseManagerUserSubscriptionsResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManagerUserSubscriptions ListUserAssociations response element from \a xml.
 */
void ListUserAssociationsResponsePrivate::parseListUserAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
