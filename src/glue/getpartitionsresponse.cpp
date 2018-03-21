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

#include "getpartitionsresponse.h"
#include "getpartitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetPartitionsResponse
 *
 * @brief  Handles Glue GetPartitions responses.
 *
 * @see    GlueClient::getPartitions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPartitionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetPartitionsResponsePrivate(this), parent)
{
    setRequest(new GetPartitionsRequest(request));
    setReply(reply);
}

const GetPartitionsRequest * GetPartitionsResponse::request() const
{
    Q_D(const GetPartitionsResponse);
    return static_cast<const GetPartitionsRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetPartitions response.
 *
 * @param  response  Response to parse.
 */
void GetPartitionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPartitionsResponsePrivate
 *
 * @brief  Private implementation for GetPartitionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPartitionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPartitionsResponse instance.
 */
GetPartitionsResponsePrivate::GetPartitionsResponsePrivate(
    GetPartitionsQueueResponse * const q) : GetPartitionsPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetPartitionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPartitionsResponsePrivate::GetPartitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPartitionsResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
