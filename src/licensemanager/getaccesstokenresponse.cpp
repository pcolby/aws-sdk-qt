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
