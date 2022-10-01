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

#include "listreceivedgrantsresponse.h"
#include "listreceivedgrantsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListReceivedGrantsResponse
 * \brief The ListReceivedGrantsResponse class provides an interace for LicenseManager ListReceivedGrants responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listReceivedGrants
 */

/*!
 * Constructs a ListReceivedGrantsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReceivedGrantsResponse::ListReceivedGrantsResponse(
        const ListReceivedGrantsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListReceivedGrantsResponsePrivate(this), parent)
{
    setRequest(new ListReceivedGrantsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReceivedGrantsRequest * ListReceivedGrantsResponse::request() const
{
    Q_D(const ListReceivedGrantsResponse);
    return static_cast<const ListReceivedGrantsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListReceivedGrants \a response.
 */
void ListReceivedGrantsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReceivedGrantsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListReceivedGrantsResponsePrivate
 * \brief The ListReceivedGrantsResponsePrivate class provides private implementation for ListReceivedGrantsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListReceivedGrantsResponsePrivate object with public implementation \a q.
 */
ListReceivedGrantsResponsePrivate::ListReceivedGrantsResponsePrivate(
    ListReceivedGrantsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListReceivedGrants response element from \a xml.
 */
void ListReceivedGrantsResponsePrivate::parseListReceivedGrantsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReceivedGrantsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
