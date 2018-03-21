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

#include "comparefacesresponse.h"
#include "comparefacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  CompareFacesResponse
 *
 * @brief  Handles Rekognition CompareFaces responses.
 *
 * @see    RekognitionClient::compareFaces
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CompareFacesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new CompareFacesResponsePrivate(this), parent)
{
    setRequest(new CompareFacesRequest(request));
    setReply(reply);
}

const CompareFacesRequest * CompareFacesResponse::request() const
{
    Q_D(const CompareFacesResponse);
    return static_cast<const CompareFacesRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition CompareFaces response.
 *
 * @param  response  Response to parse.
 */
void CompareFacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CompareFacesResponsePrivate
 *
 * @brief  Private implementation for CompareFacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompareFacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CompareFacesResponse instance.
 */
CompareFacesResponsePrivate::CompareFacesResponsePrivate(
    CompareFacesQueueResponse * const q) : CompareFacesPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition CompareFacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CompareFacesResponsePrivate::CompareFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompareFacesResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace AWS
