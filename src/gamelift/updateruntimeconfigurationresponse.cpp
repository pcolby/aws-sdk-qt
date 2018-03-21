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

#include "updateruntimeconfigurationresponse.h"
#include "updateruntimeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  UpdateRuntimeConfigurationResponse
 *
 * @brief  Handles GameLift UpdateRuntimeConfiguration responses.
 *
 * @see    GameLiftClient::updateRuntimeConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRuntimeConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new UpdateRuntimeConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateRuntimeConfigurationRequest(request));
    setReply(reply);
}

const UpdateRuntimeConfigurationRequest * UpdateRuntimeConfigurationResponse::request() const
{
    Q_D(const UpdateRuntimeConfigurationResponse);
    return static_cast<const UpdateRuntimeConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift UpdateRuntimeConfiguration response.
 *
 * @param  response  Response to parse.
 */
void UpdateRuntimeConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRuntimeConfigurationResponsePrivate
 *
 * @brief  Private implementation for UpdateRuntimeConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRuntimeConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRuntimeConfigurationResponse instance.
 */
UpdateRuntimeConfigurationResponsePrivate::UpdateRuntimeConfigurationResponsePrivate(
    UpdateRuntimeConfigurationQueueResponse * const q) : UpdateRuntimeConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an GameLift UpdateRuntimeConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRuntimeConfigurationResponsePrivate::UpdateRuntimeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRuntimeConfigurationResponse"));
    /// @todo
}
