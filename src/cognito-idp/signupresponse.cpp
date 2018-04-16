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

#include "signupresponse.h"
#include "signupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SignUpResponse
 *
 * \brief The SignUpResponse class encapsulates CognitoIdentityProvider SignUp responses.
 *
 * \ingroup CognitoIdentityProvider
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
 * @brief  Constructs a new SignUpResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const SignUpRequest * SignUpResponse::request() const
{
    Q_D(const SignUpResponse);
    return static_cast<const SignUpRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoIdentityProvider SignUp response.
 *
 * @param  response  Response to parse.
 */
void SignUpResponse::parseSuccess(QIODevice &response)
{
    Q_D(SignUpResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SignUpResponsePrivate
 *
 * \brief Private implementation for SignUpResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SignUpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SignUpResponse instance.
 */
SignUpResponsePrivate::SignUpResponsePrivate(
    SignUpResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoIdentityProvider SignUpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SignUpResponsePrivate::parseSignUpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SignUpResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
