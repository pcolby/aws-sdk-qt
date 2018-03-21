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

#include "adminlistdevicesresponse.h"
#include "adminlistdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminListDevicesResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminListDevices responses.
 *
 * @see    CognitoIdentityProviderClient::adminListDevices
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminListDevicesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminListDevicesResponsePrivate(this), parent)
{
    setRequest(new AdminListDevicesRequest(request));
    setReply(reply);
}

const AdminListDevicesRequest * AdminListDevicesResponse::request() const
{
    Q_D(const AdminListDevicesResponse);
    return static_cast<const AdminListDevicesRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminListDevices response.
 *
 * @param  response  Response to parse.
 */
void AdminListDevicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminListDevicesResponsePrivate
 *
 * @brief  Private implementation for AdminListDevicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminListDevicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminListDevicesResponse instance.
 */
AdminListDevicesResponsePrivate::AdminListDevicesResponsePrivate(
    AdminListDevicesQueueResponse * const q) : AdminListDevicesPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminListDevicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminListDevicesResponsePrivate::AdminListDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminListDevicesResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
