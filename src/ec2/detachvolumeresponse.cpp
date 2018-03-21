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

#include "detachvolumeresponse.h"
#include "detachvolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DetachVolumeResponse
 *
 * @brief  Handles EC2 DetachVolume responses.
 *
 * @see    EC2Client::detachVolume
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachVolumeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DetachVolumeResponsePrivate(this), parent)
{
    setRequest(new DetachVolumeRequest(request));
    setReply(reply);
}

const DetachVolumeRequest * DetachVolumeResponse::request() const
{
    Q_D(const DetachVolumeResponse);
    return static_cast<const DetachVolumeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DetachVolume response.
 *
 * @param  response  Response to parse.
 */
void DetachVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachVolumeResponsePrivate
 *
 * @brief  Private implementation for DetachVolumeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachVolumeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachVolumeResponse instance.
 */
DetachVolumeResponsePrivate::DetachVolumeResponsePrivate(
    DetachVolumeQueueResponse * const q) : DetachVolumePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DetachVolumeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachVolumeResponsePrivate::DetachVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachVolumeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
