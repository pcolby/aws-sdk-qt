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

#include "deletesegmentresponse.h"
#include "deletesegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  DeleteSegmentResponse
 *
 * @brief  Handles Pinpoint DeleteSegment responses.
 *
 * @see    PinpointClient::deleteSegment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSegmentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteSegmentResponsePrivate(this), parent)
{
    setRequest(new DeleteSegmentRequest(request));
    setReply(reply);
}

const DeleteSegmentRequest * DeleteSegmentResponse::request() const
{
    Q_D(const DeleteSegmentResponse);
    return static_cast<const DeleteSegmentRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint DeleteSegment response.
 *
 * @param  response  Response to parse.
 */
void DeleteSegmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSegmentResponsePrivate
 *
 * @brief  Private implementation for DeleteSegmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSegmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSegmentResponse instance.
 */
DeleteSegmentResponsePrivate::DeleteSegmentResponsePrivate(
    DeleteSegmentQueueResponse * const q) : DeleteSegmentPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint DeleteSegmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSegmentResponsePrivate::DeleteSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSegmentResponse"));
    /// @todo
}
