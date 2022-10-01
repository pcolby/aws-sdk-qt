// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlicenseresponse.h"
#include "getlicenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseResponse
 * \brief The GetLicenseResponse class provides an interace for LicenseManager GetLicense responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicense
 */

/*!
 * Constructs a GetLicenseResponse object for \a reply to \a request, with parent \a parent.
 */
GetLicenseResponse::GetLicenseResponse(
        const GetLicenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetLicenseResponsePrivate(this), parent)
{
    setRequest(new GetLicenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLicenseRequest * GetLicenseResponse::request() const
{
    Q_D(const GetLicenseResponse);
    return static_cast<const GetLicenseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetLicense \a response.
 */
void GetLicenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLicenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetLicenseResponsePrivate
 * \brief The GetLicenseResponsePrivate class provides private implementation for GetLicenseResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseResponsePrivate object with public implementation \a q.
 */
GetLicenseResponsePrivate::GetLicenseResponsePrivate(
    GetLicenseResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetLicense response element from \a xml.
 */
void GetLicenseResponsePrivate::parseGetLicenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLicenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
