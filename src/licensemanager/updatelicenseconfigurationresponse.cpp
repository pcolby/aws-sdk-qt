// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
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
    Q_D(const UpdateLicenseConfigurationResponse);
    return static_cast<const UpdateLicenseConfigurationRequest *>(d->request);
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
