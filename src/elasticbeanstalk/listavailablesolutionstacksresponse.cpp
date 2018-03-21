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

#include "listavailablesolutionstacksresponse.h"
#include "listavailablesolutionstacksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  ListAvailableSolutionStacksResponse
 *
 * @brief  Handles ElasticBeanstalk ListAvailableSolutionStacks responses.
 *
 * @see    ElasticBeanstalkClient::listAvailableSolutionStacks
 */

/**
 * @brief  Constructs a new ListAvailableSolutionStacksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAvailableSolutionStacksResponse::ListAvailableSolutionStacksResponse(
        const ListAvailableSolutionStacksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new ListAvailableSolutionStacksResponsePrivate(this), parent)
{
    setRequest(new ListAvailableSolutionStacksRequest(request));
    setReply(reply);
}

const ListAvailableSolutionStacksRequest * ListAvailableSolutionStacksResponse::request() const
{
    Q_D(const ListAvailableSolutionStacksResponse);
    return static_cast<const ListAvailableSolutionStacksRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk ListAvailableSolutionStacks response.
 *
 * @param  response  Response to parse.
 */
void ListAvailableSolutionStacksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAvailableSolutionStacksResponsePrivate
 *
 * @brief  Private implementation for ListAvailableSolutionStacksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAvailableSolutionStacksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAvailableSolutionStacksResponse instance.
 */
ListAvailableSolutionStacksResponsePrivate::ListAvailableSolutionStacksResponsePrivate(
    ListAvailableSolutionStacksQueueResponse * const q) : ListAvailableSolutionStacksPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk ListAvailableSolutionStacksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAvailableSolutionStacksResponsePrivate::ListAvailableSolutionStacksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAvailableSolutionStacksResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
