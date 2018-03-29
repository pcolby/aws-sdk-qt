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

#include "detectlabelsresponse.h"
#include "detectlabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  DetectLabelsResponse
 *
 * @brief  Handles Rekognition DetectLabels responses.
 *
 * @see    RekognitionClient::detectLabels
 */

/**
 * @brief  Constructs a new DetectLabelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetectLabelsResponse::DetectLabelsResponse(
        const DetectLabelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DetectLabelsResponse(new DetectLabelsResponsePrivate(this), parent)
{
    setRequest(new DetectLabelsRequest(request));
    setReply(reply);
}

const DetectLabelsRequest * DetectLabelsResponse::request() const
{
    Q_D(const DetectLabelsResponse);
    return static_cast<const DetectLabelsRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition DetectLabels response.
 *
 * @param  response  Response to parse.
 */
void DetectLabelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetectLabelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetectLabelsResponsePrivate
 *
 * @brief  Private implementation for DetectLabelsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectLabelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetectLabelsResponse instance.
 */
DetectLabelsResponsePrivate::DetectLabelsResponsePrivate(
    DetectLabelsResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition DetectLabelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetectLabelsResponsePrivate::parseDetectLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectLabelsResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
