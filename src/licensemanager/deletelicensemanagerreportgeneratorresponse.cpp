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

#include "deletelicensemanagerreportgeneratorresponse.h"
#include "deletelicensemanagerreportgeneratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteLicenseManagerReportGeneratorResponse
 * \brief The DeleteLicenseManagerReportGeneratorResponse class provides an interace for LicenseManager DeleteLicenseManagerReportGenerator responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::deleteLicenseManagerReportGenerator
 */

/*!
 * Constructs a DeleteLicenseManagerReportGeneratorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLicenseManagerReportGeneratorResponse::DeleteLicenseManagerReportGeneratorResponse(
        const DeleteLicenseManagerReportGeneratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new DeleteLicenseManagerReportGeneratorResponsePrivate(this), parent)
{
    setRequest(new DeleteLicenseManagerReportGeneratorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLicenseManagerReportGeneratorRequest * DeleteLicenseManagerReportGeneratorResponse::request() const
{
    Q_D(const DeleteLicenseManagerReportGeneratorResponse);
    return static_cast<const DeleteLicenseManagerReportGeneratorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager DeleteLicenseManagerReportGenerator \a response.
 */
void DeleteLicenseManagerReportGeneratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLicenseManagerReportGeneratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::DeleteLicenseManagerReportGeneratorResponsePrivate
 * \brief The DeleteLicenseManagerReportGeneratorResponsePrivate class provides private implementation for DeleteLicenseManagerReportGeneratorResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteLicenseManagerReportGeneratorResponsePrivate object with public implementation \a q.
 */
DeleteLicenseManagerReportGeneratorResponsePrivate::DeleteLicenseManagerReportGeneratorResponsePrivate(
    DeleteLicenseManagerReportGeneratorResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager DeleteLicenseManagerReportGenerator response element from \a xml.
 */
void DeleteLicenseManagerReportGeneratorResponsePrivate::parseDeleteLicenseManagerReportGeneratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLicenseManagerReportGeneratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
