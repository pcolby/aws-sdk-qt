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

#include "startfacedetectionresponse.h"
#include "startfacedetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  StartFaceDetectionResponse
 *
 * @brief  Handles Rekognition StartFaceDetection responses.
 *
 * @see    RekognitionClient::startFaceDetection
 */

/**
 * @brief  Constructs a new StartFaceDetectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartFaceDetectionResponse::StartFaceDetectionResponse(
        const StartFaceDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartFaceDetectionResponsePrivate(this), parent)
{
    setRequest(new StartFaceDetectionRequest(request));
    setReply(reply);
}

const StartFaceDetectionRequest * StartFaceDetectionResponse::request() const
{
    Q_D(const StartFaceDetectionResponse);
    return static_cast<const StartFaceDetectionRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition StartFaceDetection response.
 *
 * @param  response  Response to parse.
 */
void StartFaceDetectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartFaceDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartFaceDetectionResponsePrivate
 *
 * @brief  Private implementation for StartFaceDetectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartFaceDetectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartFaceDetectionResponse instance.
 */
StartFaceDetectionResponsePrivate::StartFaceDetectionResponsePrivate(
    StartFaceDetectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition StartFaceDetectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartFaceDetectionResponsePrivate::parseStartFaceDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFaceDetectionResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
