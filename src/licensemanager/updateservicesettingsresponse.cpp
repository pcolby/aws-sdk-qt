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
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
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
