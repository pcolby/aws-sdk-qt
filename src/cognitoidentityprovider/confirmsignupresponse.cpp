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

#include "confirmsignupresponse.h"
#include "confirmsignupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmSignUpResponse
 * \brief The ConfirmSignUpResponse class provides an interace for CognitoIdentityProvider ConfirmSignUp responses.
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
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::confirmSignUp
 */

/*!
 * Constructs a ConfirmSignUpResponse object for \a reply to \a request, with parent \a parent.
 */
ConfirmSignUpResponse::ConfirmSignUpResponse(
        const ConfirmSignUpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ConfirmSignUpResponsePrivate(this), parent)
{
    setRequest(new ConfirmSignUpRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfirmSignUpRequest * ConfirmSignUpResponse::request() const
{
    return static_cast<const ConfirmSignUpRequest *>(CognitoIdentityProviderResponse::request());
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ConfirmSignUp \a response.
 */
void ConfirmSignUpResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfirmSignUpResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmSignUpResponsePrivate
 * \brief The ConfirmSignUpResponsePrivate class provides private implementation for ConfirmSignUpResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ConfirmSignUpResponsePrivate object with public implementation \a q.
 */
ConfirmSignUpResponsePrivate::ConfirmSignUpResponsePrivate(
    ConfirmSignUpResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ConfirmSignUp response element from \a xml.
 */
void ConfirmSignUpResponsePrivate::parseConfirmSignUpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmSignUpResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
