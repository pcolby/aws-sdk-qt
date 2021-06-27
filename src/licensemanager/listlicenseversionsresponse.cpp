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

#include "listlicenseversionsresponse.h"
#include "listlicenseversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseVersionsResponse
 * \brief The ListLicenseVersionsResponse class provides an interace for LicenseManager ListLicenseVersions responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listLicenseVersions
 */

/*!
 * Constructs a ListLicenseVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLicenseVersionsResponse::ListLicenseVersionsResponse(
        const ListLicenseVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListLicenseVersionsResponsePrivate(this), parent)
{
    setRequest(new ListLicenseVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLicenseVersionsRequest * ListLicenseVersionsResponse::request() const
{
    return static_cast<const ListLicenseVersionsRequest *>(LicenseManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListLicenseVersions \a response.
 */
void ListLicenseVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLicenseVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListLicenseVersionsResponsePrivate
 * \brief The ListLicenseVersionsResponsePrivate class provides private implementation for ListLicenseVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseVersionsResponsePrivate object with public implementation \a q.
 */
ListLicenseVersionsResponsePrivate::ListLicenseVersionsResponsePrivate(
    ListLicenseVersionsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListLicenseVersions response element from \a xml.
 */
void ListLicenseVersionsResponsePrivate::parseListLicenseVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLicenseVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
