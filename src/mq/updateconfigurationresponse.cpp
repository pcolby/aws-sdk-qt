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

#include "updateconfigurationresponse.h"
#include "updateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MQ {

/**
 * @class  UpdateConfigurationResponse
 *
 * @brief  Handles MQ UpdateConfiguration responses.
 *
 * @see    MQClient::updateConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new UpdateConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationRequest(request));
    setReply(reply);
}

const UpdateConfigurationRequest * UpdateConfigurationResponse::request() const
{
    Q_D(const UpdateConfigurationResponse);
    return static_cast<const UpdateConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a MQ UpdateConfiguration response.
 *
 * @param  response  Response to parse.
 */
void UpdateConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateConfigurationResponsePrivate
 *
 * @brief  Private implementation for UpdateConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateConfigurationResponse instance.
 */
UpdateConfigurationResponsePrivate::UpdateConfigurationResponsePrivate(
    UpdateConfigurationQueueResponse * const q) : UpdateConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an MQ UpdateConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateConfigurationResponsePrivate::UpdateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationResponse"));
    /// @todo
}
