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

#include "getfacesearchresponse.h"
#include "getfacesearchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  GetFaceSearchResponse
 *
 * @brief  Handles Rekognition GetFaceSearch responses.
 *
 * @see    RekognitionClient::getFaceSearch
 */

/**
 * @brief  Constructs a new GetFaceSearchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFaceSearchResponse::GetFaceSearchResponse(
        const GetFaceSearchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetFaceSearchResponsePrivate(this), parent)
{
    setRequest(new GetFaceSearchRequest(request));
    setReply(reply);
}

const GetFaceSearchRequest * GetFaceSearchResponse::request() const
{
    Q_D(const GetFaceSearchResponse);
    return static_cast<const GetFaceSearchRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition GetFaceSearch response.
 *
 * @param  response  Response to parse.
 */
void GetFaceSearchResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFaceSearchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFaceSearchResponsePrivate
 *
 * @brief  Private implementation for GetFaceSearchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFaceSearchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFaceSearchResponse instance.
 */
GetFaceSearchResponsePrivate::GetFaceSearchResponsePrivate(
    GetFaceSearchResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition GetFaceSearchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFaceSearchResponsePrivate::GetFaceSearchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFaceSearchResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
