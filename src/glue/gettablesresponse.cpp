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

#include "gettablesresponse.h"
#include "gettablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetTablesResponse
 *
 * @brief  Handles Glue GetTables responses.
 *
 * @see    GlueClient::getTables
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTablesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTablesResponsePrivate(this), parent)
{
    setRequest(new GetTablesRequest(request));
    setReply(reply);
}

const GetTablesRequest * GetTablesResponse::request() const
{
    Q_D(const GetTablesResponse);
    return static_cast<const GetTablesRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetTables response.
 *
 * @param  response  Response to parse.
 */
void GetTablesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTablesResponsePrivate
 *
 * @brief  Private implementation for GetTablesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTablesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTablesResponse instance.
 */
GetTablesResponsePrivate::GetTablesResponsePrivate(
    GetTablesQueueResponse * const q) : GetTablesPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetTablesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTablesResponsePrivate::GetTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTablesResponse"));
    /// @todo
}
