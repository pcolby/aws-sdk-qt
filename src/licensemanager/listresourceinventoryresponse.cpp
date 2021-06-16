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

#include "listresourceinventoryresponse.h"
#include "listresourceinventoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListResourceInventoryResponse
 * \brief The ListResourceInventoryResponse class provides an interace for LicenseManager ListResourceInventory responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listResourceInventory
 */

/*!
 * Constructs a ListResourceInventoryResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceInventoryResponse::ListResourceInventoryResponse(
        const ListResourceInventoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListResourceInventoryResponsePrivate(this), parent)
{
    setRequest(new ListResourceInventoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceInventoryRequest * ListResourceInventoryResponse::request() const
{
    Q_D(const ListResourceInventoryResponse);
    return static_cast<const ListResourceInventoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListResourceInventory \a response.
 */
void ListResourceInventoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourceInventoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListResourceInventoryResponsePrivate
 * \brief The ListResourceInventoryResponsePrivate class provides private implementation for ListResourceInventoryResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListResourceInventoryResponsePrivate object with public implementation \a q.
 */
ListResourceInventoryResponsePrivate::ListResourceInventoryResponsePrivate(
    ListResourceInventoryResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListResourceInventory response element from \a xml.
 */
void ListResourceInventoryResponsePrivate::parseListResourceInventoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceInventoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
