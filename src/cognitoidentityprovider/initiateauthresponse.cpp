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

#include "initiateauthresponse.h"
#include "initiateauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::InitiateAuthResponse
 * \brief The InitiateAuthResponse class provides an interace for CognitoIdentityProvider InitiateAuth responses.
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
 * \sa CognitoIdentityProviderClient::initiateAuth
 */

/*!
 * Constructs a InitiateAuthResponse object for \a reply to \a request, with parent \a parent.
 */
InitiateAuthResponse::InitiateAuthResponse(
        const InitiateAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new InitiateAuthResponsePrivate(this), parent)
{
    setRequest(new InitiateAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InitiateAuthRequest * InitiateAuthResponse::request() const
{
    Q_D(const InitiateAuthResponse);
    return static_cast<const InitiateAuthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider InitiateAuth \a response.
 */
void InitiateAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InitiateAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::InitiateAuthResponsePrivate
 * \brief The InitiateAuthResponsePrivate class provides private implementation for InitiateAuthResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a InitiateAuthResponsePrivate object with public implementation \a q.
 */
InitiateAuthResponsePrivate::InitiateAuthResponsePrivate(
    InitiateAuthResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider InitiateAuth response element from \a xml.
 */
void InitiateAuthResponsePrivate::parseInitiateAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
