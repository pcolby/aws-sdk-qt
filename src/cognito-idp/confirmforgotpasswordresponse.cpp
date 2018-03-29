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

#include "confirmforgotpasswordresponse.h"
#include "confirmforgotpasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ConfirmForgotPasswordResponse
 *
 * @brief  Handles CognitoIdentityProvider ConfirmForgotPassword responses.
 *
 * @see    CognitoIdentityProviderClient::confirmForgotPassword
 */

/**
 * @brief  Constructs a new ConfirmForgotPasswordResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ConfirmForgotPasswordResponse::ConfirmForgotPasswordResponse(
        const ConfirmForgotPasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ConfirmForgotPasswordResponsePrivate(this), parent)
{
    setRequest(new ConfirmForgotPasswordRequest(request));
    setReply(reply);
}

const ConfirmForgotPasswordRequest * ConfirmForgotPasswordResponse::request() const
{
    Q_D(const ConfirmForgotPasswordResponse);
    return static_cast<const ConfirmForgotPasswordRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider ConfirmForgotPassword response.
 *
 * @param  response  Response to parse.
 */
void ConfirmForgotPasswordResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ConfirmForgotPasswordResponsePrivate
 *
 * @brief  Private implementation for ConfirmForgotPasswordResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmForgotPasswordResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ConfirmForgotPasswordResponse instance.
 */
ConfirmForgotPasswordResponsePrivate::ConfirmForgotPasswordResponsePrivate(
    ConfirmForgotPasswordQueueResponse * const q) : ConfirmForgotPasswordPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider ConfirmForgotPasswordResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ConfirmForgotPasswordResponsePrivate::ConfirmForgotPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmForgotPasswordResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
