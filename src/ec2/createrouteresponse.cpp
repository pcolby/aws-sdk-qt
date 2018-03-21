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

#include "createrouteresponse.h"
#include "createrouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateRouteResponse
 *
 * @brief  Handles EC2 CreateRoute responses.
 *
 * @see    EC2Client::createRoute
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRouteResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateRouteResponsePrivate(this), parent)
{
    setRequest(new CreateRouteRequest(request));
    setReply(reply);
}

const CreateRouteRequest * CreateRouteResponse::request() const
{
    Q_D(const CreateRouteResponse);
    return static_cast<const CreateRouteRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateRoute response.
 *
 * @param  response  Response to parse.
 */
void CreateRouteResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRouteResponsePrivate
 *
 * @brief  Private implementation for CreateRouteResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRouteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRouteResponse instance.
 */
CreateRouteResponsePrivate::CreateRouteResponsePrivate(
    CreateRouteQueueResponse * const q) : CreateRoutePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateRouteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRouteResponsePrivate::CreateRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRouteResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
