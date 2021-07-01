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

#include "createlicenseversionresponse.h"
#include "createlicenseversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseVersionResponse
 * \brief The CreateLicenseVersionResponse class provides an interace for LicenseManager CreateLicenseVersion responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::createLicenseVersion
 */

/*!
 * Constructs a CreateLicenseVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLicenseVersionResponse::CreateLicenseVersionResponse(
        const CreateLicenseVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateLicenseVersionResponsePrivate(this), parent)
{
    setRequest(new CreateLicenseVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLicenseVersionRequest * CreateLicenseVersionResponse::request() const
{
    Q_D(const CreateLicenseVersionResponse);
    return static_cast<const CreateLicenseVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateLicenseVersion \a response.
 */
void CreateLicenseVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLicenseVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseVersionResponsePrivate
 * \brief The CreateLicenseVersionResponsePrivate class provides private implementation for CreateLicenseVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseVersionResponsePrivate object with public implementation \a q.
 */
CreateLicenseVersionResponsePrivate::CreateLicenseVersionResponsePrivate(
    CreateLicenseVersionResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateLicenseVersion response element from \a xml.
 */
void CreateLicenseVersionResponsePrivate::parseCreateLicenseVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLicenseVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
