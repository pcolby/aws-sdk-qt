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

#include "getlicenseconversiontaskresponse.h"
#include "getlicenseconversiontaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseConversionTaskResponse
 * \brief The GetLicenseConversionTaskResponse class provides an interace for LicenseManager GetLicenseConversionTask responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicenseConversionTask
 */

/*!
 * Constructs a GetLicenseConversionTaskResponse object for \a reply to \a request, with parent \a parent.
 */
GetLicenseConversionTaskResponse::GetLicenseConversionTaskResponse(
        const GetLicenseConversionTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetLicenseConversionTaskResponsePrivate(this), parent)
{
    setRequest(new GetLicenseConversionTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLicenseConversionTaskRequest * GetLicenseConversionTaskResponse::request() const
{
    Q_D(const GetLicenseConversionTaskResponse);
    return static_cast<const GetLicenseConversionTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetLicenseConversionTask \a response.
 */
void GetLicenseConversionTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLicenseConversionTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetLicenseConversionTaskResponsePrivate
 * \brief The GetLicenseConversionTaskResponsePrivate class provides private implementation for GetLicenseConversionTaskResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseConversionTaskResponsePrivate object with public implementation \a q.
 */
GetLicenseConversionTaskResponsePrivate::GetLicenseConversionTaskResponsePrivate(
    GetLicenseConversionTaskResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetLicenseConversionTask response element from \a xml.
 */
void GetLicenseConversionTaskResponsePrivate::parseGetLicenseConversionTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLicenseConversionTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
