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

#include "searchfacesbyimageresponse.h"
#include "searchfacesbyimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  SearchFacesByImageResponse
 *
 * @brief  Handles Rekognition SearchFacesByImage responses.
 *
 * @see    RekognitionClient::searchFacesByImage
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchFacesByImageResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new SearchFacesByImageResponsePrivate(this), parent)
{
    setRequest(new SearchFacesByImageRequest(request));
    setReply(reply);
}

const SearchFacesByImageRequest * SearchFacesByImageResponse::request() const
{
    Q_D(const SearchFacesByImageResponse);
    return static_cast<const SearchFacesByImageRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition SearchFacesByImage response.
 *
 * @param  response  Response to parse.
 */
void SearchFacesByImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchFacesByImageResponsePrivate
 *
 * @brief  Private implementation for SearchFacesByImageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchFacesByImageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchFacesByImageResponse instance.
 */
SearchFacesByImageResponsePrivate::SearchFacesByImageResponsePrivate(
    SearchFacesByImageQueueResponse * const q) : SearchFacesByImagePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition SearchFacesByImageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchFacesByImageResponsePrivate::SearchFacesByImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchFacesByImageResponse"));
    /// @todo
}
