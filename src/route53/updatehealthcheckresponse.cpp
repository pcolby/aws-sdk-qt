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

#include "updatehealthcheckresponse.h"
#include "updatehealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  UpdateHealthCheckResponse
 *
 * @brief  Handles Route53 UpdateHealthCheck responses.
 *
 * @see    Route53Client::updateHealthCheck
 */

/**
 * @brief  Constructs a new UpdateHealthCheckResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateHealthCheckResponse::UpdateHealthCheckResponse(
        const UpdateHealthCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateHealthCheckResponse(new UpdateHealthCheckResponsePrivate(this), parent)
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
    Q_D(UpdateHealthCheckResponse);
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
    UpdateHealthCheckResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 UpdateHealthCheckResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateHealthCheckResponsePrivate::parseUpdateHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHealthCheckResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
