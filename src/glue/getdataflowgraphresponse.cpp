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

#include "getdataflowgraphresponse.h"
#include "getdataflowgraphresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetDataflowGraphResponse
 *
 * @brief  Handles Glue GetDataflowGraph responses.
 *
 * @see    GlueClient::getDataflowGraph
 */

/**
 * @brief  Constructs a new GetDataflowGraphResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDataflowGraphResponse::GetDataflowGraphResponse(
        const GetDataflowGraphRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDataflowGraphResponsePrivate(this), parent)
{
    setRequest(new GetDataflowGraphRequest(request));
    setReply(reply);
}

const GetDataflowGraphRequest * GetDataflowGraphResponse::request() const
{
    Q_D(const GetDataflowGraphResponse);
    return static_cast<const GetDataflowGraphRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetDataflowGraph response.
 *
 * @param  response  Response to parse.
 */
void GetDataflowGraphResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDataflowGraphResponsePrivate
 *
 * @brief  Private implementation for GetDataflowGraphResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDataflowGraphResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDataflowGraphResponse instance.
 */
GetDataflowGraphResponsePrivate::GetDataflowGraphResponsePrivate(
    GetDataflowGraphQueueResponse * const q) : GetDataflowGraphPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetDataflowGraphResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDataflowGraphResponsePrivate::GetDataflowGraphResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataflowGraphResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
