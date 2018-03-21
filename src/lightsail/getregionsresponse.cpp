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

#include "getregionsresponse.h"
#include "getregionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetRegionsResponse
 *
 * @brief  Handles Lightsail GetRegions responses.
 *
 * @see    LightsailClient::getRegions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRegionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetRegionsResponsePrivate(this), parent)
{
    setRequest(new GetRegionsRequest(request));
    setReply(reply);
}

const GetRegionsRequest * GetRegionsResponse::request() const
{
    Q_D(const GetRegionsResponse);
    return static_cast<const GetRegionsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetRegions response.
 *
 * @param  response  Response to parse.
 */
void GetRegionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRegionsResponsePrivate
 *
 * @brief  Private implementation for GetRegionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRegionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRegionsResponse instance.
 */
GetRegionsResponsePrivate::GetRegionsResponsePrivate(
    GetRegionsQueueResponse * const q) : GetRegionsPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetRegionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRegionsResponsePrivate::GetRegionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegionsResponse"));
    /// @todo
}
