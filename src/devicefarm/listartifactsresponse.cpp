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

#include "listartifactsresponse.h"
#include "listartifactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  ListArtifactsResponse
 *
 * @brief  Handles DeviceFarm ListArtifacts responses.
 *
 * @see    DeviceFarmClient::listArtifacts
 */

/**
 * @brief  Constructs a new ListArtifactsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListArtifactsResponse::ListArtifactsResponse(
        const ListArtifactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListArtifactsResponsePrivate(this), parent)
{
    setRequest(new ListArtifactsRequest(request));
    setReply(reply);
}

const ListArtifactsRequest * ListArtifactsResponse::request() const
{
    Q_D(const ListArtifactsResponse);
    return static_cast<const ListArtifactsRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListArtifacts response.
 *
 * @param  response  Response to parse.
 */
void ListArtifactsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListArtifactsResponsePrivate
 *
 * @brief  Private implementation for ListArtifactsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListArtifactsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListArtifactsResponse instance.
 */
ListArtifactsResponsePrivate::ListArtifactsResponsePrivate(
    ListArtifactsQueueResponse * const q) : ListArtifactsPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListArtifactsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListArtifactsResponsePrivate::ListArtifactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListArtifactsResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
