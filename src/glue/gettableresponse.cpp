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

#include "gettableresponse.h"
#include "gettableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetTableResponse
 *
 * @brief  Handles Glue GetTable responses.
 *
 * @see    GlueClient::getTable
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTableResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTableResponsePrivate(this), parent)
{
    setRequest(new GetTableRequest(request));
    setReply(reply);
}

const GetTableRequest * GetTableResponse::request() const
{
    Q_D(const GetTableResponse);
    return static_cast<const GetTableRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetTable response.
 *
 * @param  response  Response to parse.
 */
void GetTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTableResponsePrivate
 *
 * @brief  Private implementation for GetTableResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTableResponse instance.
 */
GetTableResponsePrivate::GetTableResponsePrivate(
    GetTableQueueResponse * const q) : GetTablePrivate(q)
{

}

/**
 * @brief  Parse an Glue GetTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTableResponsePrivate::GetTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTableResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
