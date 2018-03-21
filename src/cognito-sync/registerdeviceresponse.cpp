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

#include "registerdeviceresponse.h"
#include "registerdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoSync {

/**
 * @class  RegisterDeviceResponse
 *
 * @brief  Handles CognitoSync RegisterDevice responses.
 *
 * @see    CognitoSyncClient::registerDevice
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterDeviceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new RegisterDeviceResponsePrivate(this), parent)
{
    setRequest(new RegisterDeviceRequest(request));
    setReply(reply);
}

const RegisterDeviceRequest * RegisterDeviceResponse::request() const
{
    Q_D(const RegisterDeviceResponse);
    return static_cast<const RegisterDeviceRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync RegisterDevice response.
 *
 * @param  response  Response to parse.
 */
void RegisterDeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterDeviceResponsePrivate
 *
 * @brief  Private implementation for RegisterDeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterDeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterDeviceResponse instance.
 */
RegisterDeviceResponsePrivate::RegisterDeviceResponsePrivate(
    RegisterDeviceQueueResponse * const q) : RegisterDevicePrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync RegisterDeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterDeviceResponsePrivate::RegisterDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterDeviceResponse"));
    /// @todo
}
