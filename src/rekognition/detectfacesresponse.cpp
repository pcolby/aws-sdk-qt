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

#include "detectfacesresponse.h"
#include "detectfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  DetectFacesResponse
 *
 * @brief  Handles Rekognition DetectFaces responses.
 *
 * @see    RekognitionClient::detectFaces
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetectFacesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DetectFacesResponsePrivate(this), parent)
{
    setRequest(new DetectFacesRequest(request));
    setReply(reply);
}

const DetectFacesRequest * DetectFacesResponse::request() const
{
    Q_D(const DetectFacesResponse);
    return static_cast<const DetectFacesRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition DetectFaces response.
 *
 * @param  response  Response to parse.
 */
void DetectFacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetectFacesResponsePrivate
 *
 * @brief  Private implementation for DetectFacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectFacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetectFacesResponse instance.
 */
DetectFacesResponsePrivate::DetectFacesResponsePrivate(
    DetectFacesQueueResponse * const q) : DetectFacesPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition DetectFacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetectFacesResponsePrivate::DetectFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectFacesResponse"));
    /// @todo
}
