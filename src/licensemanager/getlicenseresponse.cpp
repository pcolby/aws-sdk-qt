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

#include "getlicenseresponse.h"
#include "getlicenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseResponse
 * \brief The GetLicenseResponse class provides an interace for LicenseManager GetLicense responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::getLicense
 */

/*!
 * Constructs a GetLicenseResponse object for \a reply to \a request, with parent \a parent.
 */
GetLicenseResponse::GetLicenseResponse(
        const GetLicenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetLicenseResponsePrivate(this), parent)
{
    setRequest(new GetLicenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLicenseRequest * GetLicenseResponse::request() const
{
    return static_cast<const GetLicenseRequest *>(LicenseManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetLicense \a response.
 */
void GetLicenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLicenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetLicenseResponsePrivate
 * \brief The GetLicenseResponsePrivate class provides private implementation for GetLicenseResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseResponsePrivate object with public implementation \a q.
 */
GetLicenseResponsePrivate::GetLicenseResponsePrivate(
    GetLicenseResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetLicense response element from \a xml.
 */
void GetLicenseResponsePrivate::parseGetLicenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLicenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
