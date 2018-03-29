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

#include "setuserpoolmfaconfigresponse.h"
#include "setuserpoolmfaconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  SetUserPoolMfaConfigResponse
 *
 * @brief  Handles CognitoIdentityProvider SetUserPoolMfaConfig responses.
 *
 * @see    CognitoIdentityProviderClient::setUserPoolMfaConfig
 */

/**
 * @brief  Constructs a new SetUserPoolMfaConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetUserPoolMfaConfigResponse::SetUserPoolMfaConfigResponse(
        const SetUserPoolMfaConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SetUserPoolMfaConfigResponse(new SetUserPoolMfaConfigResponsePrivate(this), parent)
{
    setRequest(new SetUserPoolMfaConfigRequest(request));
    setReply(reply);
}

const SetUserPoolMfaConfigRequest * SetUserPoolMfaConfigResponse::request() const
{
    Q_D(const SetUserPoolMfaConfigResponse);
    return static_cast<const SetUserPoolMfaConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider SetUserPoolMfaConfig response.
 *
 * @param  response  Response to parse.
 */
void SetUserPoolMfaConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetUserPoolMfaConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetUserPoolMfaConfigResponsePrivate
 *
 * @brief  Private implementation for SetUserPoolMfaConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetUserPoolMfaConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetUserPoolMfaConfigResponse instance.
 */
SetUserPoolMfaConfigResponsePrivate::SetUserPoolMfaConfigResponsePrivate(
    SetUserPoolMfaConfigResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider SetUserPoolMfaConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetUserPoolMfaConfigResponsePrivate::parseSetUserPoolMfaConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetUserPoolMfaConfigResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
