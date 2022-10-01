// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesstokenresponse.h"
#include "getaccesstokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetAccessTokenResponse
 * \brief The GetAccessTokenResponse class provides an interace for LicenseManager GetAccessToken responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getAccessToken
 */

/*!
 * Constructs a GetAccessTokenResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessTokenResponse::GetAccessTokenResponse(
        const GetAccessTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetAccessTokenResponsePrivate(this), parent)
{
    setRequest(new GetAccessTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessTokenRequest * GetAccessTokenResponse::request() const
{
    Q_D(const GetAccessTokenResponse);
    return static_cast<const GetAccessTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetAccessToken \a response.
 */
void GetAccessTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetAccessTokenResponsePrivate
 * \brief The GetAccessTokenResponsePrivate class provides private implementation for GetAccessTokenResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetAccessTokenResponsePrivate object with public implementation \a q.
 */
GetAccessTokenResponsePrivate::GetAccessTokenResponsePrivate(
    GetAccessTokenResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetAccessToken response element from \a xml.
 */
void GetAccessTokenResponsePrivate::parseGetAccessTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
