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

#include "startfacesearchresponse.h"
#include "startfacesearchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  StartFaceSearchResponse
 *
 * @brief  Handles Rekognition StartFaceSearch responses.
 *
 * @see    RekognitionClient::startFaceSearch
 */

/**
 * @brief  Constructs a new StartFaceSearchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartFaceSearchResponse::StartFaceSearchResponse(
        const StartFaceSearchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartFaceSearchResponsePrivate(this), parent)
{
    setRequest(new StartFaceSearchRequest(request));
    setReply(reply);
}

const StartFaceSearchRequest * StartFaceSearchResponse::request() const
{
    Q_D(const StartFaceSearchResponse);
    return static_cast<const StartFaceSearchRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition StartFaceSearch response.
 *
 * @param  response  Response to parse.
 */
void StartFaceSearchResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartFaceSearchResponsePrivate
 *
 * @brief  Private implementation for StartFaceSearchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartFaceSearchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartFaceSearchResponse instance.
 */
StartFaceSearchResponsePrivate::StartFaceSearchResponsePrivate(
    StartFaceSearchQueueResponse * const q) : StartFaceSearchPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition StartFaceSearchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartFaceSearchResponsePrivate::StartFaceSearchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFaceSearchResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace AWS
