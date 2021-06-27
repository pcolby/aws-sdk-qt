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

#include "updatelicenseconfigurationresponse.h"
#include "updatelicenseconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::UpdateLicenseConfigurationResponse
 * \brief The UpdateLicenseConfigurationResponse class provides an interace for LicenseManager UpdateLicenseConfiguration responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::updateLicenseConfiguration
 */

/*!
 * Constructs a UpdateLicenseConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLicenseConfigurationResponse::UpdateLicenseConfigurationResponse(
        const UpdateLicenseConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new UpdateLicenseConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateLicenseConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLicenseConfigurationRequest * UpdateLicenseConfigurationResponse::request() const
{
    return static_cast<const UpdateLicenseConfigurationRequest *>(LicenseManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful LicenseManager UpdateLicenseConfiguration \a response.
 */
void UpdateLicenseConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLicenseConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::UpdateLicenseConfigurationResponsePrivate
 * \brief The UpdateLicenseConfigurationResponsePrivate class provides private implementation for UpdateLicenseConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a UpdateLicenseConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateLicenseConfigurationResponsePrivate::UpdateLicenseConfigurationResponsePrivate(
    UpdateLicenseConfigurationResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager UpdateLicenseConfiguration response element from \a xml.
 */
void UpdateLicenseConfigurationResponsePrivate::parseUpdateLicenseConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLicenseConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
