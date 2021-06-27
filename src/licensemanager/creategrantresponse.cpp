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

#include "creategrantresponse.h"
#include "creategrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateGrantResponse
 * \brief The CreateGrantResponse class provides an interace for LicenseManager CreateGrant responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::createGrant
 */

/*!
 * Constructs a CreateGrantResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGrantResponse::CreateGrantResponse(
        const CreateGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateGrantResponsePrivate(this), parent)
{
    setRequest(new CreateGrantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGrantRequest * CreateGrantResponse::request() const
{
    return static_cast<const CreateGrantRequest *>(LicenseManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateGrant \a response.
 */
void CreateGrantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateGrantResponsePrivate
 * \brief The CreateGrantResponsePrivate class provides private implementation for CreateGrantResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateGrantResponsePrivate object with public implementation \a q.
 */
CreateGrantResponsePrivate::CreateGrantResponsePrivate(
    CreateGrantResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateGrant response element from \a xml.
 */
void CreateGrantResponsePrivate::parseCreateGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGrantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
