/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getuserattributeverificationcoderesponse.h"
#include "getuserattributeverificationcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserAttributeVerificationCodeResponse
 * \brief The GetUserAttributeVerificationCodeResponse class provides an interace for CognitoIdentityProvider GetUserAttributeVerificationCode responses.
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
 * \sa CognitoIdentityProviderClient::getUserAttributeVerificationCode
 */

/*!
 * Constructs a GetUserAttributeVerificationCodeResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserAttributeVerificationCodeResponse::GetUserAttributeVerificationCodeResponse(
        const GetUserAttributeVerificationCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetUserAttributeVerificationCodeResponsePrivate(this), parent)
{
    setRequest(new GetUserAttributeVerificationCodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserAttributeVerificationCodeRequest * GetUserAttributeVerificationCodeResponse::request() const
{
    Q_D(const GetUserAttributeVerificationCodeResponse);
    return static_cast<const GetUserAttributeVerificationCodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider GetUserAttributeVerificationCode \a response.
 */
void GetUserAttributeVerificationCodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetUserAttributeVerificationCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserAttributeVerificationCodeResponsePrivate
 * \brief The GetUserAttributeVerificationCodeResponsePrivate class provides private implementation for GetUserAttributeVerificationCodeResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetUserAttributeVerificationCodeResponsePrivate object with public implementation \a q.
 */
GetUserAttributeVerificationCodeResponsePrivate::GetUserAttributeVerificationCodeResponsePrivate(
    GetUserAttributeVerificationCodeResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider GetUserAttributeVerificationCode response element from \a xml.
 */
void GetUserAttributeVerificationCodeResponsePrivate::parseGetUserAttributeVerificationCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserAttributeVerificationCodeResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
