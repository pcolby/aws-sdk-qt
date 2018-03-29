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

#include "verifyuserattributeresponse.h"
#include "verifyuserattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  VerifyUserAttributeResponse
 *
 * @brief  Handles CognitoIdentityProvider VerifyUserAttribute responses.
 *
 * @see    CognitoIdentityProviderClient::verifyUserAttribute
 */

/**
 * @brief  Constructs a new VerifyUserAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
VerifyUserAttributeResponse::VerifyUserAttributeResponse(
        const VerifyUserAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VerifyUserAttributeResponse(new VerifyUserAttributeResponsePrivate(this), parent)
{
    setRequest(new VerifyUserAttributeRequest(request));
    setReply(reply);
}

const VerifyUserAttributeRequest * VerifyUserAttributeResponse::request() const
{
    Q_D(const VerifyUserAttributeResponse);
    return static_cast<const VerifyUserAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider VerifyUserAttribute response.
 *
 * @param  response  Response to parse.
 */
void VerifyUserAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(VerifyUserAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  VerifyUserAttributeResponsePrivate
 *
 * @brief  Private implementation for VerifyUserAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new VerifyUserAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public VerifyUserAttributeResponse instance.
 */
VerifyUserAttributeResponsePrivate::VerifyUserAttributeResponsePrivate(
    VerifyUserAttributeResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider VerifyUserAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void VerifyUserAttributeResponsePrivate::parseVerifyUserAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyUserAttributeResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
