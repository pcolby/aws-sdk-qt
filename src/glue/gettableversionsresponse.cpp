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

#include "gettableversionsresponse.h"
#include "gettableversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetTableVersionsResponse
 *
 * @brief  Handles Glue GetTableVersions responses.
 *
 * @see    GlueClient::getTableVersions
 */

/**
 * @brief  Constructs a new GetTableVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTableVersionsResponse::GetTableVersionsResponse(
        const GetTableVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTableVersionsResponsePrivate(this), parent)
{
    setRequest(new GetTableVersionsRequest(request));
    setReply(reply);
}

const GetTableVersionsRequest * GetTableVersionsResponse::request() const
{
    Q_D(const GetTableVersionsResponse);
    return static_cast<const GetTableVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetTableVersions response.
 *
 * @param  response  Response to parse.
 */
void GetTableVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTableVersionsResponsePrivate
 *
 * @brief  Private implementation for GetTableVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTableVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTableVersionsResponse instance.
 */
GetTableVersionsResponsePrivate::GetTableVersionsResponsePrivate(
    GetTableVersionsQueueResponse * const q) : GetTableVersionsPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetTableVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTableVersionsResponsePrivate::GetTableVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTableVersionsResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
