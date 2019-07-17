/*
    Copyright 2013-2019 Paul Colby

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

#include "updateservicesettingsresponse.h"
#include "updateservicesettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::UpdateServiceSettingsResponse
 * \brief The UpdateServiceSettingsResponse class provides an interace for LicenseManager UpdateServiceSettings responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  <i>This is the AWS License Manager API Reference.</i> It provides descriptions, syntax, and usage examples for each of
 *  the actions and data types for License Manager. The topic for each action shows the Query API request parameters and the
 *  XML response. You can also view the XML request elements in the WSDL.
 * 
 *  </p
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS SDKs</a>.
 *
 * \sa LicenseManagerClient::updateServiceSettings
 */

/*!
 * Constructs a UpdateServiceSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServiceSettingsResponse::UpdateServiceSettingsResponse(
        const UpdateServiceSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new UpdateServiceSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateServiceSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServiceSettingsRequest * UpdateServiceSettingsResponse::request() const
{
    Q_D(const UpdateServiceSettingsResponse);
    return static_cast<const UpdateServiceSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager UpdateServiceSettings \a response.
 */
void UpdateServiceSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServiceSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::UpdateServiceSettingsResponsePrivate
 * \brief The UpdateServiceSettingsResponsePrivate class provides private implementation for UpdateServiceSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a UpdateServiceSettingsResponsePrivate object with public implementation \a q.
 */
UpdateServiceSettingsResponsePrivate::UpdateServiceSettingsResponsePrivate(
    UpdateServiceSettingsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager UpdateServiceSettings response element from \a xml.
 */
void UpdateServiceSettingsResponsePrivate::parseUpdateServiceSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServiceSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
