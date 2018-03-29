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

#include "adminforgetdeviceresponse.h"
#include "adminforgetdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminForgetDeviceResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminForgetDevice responses.
 *
 * @see    CognitoIdentityProviderClient::adminForgetDevice
 */

/**
 * @brief  Constructs a new AdminForgetDeviceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminForgetDeviceResponse::AdminForgetDeviceResponse(
        const AdminForgetDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminForgetDeviceResponsePrivate(this), parent)
{
    setRequest(new AdminForgetDeviceRequest(request));
    setReply(reply);
}

const AdminForgetDeviceRequest * AdminForgetDeviceResponse::request() const
{
    Q_D(const AdminForgetDeviceResponse);
    return static_cast<const AdminForgetDeviceRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminForgetDevice response.
 *
 * @param  response  Response to parse.
 */
void AdminForgetDeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminForgetDeviceResponsePrivate
 *
 * @brief  Private implementation for AdminForgetDeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminForgetDeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminForgetDeviceResponse instance.
 */
AdminForgetDeviceResponsePrivate::AdminForgetDeviceResponsePrivate(
    AdminForgetDeviceQueueResponse * const q) : AdminForgetDevicePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminForgetDeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminForgetDeviceResponsePrivate::AdminForgetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminForgetDeviceResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
