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

#include "listgroupsresponse.h"
#include "listgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  ListGroupsResponse
 *
 * @brief  Handles Greengrass ListGroups responses.
 *
 * @see    GreengrassClient::listGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListGroupsResponsePrivate(this), parent)
{
    setRequest(new ListGroupsRequest(request));
    setReply(reply);
}

const ListGroupsRequest * ListGroupsResponse::request() const
{
    Q_D(const ListGroupsResponse);
    return static_cast<const ListGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListGroups response.
 *
 * @param  response  Response to parse.
 */
void ListGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGroupsResponsePrivate
 *
 * @brief  Private implementation for ListGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGroupsResponse instance.
 */
ListGroupsResponsePrivate::ListGroupsResponsePrivate(
    ListGroupsQueueResponse * const q) : ListGroupsPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGroupsResponsePrivate::ListGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupsResponse"));
    /// @todo
}
