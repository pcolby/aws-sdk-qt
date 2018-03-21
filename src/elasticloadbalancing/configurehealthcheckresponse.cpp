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

#include "configurehealthcheckresponse.h"
#include "configurehealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  ConfigureHealthCheckResponse
 *
 * @brief  Handles ElasticLoadBalancing ConfigureHealthCheck responses.
 *
 * @see    ElasticLoadBalancingClient::configureHealthCheck
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ConfigureHealthCheckResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new ConfigureHealthCheckResponsePrivate(this), parent)
{
    setRequest(new ConfigureHealthCheckRequest(request));
    setReply(reply);
}

const ConfigureHealthCheckRequest * ConfigureHealthCheckResponse::request() const
{
    Q_D(const ConfigureHealthCheckResponse);
    return static_cast<const ConfigureHealthCheckRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing ConfigureHealthCheck response.
 *
 * @param  response  Response to parse.
 */
void ConfigureHealthCheckResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ConfigureHealthCheckResponsePrivate
 *
 * @brief  Private implementation for ConfigureHealthCheckResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfigureHealthCheckResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ConfigureHealthCheckResponse instance.
 */
ConfigureHealthCheckResponsePrivate::ConfigureHealthCheckResponsePrivate(
    ConfigureHealthCheckQueueResponse * const q) : ConfigureHealthCheckPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing ConfigureHealthCheckResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ConfigureHealthCheckResponsePrivate::ConfigureHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfigureHealthCheckResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace AWS
