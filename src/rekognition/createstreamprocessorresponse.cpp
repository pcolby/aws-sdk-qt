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

#include "createstreamprocessorresponse.h"
#include "createstreamprocessorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  CreateStreamProcessorResponse
 *
 * @brief  Handles Rekognition CreateStreamProcessor responses.
 *
 * @see    RekognitionClient::createStreamProcessor
 */

/**
 * @brief  Constructs a new CreateStreamProcessorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStreamProcessorResponse::CreateStreamProcessorResponse(
        const CreateStreamProcessorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new CreateStreamProcessorResponsePrivate(this), parent)
{
    setRequest(new CreateStreamProcessorRequest(request));
    setReply(reply);
}

const CreateStreamProcessorRequest * CreateStreamProcessorResponse::request() const
{
    Q_D(const CreateStreamProcessorResponse);
    return static_cast<const CreateStreamProcessorRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition CreateStreamProcessor response.
 *
 * @param  response  Response to parse.
 */
void CreateStreamProcessorResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStreamProcessorResponsePrivate
 *
 * @brief  Private implementation for CreateStreamProcessorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamProcessorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStreamProcessorResponse instance.
 */
CreateStreamProcessorResponsePrivate::CreateStreamProcessorResponsePrivate(
    CreateStreamProcessorQueueResponse * const q) : CreateStreamProcessorPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition CreateStreamProcessorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStreamProcessorResponsePrivate::CreateStreamProcessorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamProcessorResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
