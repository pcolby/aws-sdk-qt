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

#include "adminupdatedevicestatusresponse.h"
#include "adminupdatedevicestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminUpdateDeviceStatusResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminUpdateDeviceStatus responses.
 *
 * @see    CognitoIdentityProviderClient::adminUpdateDeviceStatus
 */

/**
 * @brief  Constructs a new AdminUpdateDeviceStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminUpdateDeviceStatusResponse::AdminUpdateDeviceStatusResponse(
        const AdminUpdateDeviceStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminUpdateDeviceStatusResponsePrivate(this), parent)
{
    setRequest(new AdminUpdateDeviceStatusRequest(request));
    setReply(reply);
}

const AdminUpdateDeviceStatusRequest * AdminUpdateDeviceStatusResponse::request() const
{
    Q_D(const AdminUpdateDeviceStatusResponse);
    return static_cast<const AdminUpdateDeviceStatusRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminUpdateDeviceStatus response.
 *
 * @param  response  Response to parse.
 */
void AdminUpdateDeviceStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminUpdateDeviceStatusResponsePrivate
 *
 * @brief  Private implementation for AdminUpdateDeviceStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminUpdateDeviceStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminUpdateDeviceStatusResponse instance.
 */
AdminUpdateDeviceStatusResponsePrivate::AdminUpdateDeviceStatusResponsePrivate(
    AdminUpdateDeviceStatusQueueResponse * const q) : AdminUpdateDeviceStatusPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminUpdateDeviceStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminUpdateDeviceStatusResponsePrivate::AdminUpdateDeviceStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminUpdateDeviceStatusResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
