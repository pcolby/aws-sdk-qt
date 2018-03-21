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

#include "getdeviceresponse.h"
#include "getdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  GetDeviceResponse
 *
 * @brief  Handles CognitoIdentityProvider GetDevice responses.
 *
 * @see    CognitoIdentityProviderClient::getDevice
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeviceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetDeviceResponsePrivate(this), parent)
{
    setRequest(new GetDeviceRequest(request));
    setReply(reply);
}

const GetDeviceRequest * GetDeviceResponse::request() const
{
    Q_D(const GetDeviceResponse);
    return static_cast<const GetDeviceRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider GetDevice response.
 *
 * @param  response  Response to parse.
 */
void GetDeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDeviceResponsePrivate
 *
 * @brief  Private implementation for GetDeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDeviceResponse instance.
 */
GetDeviceResponsePrivate::GetDeviceResponsePrivate(
    GetDeviceQueueResponse * const q) : GetDevicePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider GetDeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDeviceResponsePrivate::GetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceResponse"));
    /// @todo
}
