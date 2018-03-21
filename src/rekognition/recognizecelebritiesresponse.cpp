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

#include "recognizecelebritiesresponse.h"
#include "recognizecelebritiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  RecognizeCelebritiesResponse
 *
 * @brief  Handles Rekognition RecognizeCelebrities responses.
 *
 * @see    RekognitionClient::recognizeCelebrities
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RecognizeCelebritiesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new RecognizeCelebritiesResponsePrivate(this), parent)
{
    setRequest(new RecognizeCelebritiesRequest(request));
    setReply(reply);
}

const RecognizeCelebritiesRequest * RecognizeCelebritiesResponse::request() const
{
    Q_D(const RecognizeCelebritiesResponse);
    return static_cast<const RecognizeCelebritiesRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition RecognizeCelebrities response.
 *
 * @param  response  Response to parse.
 */
void RecognizeCelebritiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RecognizeCelebritiesResponsePrivate
 *
 * @brief  Private implementation for RecognizeCelebritiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RecognizeCelebritiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RecognizeCelebritiesResponse instance.
 */
RecognizeCelebritiesResponsePrivate::RecognizeCelebritiesResponsePrivate(
    RecognizeCelebritiesQueueResponse * const q) : RecognizeCelebritiesPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition RecognizeCelebritiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RecognizeCelebritiesResponsePrivate::RecognizeCelebritiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RecognizeCelebritiesResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace AWS
