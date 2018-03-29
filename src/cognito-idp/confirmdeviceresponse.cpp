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

#include "confirmdeviceresponse.h"
#include "confirmdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  ConfirmDeviceResponse
 *
 * @brief  Handles CognitoIdentityProvider ConfirmDevice responses.
 *
 * @see    CognitoIdentityProviderClient::confirmDevice
 */

/**
 * @brief  Constructs a new ConfirmDeviceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ConfirmDeviceResponse::ConfirmDeviceResponse(
        const ConfirmDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ConfirmDeviceResponsePrivate(this), parent)
{
    setRequest(new ConfirmDeviceRequest(request));
    setReply(reply);
}

const ConfirmDeviceRequest * ConfirmDeviceResponse::request() const
{
    Q_D(const ConfirmDeviceResponse);
    return static_cast<const ConfirmDeviceRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider ConfirmDevice response.
 *
 * @param  response  Response to parse.
 */
void ConfirmDeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(ConfirmDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ConfirmDeviceResponsePrivate
 *
 * @brief  Private implementation for ConfirmDeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmDeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ConfirmDeviceResponse instance.
 */
ConfirmDeviceResponsePrivate::ConfirmDeviceResponsePrivate(
    ConfirmDeviceResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider ConfirmDeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ConfirmDeviceResponsePrivate::parseConfirmDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmDeviceResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
