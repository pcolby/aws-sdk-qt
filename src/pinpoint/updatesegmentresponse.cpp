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

#include "updatesegmentresponse.h"
#include "updatesegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateSegmentResponse
 *
 * @brief  Handles Pinpoint UpdateSegment responses.
 *
 * @see    PinpointClient::updateSegment
 */

/**
 * @brief  Constructs a new UpdateSegmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSegmentResponse::UpdateSegmentResponse(
        const UpdateSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateSegmentResponse(new UpdateSegmentResponsePrivate(this), parent)
{
    setRequest(new UpdateSegmentRequest(request));
    setReply(reply);
}

const UpdateSegmentRequest * UpdateSegmentResponse::request() const
{
    Q_D(const UpdateSegmentResponse);
    return static_cast<const UpdateSegmentRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint UpdateSegment response.
 *
 * @param  response  Response to parse.
 */
void UpdateSegmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSegmentResponsePrivate
 *
 * @brief  Private implementation for UpdateSegmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSegmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSegmentResponse instance.
 */
UpdateSegmentResponsePrivate::UpdateSegmentResponsePrivate(
    UpdateSegmentResponse * const q) : PinpointResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint UpdateSegmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSegmentResponsePrivate::parseUpdateSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSegmentResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
