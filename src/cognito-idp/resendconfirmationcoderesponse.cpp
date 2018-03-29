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

#include "resendconfirmationcoderesponse.h"
#include "resendconfirmationcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  ResendConfirmationCodeResponse
 *
 * @brief  Handles CognitoIdentityProvider ResendConfirmationCode responses.
 *
 * @see    CognitoIdentityProviderClient::resendConfirmationCode
 */

/**
 * @brief  Constructs a new ResendConfirmationCodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResendConfirmationCodeResponse::ResendConfirmationCodeResponse(
        const ResendConfirmationCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ResendConfirmationCodeResponsePrivate(this), parent)
{
    setRequest(new ResendConfirmationCodeRequest(request));
    setReply(reply);
}

const ResendConfirmationCodeRequest * ResendConfirmationCodeResponse::request() const
{
    Q_D(const ResendConfirmationCodeResponse);
    return static_cast<const ResendConfirmationCodeRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider ResendConfirmationCode response.
 *
 * @param  response  Response to parse.
 */
void ResendConfirmationCodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResendConfirmationCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResendConfirmationCodeResponsePrivate
 *
 * @brief  Private implementation for ResendConfirmationCodeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResendConfirmationCodeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResendConfirmationCodeResponse instance.
 */
ResendConfirmationCodeResponsePrivate::ResendConfirmationCodeResponsePrivate(
    ResendConfirmationCodeResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider ResendConfirmationCodeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResendConfirmationCodeResponsePrivate::parseResendConfirmationCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResendConfirmationCodeResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
