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

#include "updatelicensemanagerreportgeneratorresponse.h"
#include "updatelicensemanagerreportgeneratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::UpdateLicenseManagerReportGeneratorResponse
 * \brief The UpdateLicenseManagerReportGeneratorResponse class provides an interace for LicenseManager UpdateLicenseManagerReportGenerator responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::updateLicenseManagerReportGenerator
 */

/*!
 * Constructs a UpdateLicenseManagerReportGeneratorResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLicenseManagerReportGeneratorResponse::UpdateLicenseManagerReportGeneratorResponse(
        const UpdateLicenseManagerReportGeneratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new UpdateLicenseManagerReportGeneratorResponsePrivate(this), parent)
{
    setRequest(new UpdateLicenseManagerReportGeneratorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLicenseManagerReportGeneratorRequest * UpdateLicenseManagerReportGeneratorResponse::request() const
{
    Q_D(const UpdateLicenseManagerReportGeneratorResponse);
    return static_cast<const UpdateLicenseManagerReportGeneratorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager UpdateLicenseManagerReportGenerator \a response.
 */
void UpdateLicenseManagerReportGeneratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLicenseManagerReportGeneratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::UpdateLicenseManagerReportGeneratorResponsePrivate
 * \brief The UpdateLicenseManagerReportGeneratorResponsePrivate class provides private implementation for UpdateLicenseManagerReportGeneratorResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a UpdateLicenseManagerReportGeneratorResponsePrivate object with public implementation \a q.
 */
UpdateLicenseManagerReportGeneratorResponsePrivate::UpdateLicenseManagerReportGeneratorResponsePrivate(
    UpdateLicenseManagerReportGeneratorResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager UpdateLicenseManagerReportGenerator response element from \a xml.
 */
void UpdateLicenseManagerReportGeneratorResponsePrivate::parseUpdateLicenseManagerReportGeneratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLicenseManagerReportGeneratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
