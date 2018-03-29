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

#include "deletefacesresponse.h"
#include "deletefacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  DeleteFacesResponse
 *
 * @brief  Handles Rekognition DeleteFaces responses.
 *
 * @see    RekognitionClient::deleteFaces
 */

/**
 * @brief  Constructs a new DeleteFacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFacesResponse::DeleteFacesResponse(
        const DeleteFacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DeleteFacesResponsePrivate(this), parent)
{
    setRequest(new DeleteFacesRequest(request));
    setReply(reply);
}

const DeleteFacesRequest * DeleteFacesResponse::request() const
{
    Q_D(const DeleteFacesResponse);
    return static_cast<const DeleteFacesRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition DeleteFaces response.
 *
 * @param  response  Response to parse.
 */
void DeleteFacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFacesResponsePrivate
 *
 * @brief  Private implementation for DeleteFacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFacesResponse instance.
 */
DeleteFacesResponsePrivate::DeleteFacesResponsePrivate(
    DeleteFacesResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition DeleteFacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFacesResponsePrivate::DeleteFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFacesResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
