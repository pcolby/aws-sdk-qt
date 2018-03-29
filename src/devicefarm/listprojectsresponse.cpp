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

#include "listprojectsresponse.h"
#include "listprojectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListProjectsResponse
 *
 * @brief  Handles DeviceFarm ListProjects responses.
 *
 * @see    DeviceFarmClient::listProjects
 */

/**
 * @brief  Constructs a new ListProjectsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListProjectsResponse::ListProjectsResponse(
        const ListProjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListProjectsResponsePrivate(this), parent)
{
    setRequest(new ListProjectsRequest(request));
    setReply(reply);
}

const ListProjectsRequest * ListProjectsResponse::request() const
{
    Q_D(const ListProjectsResponse);
    return static_cast<const ListProjectsRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListProjects response.
 *
 * @param  response  Response to parse.
 */
void ListProjectsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListProjectsResponsePrivate
 *
 * @brief  Private implementation for ListProjectsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListProjectsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListProjectsResponse instance.
 */
ListProjectsResponsePrivate::ListProjectsResponsePrivate(
    ListProjectsQueueResponse * const q) : ListProjectsPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListProjectsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListProjectsResponsePrivate::ListProjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProjectsResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
