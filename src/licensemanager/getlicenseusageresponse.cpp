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

#include "getlicenseusageresponse.h"
#include "getlicenseusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseUsageResponse
 * \brief The GetLicenseUsageResponse class provides an interace for LicenseManager GetLicenseUsage responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::getLicenseUsage
 */

/*!
 * Constructs a GetLicenseUsageResponse object for \a reply to \a request, with parent \a parent.
 */
GetLicenseUsageResponse::GetLicenseUsageResponse(
        const GetLicenseUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetLicenseUsageResponsePrivate(this), parent)
{
    setRequest(new GetLicenseUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLicenseUsageRequest * GetLicenseUsageResponse::request() const
{
    Q_D(const GetLicenseUsageResponse);
    return static_cast<const GetLicenseUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetLicenseUsage \a response.
 */
void GetLicenseUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLicenseUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetLicenseUsageResponsePrivate
 * \brief The GetLicenseUsageResponsePrivate class provides private implementation for GetLicenseUsageResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseUsageResponsePrivate object with public implementation \a q.
 */
GetLicenseUsageResponsePrivate::GetLicenseUsageResponsePrivate(
    GetLicenseUsageResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetLicenseUsage response element from \a xml.
 */
void GetLicenseUsageResponsePrivate::parseGetLicenseUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLicenseUsageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
