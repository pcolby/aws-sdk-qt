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

#include "startlabeldetectionresponse.h"
#include "startlabeldetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  StartLabelDetectionResponse
 *
 * @brief  Handles Rekognition StartLabelDetection responses.
 *
 * @see    RekognitionClient::startLabelDetection
 */

/**
 * @brief  Constructs a new StartLabelDetectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartLabelDetectionResponse::StartLabelDetectionResponse(
        const StartLabelDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartLabelDetectionResponsePrivate(this), parent)
{
    setRequest(new StartLabelDetectionRequest(request));
    setReply(reply);
}

const StartLabelDetectionRequest * StartLabelDetectionResponse::request() const
{
    Q_D(const StartLabelDetectionResponse);
    return static_cast<const StartLabelDetectionRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition StartLabelDetection response.
 *
 * @param  response  Response to parse.
 */
void StartLabelDetectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartLabelDetectionResponsePrivate
 *
 * @brief  Private implementation for StartLabelDetectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartLabelDetectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartLabelDetectionResponse instance.
 */
StartLabelDetectionResponsePrivate::StartLabelDetectionResponsePrivate(
    StartLabelDetectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition StartLabelDetectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartLabelDetectionResponsePrivate::StartLabelDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartLabelDetectionResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
