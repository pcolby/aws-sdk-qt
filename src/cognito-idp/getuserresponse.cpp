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

#include "getuserresponse.h"
#include "getuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserResponse
 *
 * \brief The GetUserResponse class encapsulates CognitoIdentityProvider GetUser responses.
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
 * \sa CognitoIdentityProviderClient::getUser
 */

/*!
 * @brief  Constructs a new GetUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUserResponse::GetUserResponse(
        const GetUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetUserResponsePrivate(this), parent)
{
    setRequest(new GetUserRequest(request));
    setReply(reply);
}

const GetUserRequest * GetUserResponse::request() const
{
    Q_D(const GetUserResponse);
    return static_cast<const GetUserRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoIdentityProvider GetUser response.
 *
 * @param  response  Response to parse.
 */
void GetUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetUserResponsePrivate
 *
 * \brief Private implementation for GetUserResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUserResponse instance.
 */
GetUserResponsePrivate::GetUserResponsePrivate(
    GetUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoIdentityProvider GetUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUserResponsePrivate::parseGetUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
