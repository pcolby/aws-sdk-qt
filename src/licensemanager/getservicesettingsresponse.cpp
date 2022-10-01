// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservicesettingsresponse.h"
#include "getservicesettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetServiceSettingsResponse
 * \brief The GetServiceSettingsResponse class provides an interace for LicenseManager GetServiceSettings responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getServiceSettings
 */

/*!
 * Constructs a GetServiceSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceSettingsResponse::GetServiceSettingsResponse(
        const GetServiceSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetServiceSettingsResponsePrivate(this), parent)
{
    setRequest(new GetServiceSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceSettingsRequest * GetServiceSettingsResponse::request() const
{
    Q_D(const GetServiceSettingsResponse);
    return static_cast<const GetServiceSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetServiceSettings \a response.
 */
void GetServiceSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetServiceSettingsResponsePrivate
 * \brief The GetServiceSettingsResponsePrivate class provides private implementation for GetServiceSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetServiceSettingsResponsePrivate object with public implementation \a q.
 */
GetServiceSettingsResponsePrivate::GetServiceSettingsResponsePrivate(
    GetServiceSettingsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetServiceSettings response element from \a xml.
 */
void GetServiceSettingsResponsePrivate::parseGetServiceSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
