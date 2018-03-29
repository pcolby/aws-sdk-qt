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

#include "confirmsignupresponse.h"
#include "confirmsignupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  ConfirmSignUpResponse
 *
 * @brief  Handles CognitoIdentityProvider ConfirmSignUp responses.
 *
 * @see    CognitoIdentityProviderClient::confirmSignUp
 */

/**
 * @brief  Constructs a new ConfirmSignUpResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const ConfirmSignUpRequest * ConfirmSignUpResponse::request() const
{
    Q_D(const ConfirmSignUpResponse);
    return static_cast<const ConfirmSignUpRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider ConfirmSignUp response.
 *
 * @param  response  Response to parse.
 */
void ConfirmSignUpResponse::parseSuccess(QIODevice &response)
{
    Q_D(ConfirmSignUpResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ConfirmSignUpResponsePrivate
 *
 * @brief  Private implementation for ConfirmSignUpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmSignUpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ConfirmSignUpResponse instance.
 */
ConfirmSignUpResponsePrivate::ConfirmSignUpResponsePrivate(
    ConfirmSignUpResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider ConfirmSignUpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ConfirmSignUpResponsePrivate::parseConfirmSignUpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmSignUpResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
