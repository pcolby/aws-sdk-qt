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

#include "getblueprintsresponse.h"
#include "getblueprintsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetBlueprintsResponse
 *
 * @brief  Handles Lightsail GetBlueprints responses.
 *
 * @see    LightsailClient::getBlueprints
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBlueprintsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetBlueprintsResponsePrivate(this), parent)
{
    setRequest(new GetBlueprintsRequest(request));
    setReply(reply);
}

const GetBlueprintsRequest * GetBlueprintsResponse::request() const
{
    Q_D(const GetBlueprintsResponse);
    return static_cast<const GetBlueprintsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetBlueprints response.
 *
 * @param  response  Response to parse.
 */
void GetBlueprintsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBlueprintsResponsePrivate
 *
 * @brief  Private implementation for GetBlueprintsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBlueprintsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBlueprintsResponse instance.
 */
GetBlueprintsResponsePrivate::GetBlueprintsResponsePrivate(
    GetBlueprintsQueueResponse * const q) : GetBlueprintsPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetBlueprintsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBlueprintsResponsePrivate::GetBlueprintsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBlueprintsResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
