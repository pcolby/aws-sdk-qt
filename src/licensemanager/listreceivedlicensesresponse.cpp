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

#include "listreceivedlicensesresponse.h"
#include "listreceivedlicensesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListReceivedLicensesResponse
 * \brief The ListReceivedLicensesResponse class provides an interace for LicenseManager ListReceivedLicenses responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listReceivedLicenses
 */

/*!
 * Constructs a ListReceivedLicensesResponse object for \a reply to \a request, with parent \a parent.
 */
ListReceivedLicensesResponse::ListReceivedLicensesResponse(
        const ListReceivedLicensesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListReceivedLicensesResponsePrivate(this), parent)
{
    setRequest(new ListReceivedLicensesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReceivedLicensesRequest * ListReceivedLicensesResponse::request() const
{
    Q_D(const ListReceivedLicensesResponse);
    return static_cast<const ListReceivedLicensesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListReceivedLicenses \a response.
 */
void ListReceivedLicensesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReceivedLicensesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListReceivedLicensesResponsePrivate
 * \brief The ListReceivedLicensesResponsePrivate class provides private implementation for ListReceivedLicensesResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListReceivedLicensesResponsePrivate object with public implementation \a q.
 */
ListReceivedLicensesResponsePrivate::ListReceivedLicensesResponsePrivate(
    ListReceivedLicensesResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListReceivedLicenses response element from \a xml.
 */
void ListReceivedLicensesResponsePrivate::parseListReceivedLicensesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReceivedLicensesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
