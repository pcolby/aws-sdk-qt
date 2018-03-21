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

#include "getsegmentsresponse.h"
#include "getsegmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetSegmentsResponse
 *
 * @brief  Handles Pinpoint GetSegments responses.
 *
 * @see    PinpointClient::getSegments
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSegmentsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentsResponsePrivate(this), parent)
{
    setRequest(new GetSegmentsRequest(request));
    setReply(reply);
}

const GetSegmentsRequest * GetSegmentsResponse::request() const
{
    Q_D(const GetSegmentsResponse);
    return static_cast<const GetSegmentsRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetSegments response.
 *
 * @param  response  Response to parse.
 */
void GetSegmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSegmentsResponsePrivate
 *
 * @brief  Private implementation for GetSegmentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSegmentsResponse instance.
 */
GetSegmentsResponsePrivate::GetSegmentsResponsePrivate(
    GetSegmentsQueueResponse * const q) : GetSegmentsPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetSegmentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSegmentsResponsePrivate::GetSegmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
