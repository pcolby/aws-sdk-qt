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

#include "createlicenseresponse.h"
#include "createlicenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseResponse
 * \brief The CreateLicenseResponse class provides an interace for LicenseManager CreateLicense responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::createLicense
 */

/*!
 * Constructs a CreateLicenseResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLicenseResponse::CreateLicenseResponse(
        const CreateLicenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateLicenseResponsePrivate(this), parent)
{
    setRequest(new CreateLicenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLicenseRequest * CreateLicenseResponse::request() const
{
    return static_cast<const CreateLicenseRequest *>(LicenseManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateLicense \a response.
 */
void CreateLicenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLicenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseResponsePrivate
 * \brief The CreateLicenseResponsePrivate class provides private implementation for CreateLicenseResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseResponsePrivate object with public implementation \a q.
 */
CreateLicenseResponsePrivate::CreateLicenseResponsePrivate(
    CreateLicenseResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateLicense response element from \a xml.
 */
void CreateLicenseResponsePrivate::parseCreateLicenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLicenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
