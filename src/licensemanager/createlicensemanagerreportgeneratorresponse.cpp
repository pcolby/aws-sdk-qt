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

#include "createlicensemanagerreportgeneratorresponse.h"
#include "createlicensemanagerreportgeneratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseManagerReportGeneratorResponse
 * \brief The CreateLicenseManagerReportGeneratorResponse class provides an interace for LicenseManager CreateLicenseManagerReportGenerator responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicenseManagerReportGenerator
 */

/*!
 * Constructs a CreateLicenseManagerReportGeneratorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLicenseManagerReportGeneratorResponse::CreateLicenseManagerReportGeneratorResponse(
        const CreateLicenseManagerReportGeneratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateLicenseManagerReportGeneratorResponsePrivate(this), parent)
{
    setRequest(new CreateLicenseManagerReportGeneratorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLicenseManagerReportGeneratorRequest * CreateLicenseManagerReportGeneratorResponse::request() const
{
    Q_D(const CreateLicenseManagerReportGeneratorResponse);
    return static_cast<const CreateLicenseManagerReportGeneratorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateLicenseManagerReportGenerator \a response.
 */
void CreateLicenseManagerReportGeneratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLicenseManagerReportGeneratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseManagerReportGeneratorResponsePrivate
 * \brief The CreateLicenseManagerReportGeneratorResponsePrivate class provides private implementation for CreateLicenseManagerReportGeneratorResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseManagerReportGeneratorResponsePrivate object with public implementation \a q.
 */
CreateLicenseManagerReportGeneratorResponsePrivate::CreateLicenseManagerReportGeneratorResponsePrivate(
    CreateLicenseManagerReportGeneratorResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateLicenseManagerReportGenerator response element from \a xml.
 */
void CreateLicenseManagerReportGeneratorResponsePrivate::parseCreateLicenseManagerReportGeneratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLicenseManagerReportGeneratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
