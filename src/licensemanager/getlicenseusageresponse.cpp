// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlicenseusageresponse.h"
#include "getlicenseusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseUsageResponse
 * \brief The GetLicenseUsageResponse class provides an interace for LicenseManager GetLicenseUsage responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicenseUsage
 */

/*!
 * Constructs a GetLicenseUsageResponse object for \a reply to \a request, with parent \a parent.
 */
GetLicenseUsageResponse::GetLicenseUsageResponse(
        const GetLicenseUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetLicenseUsageResponsePrivate(this), parent)
{
    setRequest(new GetLicenseUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLicenseUsageRequest * GetLicenseUsageResponse::request() const
{
    Q_D(const GetLicenseUsageResponse);
    return static_cast<const GetLicenseUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetLicenseUsage \a response.
 */
void GetLicenseUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLicenseUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetLicenseUsageResponsePrivate
 * \brief The GetLicenseUsageResponsePrivate class provides private implementation for GetLicenseUsageResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseUsageResponsePrivate object with public implementation \a q.
 */
GetLicenseUsageResponsePrivate::GetLicenseUsageResponsePrivate(
    GetLicenseUsageResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetLicenseUsage response element from \a xml.
 */
void GetLicenseUsageResponsePrivate::parseGetLicenseUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLicenseUsageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
