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

#include "signupresponse.h"
#include "signupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SignUpResponse
 * \brief The SignUpResponse class provides an interace for CognitoIdentityProvider SignUp responses.
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
 * \sa CognitoIdentityProviderClient::signUp
 */

/*!
 * Constructs a SignUpResponse object for \a reply to \a request, with parent \a parent.
 */
SignUpResponse::SignUpResponse(
        const SignUpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SignUpResponsePrivate(this), parent)
{
    setRequest(new SignUpRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SignUpRequest * SignUpResponse::request() const
{
    Q_D(const SignUpResponse);
    return static_cast<const SignUpRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider SignUp \a response.
 */
void SignUpResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SignUpResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::SignUpResponsePrivate
 * \brief The SignUpResponsePrivate class provides private implementation for SignUpResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SignUpResponsePrivate object with public implementation \a q.
 */
SignUpResponsePrivate::SignUpResponsePrivate(
    SignUpResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider SignUp response element from \a xml.
 */
void SignUpResponsePrivate::parseSignUpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SignUpResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
