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

#include "listcollectionsresponse.h"
#include "listcollectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  ListCollectionsResponse
 *
 * @brief  Handles Rekognition ListCollections responses.
 *
 * @see    RekognitionClient::listCollections
 */

/**
 * @brief  Constructs a new ListCollectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCollectionsResponse::ListCollectionsResponse(
        const ListCollectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new ListCollectionsResponsePrivate(this), parent)
{
    setRequest(new ListCollectionsRequest(request));
    setReply(reply);
}

const ListCollectionsRequest * ListCollectionsResponse::request() const
{
    Q_D(const ListCollectionsResponse);
    return static_cast<const ListCollectionsRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition ListCollections response.
 *
 * @param  response  Response to parse.
 */
void ListCollectionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCollectionsResponsePrivate
 *
 * @brief  Private implementation for ListCollectionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCollectionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCollectionsResponse instance.
 */
ListCollectionsResponsePrivate::ListCollectionsResponsePrivate(
    ListCollectionsQueueResponse * const q) : ListCollectionsPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition ListCollectionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCollectionsResponsePrivate::ListCollectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCollectionsResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace AWS
