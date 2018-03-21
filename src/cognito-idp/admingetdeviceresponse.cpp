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

#include "admingetdeviceresponse.h"
#include "admingetdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminGetDeviceResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminGetDevice responses.
 *
 * @see    CognitoIdentityProviderClient::adminGetDevice
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminGetDeviceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminGetDeviceResponsePrivate(this), parent)
{
    setRequest(new AdminGetDeviceRequest(request));
    setReply(reply);
}

const AdminGetDeviceRequest * AdminGetDeviceResponse::request() const
{
    Q_D(const AdminGetDeviceResponse);
    return static_cast<const AdminGetDeviceRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminGetDevice response.
 *
 * @param  response  Response to parse.
 */
void AdminGetDeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminGetDeviceResponsePrivate
 *
 * @brief  Private implementation for AdminGetDeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminGetDeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminGetDeviceResponse instance.
 */
AdminGetDeviceResponsePrivate::AdminGetDeviceResponsePrivate(
    AdminGetDeviceQueueResponse * const q) : AdminGetDevicePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminGetDeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminGetDeviceResponsePrivate::AdminGetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminGetDeviceResponse"));
    /// @todo
}
