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

#include "getcrawlersresponse.h"
#include "getcrawlersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetCrawlersResponse
 *
 * @brief  Handles Glue GetCrawlers responses.
 *
 * @see    GlueClient::getCrawlers
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCrawlersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetCrawlersResponsePrivate(this), parent)
{
    setRequest(new GetCrawlersRequest(request));
    setReply(reply);
}

const GetCrawlersRequest * GetCrawlersResponse::request() const
{
    Q_D(const GetCrawlersResponse);
    return static_cast<const GetCrawlersRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetCrawlers response.
 *
 * @param  response  Response to parse.
 */
void GetCrawlersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCrawlersResponsePrivate
 *
 * @brief  Private implementation for GetCrawlersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCrawlersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCrawlersResponse instance.
 */
GetCrawlersResponsePrivate::GetCrawlersResponsePrivate(
    GetCrawlersQueueResponse * const q) : GetCrawlersPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetCrawlersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCrawlersResponsePrivate::GetCrawlersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCrawlersResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
