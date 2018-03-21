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

#include "updatehealthcheckresponse.h"
#include "updatehealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  UpdateHealthCheckResponse
 *
 * @brief  Handles Route53 UpdateHealthCheck responses.
 *
 * @see    Route53Client::updateHealthCheck
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateHealthCheckResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new UpdateHealthCheckResponsePrivate(this), parent)
{
    setRequest(new UpdateHealthCheckRequest(request));
    setReply(reply);
}

const UpdateHealthCheckRequest * UpdateHealthCheckResponse::request() const
{
    Q_D(const UpdateHealthCheckResponse);
    return static_cast<const UpdateHealthCheckRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 UpdateHealthCheck response.
 *
 * @param  response  Response to parse.
 */
void UpdateHealthCheckResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateHealthCheckResponsePrivate
 *
 * @brief  Private implementation for UpdateHealthCheckResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateHealthCheckResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateHealthCheckResponse instance.
 */
UpdateHealthCheckResponsePrivate::UpdateHealthCheckResponsePrivate(
    UpdateHealthCheckQueueResponse * const q) : UpdateHealthCheckPrivate(q)
{

}

/**
 * @brief  Parse an Route53 UpdateHealthCheckResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateHealthCheckResponsePrivate::UpdateHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHealthCheckResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
