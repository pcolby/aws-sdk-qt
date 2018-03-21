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

#include "getmappingresponse.h"
#include "getmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetMappingResponse
 *
 * @brief  Handles Glue GetMapping responses.
 *
 * @see    GlueClient::getMapping
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMappingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetMappingResponsePrivate(this), parent)
{
    setRequest(new GetMappingRequest(request));
    setReply(reply);
}

const GetMappingRequest * GetMappingResponse::request() const
{
    Q_D(const GetMappingResponse);
    return static_cast<const GetMappingRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetMapping response.
 *
 * @param  response  Response to parse.
 */
void GetMappingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMappingResponsePrivate
 *
 * @brief  Private implementation for GetMappingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMappingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMappingResponse instance.
 */
GetMappingResponsePrivate::GetMappingResponsePrivate(
    GetMappingQueueResponse * const q) : GetMappingPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetMappingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMappingResponsePrivate::GetMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMappingResponse"));
    /// @todo
}
