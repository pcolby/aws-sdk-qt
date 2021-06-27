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

#include "deletelicenseconfigurationresponse.h"
#include "deletelicenseconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteLicenseConfigurationResponse
 * \brief The DeleteLicenseConfigurationResponse class provides an interace for LicenseManager DeleteLicenseConfiguration responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::deleteLicenseConfiguration
 */

/*!
 * Constructs a DeleteLicenseConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLicenseConfigurationResponse::DeleteLicenseConfigurationResponse(
        const DeleteLicenseConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new DeleteLicenseConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteLicenseConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLicenseConfigurationRequest * DeleteLicenseConfigurationResponse::request() const
{
    return static_cast<const DeleteLicenseConfigurationRequest *>(LicenseManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful LicenseManager DeleteLicenseConfiguration \a response.
 */
void DeleteLicenseConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLicenseConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::DeleteLicenseConfigurationResponsePrivate
 * \brief The DeleteLicenseConfigurationResponsePrivate class provides private implementation for DeleteLicenseConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteLicenseConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteLicenseConfigurationResponsePrivate::DeleteLicenseConfigurationResponsePrivate(
    DeleteLicenseConfigurationResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager DeleteLicenseConfiguration response element from \a xml.
 */
void DeleteLicenseConfigurationResponsePrivate::parseDeleteLicenseConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLicenseConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
