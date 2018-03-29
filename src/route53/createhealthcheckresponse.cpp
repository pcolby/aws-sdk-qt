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

#include "createhealthcheckresponse.h"
#include "createhealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  CreateHealthCheckResponse
 *
 * @brief  Handles Route53 CreateHealthCheck responses.
 *
 * @see    Route53Client::createHealthCheck
 */

/**
 * @brief  Constructs a new CreateHealthCheckResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateHealthCheckResponse::CreateHealthCheckResponse(
        const CreateHealthCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateHealthCheckResponsePrivate(this), parent)
{
    setRequest(new CreateHealthCheckRequest(request));
    setReply(reply);
}

const CreateHealthCheckRequest * CreateHealthCheckResponse::request() const
{
    Q_D(const CreateHealthCheckResponse);
    return static_cast<const CreateHealthCheckRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 CreateHealthCheck response.
 *
 * @param  response  Response to parse.
 */
void CreateHealthCheckResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateHealthCheckResponsePrivate
 *
 * @brief  Private implementation for CreateHealthCheckResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHealthCheckResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateHealthCheckResponse instance.
 */
CreateHealthCheckResponsePrivate::CreateHealthCheckResponsePrivate(
    CreateHealthCheckQueueResponse * const q) : CreateHealthCheckPrivate(q)
{

}

/**
 * @brief  Parse an Route53 CreateHealthCheckResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateHealthCheckResponsePrivate::CreateHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHealthCheckResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
