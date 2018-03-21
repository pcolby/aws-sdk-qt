/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "forgetdeviceresponse.h"
#include "forgetdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ForgetDeviceResponse
 *
 * @brief  Handles CognitoIdentityProvider ForgetDevice responses.
 *
 * @see    CognitoIdentityProviderClient::forgetDevice
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ForgetDeviceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ForgetDeviceResponsePrivate(this), parent)
{
    setRequest(new ForgetDeviceRequest(request));
    setReply(reply);
}

const ForgetDeviceRequest * ForgetDeviceResponse::request() const
{
    Q_D(const ForgetDeviceResponse);
    return static_cast<const ForgetDeviceRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider ForgetDevice response.
 *
 * @param  response  Response to parse.
 */
void ForgetDeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ForgetDeviceResponsePrivate
 *
 * @brief  Private implementation for ForgetDeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ForgetDeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ForgetDeviceResponse instance.
 */
ForgetDeviceResponsePrivate::ForgetDeviceResponsePrivate(
    ForgetDeviceQueueResponse * const q) : ForgetDevicePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider ForgetDeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ForgetDeviceResponsePrivate::ForgetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ForgetDeviceResponse"));
    /// @todo
}
