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

#include "getdataendpointresponse.h"
#include "getdataendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisVideo {

/**
 * @class  GetDataEndpointResponse
 *
 * @brief  Handles KinesisVideo GetDataEndpoint responses.
 *
 * @see    KinesisVideoClient::getDataEndpoint
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDataEndpointResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new GetDataEndpointResponsePrivate(this), parent)
{
    setRequest(new GetDataEndpointRequest(request));
    setReply(reply);
}

const GetDataEndpointRequest * GetDataEndpointResponse::request() const
{
    Q_D(const GetDataEndpointResponse);
    return static_cast<const GetDataEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisVideo GetDataEndpoint response.
 *
 * @param  response  Response to parse.
 */
void GetDataEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDataEndpointResponsePrivate
 *
 * @brief  Private implementation for GetDataEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDataEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDataEndpointResponse instance.
 */
GetDataEndpointResponsePrivate::GetDataEndpointResponsePrivate(
    GetDataEndpointQueueResponse * const q) : GetDataEndpointPrivate(q)
{

}

/**
 * @brief  Parse an KinesisVideo GetDataEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDataEndpointResponsePrivate::GetDataEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataEndpointResponse"));
    /// @todo
}

} // namespace KinesisVideo
} // namespace AWS
