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

#include "getpartitionresponse.h"
#include "getpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetPartitionResponse
 *
 * @brief  Handles Glue GetPartition responses.
 *
 * @see    GlueClient::getPartition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPartitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetPartitionResponsePrivate(this), parent)
{
    setRequest(new GetPartitionRequest(request));
    setReply(reply);
}

const GetPartitionRequest * GetPartitionResponse::request() const
{
    Q_D(const GetPartitionResponse);
    return static_cast<const GetPartitionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetPartition response.
 *
 * @param  response  Response to parse.
 */
void GetPartitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPartitionResponsePrivate
 *
 * @brief  Private implementation for GetPartitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPartitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPartitionResponse instance.
 */
GetPartitionResponsePrivate::GetPartitionResponsePrivate(
    GetPartitionQueueResponse * const q) : GetPartitionPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetPartitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPartitionResponsePrivate::GetPartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPartitionResponse"));
    /// @todo
}
