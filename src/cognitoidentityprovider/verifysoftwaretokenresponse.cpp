/*
    Copyright 2013-2020 Paul Colby

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

#include "verifysoftwaretokenresponse.h"
#include "verifysoftwaretokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::VerifySoftwareTokenResponse
 * \brief The VerifySoftwareTokenResponse class provides an interace for CognitoIdentityProvider VerifySoftwareToken responses.
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
 * \sa CognitoIdentityProviderClient::verifySoftwareToken
 */

/*!
 * Constructs a VerifySoftwareTokenResponse object for \a reply to \a request, with parent \a parent.
 */
VerifySoftwareTokenResponse::VerifySoftwareTokenResponse(
        const VerifySoftwareTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new VerifySoftwareTokenResponsePrivate(this), parent)
{
    setRequest(new VerifySoftwareTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const VerifySoftwareTokenRequest * VerifySoftwareTokenResponse::request() const
{
    Q_D(const VerifySoftwareTokenResponse);
    return static_cast<const VerifySoftwareTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider VerifySoftwareToken \a response.
 */
void VerifySoftwareTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(VerifySoftwareTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::VerifySoftwareTokenResponsePrivate
 * \brief The VerifySoftwareTokenResponsePrivate class provides private implementation for VerifySoftwareTokenResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a VerifySoftwareTokenResponsePrivate object with public implementation \a q.
 */
VerifySoftwareTokenResponsePrivate::VerifySoftwareTokenResponsePrivate(
    VerifySoftwareTokenResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider VerifySoftwareToken response element from \a xml.
 */
void VerifySoftwareTokenResponsePrivate::parseVerifySoftwareTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifySoftwareTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
