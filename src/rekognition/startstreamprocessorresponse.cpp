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

#include "startstreamprocessorresponse.h"
#include "startstreamprocessorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  StartStreamProcessorResponse
 *
 * @brief  Handles Rekognition StartStreamProcessor responses.
 *
 * @see    RekognitionClient::startStreamProcessor
 */

/**
 * @brief  Constructs a new StartStreamProcessorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartStreamProcessorResponse::StartStreamProcessorResponse(
        const StartStreamProcessorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartStreamProcessorResponsePrivate(this), parent)
{
    setRequest(new StartStreamProcessorRequest(request));
    setReply(reply);
}

const StartStreamProcessorRequest * StartStreamProcessorResponse::request() const
{
    Q_D(const StartStreamProcessorResponse);
    return static_cast<const StartStreamProcessorRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition StartStreamProcessor response.
 *
 * @param  response  Response to parse.
 */
void StartStreamProcessorResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartStreamProcessorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartStreamProcessorResponsePrivate
 *
 * @brief  Private implementation for StartStreamProcessorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartStreamProcessorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartStreamProcessorResponse instance.
 */
StartStreamProcessorResponsePrivate::StartStreamProcessorResponsePrivate(
    StartStreamProcessorResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition StartStreamProcessorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartStreamProcessorResponsePrivate::parseStartStreamProcessorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartStreamProcessorResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
