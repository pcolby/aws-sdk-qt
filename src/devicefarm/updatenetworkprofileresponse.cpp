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

#include "updatenetworkprofileresponse.h"
#include "updatenetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  UpdateNetworkProfileResponse
 *
 * @brief  Handles DeviceFarm UpdateNetworkProfile responses.
 *
 * @see    DeviceFarmClient::updateNetworkProfile
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNetworkProfileResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkProfileRequest(request));
    setReply(reply);
}

const UpdateNetworkProfileRequest * UpdateNetworkProfileResponse::request() const
{
    Q_D(const UpdateNetworkProfileResponse);
    return static_cast<const UpdateNetworkProfileRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm UpdateNetworkProfile response.
 *
 * @param  response  Response to parse.
 */
void UpdateNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateNetworkProfileResponsePrivate
 *
 * @brief  Private implementation for UpdateNetworkProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNetworkProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateNetworkProfileResponse instance.
 */
UpdateNetworkProfileResponsePrivate::UpdateNetworkProfileResponsePrivate(
    UpdateNetworkProfileQueueResponse * const q) : UpdateNetworkProfilePrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm UpdateNetworkProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateNetworkProfileResponsePrivate::UpdateNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkProfileResponse"));
    /// @todo
}
