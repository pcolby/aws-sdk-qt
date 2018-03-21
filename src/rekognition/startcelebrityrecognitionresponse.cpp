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

#include "startcelebrityrecognitionresponse.h"
#include "startcelebrityrecognitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  StartCelebrityRecognitionResponse
 *
 * @brief  Handles Rekognition StartCelebrityRecognition responses.
 *
 * @see    RekognitionClient::startCelebrityRecognition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartCelebrityRecognitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartCelebrityRecognitionResponsePrivate(this), parent)
{
    setRequest(new StartCelebrityRecognitionRequest(request));
    setReply(reply);
}

const StartCelebrityRecognitionRequest * StartCelebrityRecognitionResponse::request() const
{
    Q_D(const StartCelebrityRecognitionResponse);
    return static_cast<const StartCelebrityRecognitionRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition StartCelebrityRecognition response.
 *
 * @param  response  Response to parse.
 */
void StartCelebrityRecognitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartCelebrityRecognitionResponsePrivate
 *
 * @brief  Private implementation for StartCelebrityRecognitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartCelebrityRecognitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartCelebrityRecognitionResponse instance.
 */
StartCelebrityRecognitionResponsePrivate::StartCelebrityRecognitionResponsePrivate(
    StartCelebrityRecognitionQueueResponse * const q) : StartCelebrityRecognitionPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition StartCelebrityRecognitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartCelebrityRecognitionResponsePrivate::StartCelebrityRecognitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCelebrityRecognitionResponse"));
    /// @todo
}
