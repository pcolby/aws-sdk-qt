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

#include "listlicensesresponse.h"
#include "listlicensesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicensesResponse
 * \brief The ListLicensesResponse class provides an interace for LicenseManager ListLicenses responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listLicenses
 */

/*!
 * Constructs a ListLicensesResponse object for \a reply to \a request, with parent \a parent.
 */
ListLicensesResponse::ListLicensesResponse(
        const ListLicensesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListLicensesResponsePrivate(this), parent)
{
    setRequest(new ListLicensesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLicensesRequest * ListLicensesResponse::request() const
{
    Q_D(const ListLicensesResponse);
    return static_cast<const ListLicensesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListLicenses \a response.
 */
void ListLicensesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLicensesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListLicensesResponsePrivate
 * \brief The ListLicensesResponsePrivate class provides private implementation for ListLicensesResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicensesResponsePrivate object with public implementation \a q.
 */
ListLicensesResponsePrivate::ListLicensesResponsePrivate(
    ListLicensesResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListLicenses response element from \a xml.
 */
void ListLicensesResponsePrivate::parseListLicensesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLicensesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
