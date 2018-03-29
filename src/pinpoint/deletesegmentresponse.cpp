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

#include "deletesegmentresponse.h"
#include "deletesegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  DeleteSegmentResponse
 *
 * @brief  Handles Pinpoint DeleteSegment responses.
 *
 * @see    PinpointClient::deleteSegment
 */

/**
 * @brief  Constructs a new DeleteSegmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSegmentResponse::DeleteSegmentResponse(
        const DeleteSegmentRequest &request,
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

} // namespace Pinpoint
} // namespace QtAws
