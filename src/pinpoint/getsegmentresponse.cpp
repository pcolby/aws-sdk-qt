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

#include "getsegmentresponse.h"
#include "getsegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetSegmentResponse
 *
 * @brief  Handles Pinpoint GetSegment responses.
 *
 * @see    PinpointClient::getSegment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSegmentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentResponsePrivate(this), parent)
{
    setRequest(new GetSegmentRequest(request));
    setReply(reply);
}

const GetSegmentRequest * GetSegmentResponse::request() const
{
    Q_D(const GetSegmentResponse);
    return static_cast<const GetSegmentRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetSegment response.
 *
 * @param  response  Response to parse.
 */
void GetSegmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSegmentResponsePrivate
 *
 * @brief  Private implementation for GetSegmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSegmentResponse instance.
 */
GetSegmentResponsePrivate::GetSegmentResponsePrivate(
    GetSegmentQueueResponse * const q) : GetSegmentPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetSegmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSegmentResponsePrivate::GetSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentResponse"));
    /// @todo
}
