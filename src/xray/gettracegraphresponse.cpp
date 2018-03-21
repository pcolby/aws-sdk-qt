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

#include "gettracegraphresponse.h"
#include "gettracegraphresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace XRay {

/**
 * @class  GetTraceGraphResponse
 *
 * @brief  Handles XRay GetTraceGraph responses.
 *
 * @see    XRayClient::getTraceGraph
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTraceGraphResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetTraceGraphResponsePrivate(this), parent)
{
    setRequest(new GetTraceGraphRequest(request));
    setReply(reply);
}

const GetTraceGraphRequest * GetTraceGraphResponse::request() const
{
    Q_D(const GetTraceGraphResponse);
    return static_cast<const GetTraceGraphRequest *>(d->request);
}

/**
 * @brief  Parse a XRay GetTraceGraph response.
 *
 * @param  response  Response to parse.
 */
void GetTraceGraphResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTraceGraphResponsePrivate
 *
 * @brief  Private implementation for GetTraceGraphResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTraceGraphResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTraceGraphResponse instance.
 */
GetTraceGraphResponsePrivate::GetTraceGraphResponsePrivate(
    GetTraceGraphQueueResponse * const q) : GetTraceGraphPrivate(q)
{

}

/**
 * @brief  Parse an XRay GetTraceGraphResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTraceGraphResponsePrivate::GetTraceGraphResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTraceGraphResponse"));
    /// @todo
}

} // namespace XRay
} // namespace AWS
