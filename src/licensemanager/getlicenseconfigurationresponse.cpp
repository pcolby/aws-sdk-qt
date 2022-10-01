// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlicenseconfigurationresponse.h"
#include "getlicenseconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseConfigurationResponse
 * \brief The GetLicenseConfigurationResponse class provides an interace for LicenseManager GetLicenseConfiguration responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicenseConfiguration
 */

/*!
 * Constructs a GetLicenseConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetLicenseConfigurationResponse::GetLicenseConfigurationResponse(
        const GetLicenseConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetLicenseConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetLicenseConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLicenseConfigurationRequest * GetLicenseConfigurationResponse::request() const
{
    Q_D(const GetLicenseConfigurationResponse);
    return static_cast<const GetLicenseConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetLicenseConfiguration \a response.
 */
void GetLicenseConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLicenseConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetLicenseConfigurationResponsePrivate
 * \brief The GetLicenseConfigurationResponsePrivate class provides private implementation for GetLicenseConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseConfigurationResponsePrivate object with public implementation \a q.
 */
GetLicenseConfigurationResponsePrivate::GetLicenseConfigurationResponsePrivate(
    GetLicenseConfigurationResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetLicenseConfiguration response element from \a xml.
 */
void GetLicenseConfigurationResponsePrivate::parseGetLicenseConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLicenseConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
