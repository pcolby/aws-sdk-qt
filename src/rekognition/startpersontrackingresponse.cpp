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

#include "startpersontrackingresponse.h"
#include "startpersontrackingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  StartPersonTrackingResponse
 *
 * @brief  Handles Rekognition StartPersonTracking responses.
 *
 * @see    RekognitionClient::startPersonTracking
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartPersonTrackingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartPersonTrackingResponsePrivate(this), parent)
{
    setRequest(new StartPersonTrackingRequest(request));
    setReply(reply);
}

const StartPersonTrackingRequest * StartPersonTrackingResponse::request() const
{
    Q_D(const StartPersonTrackingResponse);
    return static_cast<const StartPersonTrackingRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition StartPersonTracking response.
 *
 * @param  response  Response to parse.
 */
void StartPersonTrackingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartPersonTrackingResponsePrivate
 *
 * @brief  Private implementation for StartPersonTrackingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartPersonTrackingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartPersonTrackingResponse instance.
 */
StartPersonTrackingResponsePrivate::StartPersonTrackingResponsePrivate(
    StartPersonTrackingQueueResponse * const q) : StartPersonTrackingPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition StartPersonTrackingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartPersonTrackingResponsePrivate::StartPersonTrackingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartPersonTrackingResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace AWS
