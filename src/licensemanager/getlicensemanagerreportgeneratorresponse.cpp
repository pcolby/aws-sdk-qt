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

#include "getlicensemanagerreportgeneratorresponse.h"
#include "getlicensemanagerreportgeneratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseManagerReportGeneratorResponse
 * \brief The GetLicenseManagerReportGeneratorResponse class provides an interace for LicenseManager GetLicenseManagerReportGenerator responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::getLicenseManagerReportGenerator
 */

/*!
 * Constructs a GetLicenseManagerReportGeneratorResponse object for \a reply to \a request, with parent \a parent.
 */
GetLicenseManagerReportGeneratorResponse::GetLicenseManagerReportGeneratorResponse(
        const GetLicenseManagerReportGeneratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetLicenseManagerReportGeneratorResponsePrivate(this), parent)
{
    setRequest(new GetLicenseManagerReportGeneratorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLicenseManagerReportGeneratorRequest * GetLicenseManagerReportGeneratorResponse::request() const
{
    return static_cast<const GetLicenseManagerReportGeneratorRequest *>(LicenseManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetLicenseManagerReportGenerator \a response.
 */
void GetLicenseManagerReportGeneratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLicenseManagerReportGeneratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetLicenseManagerReportGeneratorResponsePrivate
 * \brief The GetLicenseManagerReportGeneratorResponsePrivate class provides private implementation for GetLicenseManagerReportGeneratorResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseManagerReportGeneratorResponsePrivate object with public implementation \a q.
 */
GetLicenseManagerReportGeneratorResponsePrivate::GetLicenseManagerReportGeneratorResponsePrivate(
    GetLicenseManagerReportGeneratorResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetLicenseManagerReportGenerator response element from \a xml.
 */
void GetLicenseManagerReportGeneratorResponsePrivate::parseGetLicenseManagerReportGeneratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLicenseManagerReportGeneratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
