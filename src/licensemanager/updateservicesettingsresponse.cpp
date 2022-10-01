// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
