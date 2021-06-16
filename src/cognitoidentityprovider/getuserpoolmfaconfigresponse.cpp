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

#include "getuserpoolmfaconfigresponse.h"
#include "getuserpoolmfaconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserPoolMfaConfigResponse
 * \brief The GetUserPoolMfaConfigResponse class provides an interace for CognitoIdentityProvider GetUserPoolMfaConfig responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::getUserPoolMfaConfig
 */

/*!
 * Constructs a GetUserPoolMfaConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserPoolMfaConfigResponse::GetUserPoolMfaConfigResponse(
        const GetUserPoolMfaConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetUserPoolMfaConfigResponsePrivate(this), parent)
{
    setRequest(new GetUserPoolMfaConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserPoolMfaConfigRequest * GetUserPoolMfaConfigResponse::request() const
{
    Q_D(const GetUserPoolMfaConfigResponse);
    return static_cast<const GetUserPoolMfaConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider GetUserPoolMfaConfig \a response.
 */
void GetUserPoolMfaConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserPoolMfaConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserPoolMfaConfigResponsePrivate
 * \brief The GetUserPoolMfaConfigResponsePrivate class provides private implementation for GetUserPoolMfaConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetUserPoolMfaConfigResponsePrivate object with public implementation \a q.
 */
GetUserPoolMfaConfigResponsePrivate::GetUserPoolMfaConfigResponsePrivate(
    GetUserPoolMfaConfigResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider GetUserPoolMfaConfig response element from \a xml.
 */
void GetUserPoolMfaConfigResponsePrivate::parseGetUserPoolMfaConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserPoolMfaConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
