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

#include "registerdeviceresponse.h"
#include "registerdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/**
 * @class  RegisterDeviceResponse
 *
 * @brief  Handles CognitoSync RegisterDevice responses.
 *
 * @see    CognitoSyncClient::registerDevice
 */

/**
 * @brief  Constructs a new RegisterDeviceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterDeviceResponse::RegisterDeviceResponse(
        const RegisterDeviceRequest &request,
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
    Q_D(RegisterDeviceResponse);
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
    RegisterDeviceResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync RegisterDeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterDeviceResponsePrivate::parseRegisterDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterDeviceResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws
