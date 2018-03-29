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

#include "listoriginendpointsresponse.h"
#include "listoriginendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaPackage {

/**
 * @class  ListOriginEndpointsResponse
 *
 * @brief  Handles MediaPackage ListOriginEndpoints responses.
 *
 * @see    MediaPackageClient::listOriginEndpoints
 */

/**
 * @brief  Constructs a new ListOriginEndpointsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOriginEndpointsResponse::ListOriginEndpointsResponse(
        const ListOriginEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new ListOriginEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListOriginEndpointsRequest(request));
    setReply(reply);
}

const ListOriginEndpointsRequest * ListOriginEndpointsResponse::request() const
{
    Q_D(const ListOriginEndpointsResponse);
    return static_cast<const ListOriginEndpointsRequest *>(d->request);
}

/**
 * @brief  Parse a MediaPackage ListOriginEndpoints response.
 *
 * @param  response  Response to parse.
 */
void ListOriginEndpointsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListOriginEndpointsResponsePrivate
 *
 * @brief  Private implementation for ListOriginEndpointsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOriginEndpointsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOriginEndpointsResponse instance.
 */
ListOriginEndpointsResponsePrivate::ListOriginEndpointsResponsePrivate(
    ListOriginEndpointsQueueResponse * const q) : ListOriginEndpointsPrivate(q)
{

}

/**
 * @brief  Parse an MediaPackage ListOriginEndpointsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOriginEndpointsResponsePrivate::ListOriginEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOriginEndpointsResponse"));
    /// @todo
}

} // namespace MediaPackage
} // namespace AWS
