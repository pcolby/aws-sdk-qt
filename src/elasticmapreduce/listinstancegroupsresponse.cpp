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

#include "listinstancegroupsresponse.h"
#include "listinstancegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  ListInstanceGroupsResponse
 *
 * @brief  Handles EMR ListInstanceGroups responses.
 *
 * @see    EMRClient::listInstanceGroups
 */

/**
 * @brief  Constructs a new ListInstanceGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInstanceGroupsResponse::ListInstanceGroupsResponse(
        const ListInstanceGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new ListInstanceGroupsResponsePrivate(this), parent)
{
    setRequest(new ListInstanceGroupsRequest(request));
    setReply(reply);
}

const ListInstanceGroupsRequest * ListInstanceGroupsResponse::request() const
{
    Q_D(const ListInstanceGroupsResponse);
    return static_cast<const ListInstanceGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a EMR ListInstanceGroups response.
 *
 * @param  response  Response to parse.
 */
void ListInstanceGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListInstanceGroupsResponsePrivate
 *
 * @brief  Private implementation for ListInstanceGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInstanceGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInstanceGroupsResponse instance.
 */
ListInstanceGroupsResponsePrivate::ListInstanceGroupsResponsePrivate(
    ListInstanceGroupsQueueResponse * const q) : ListInstanceGroupsPrivate(q)
{

}

/**
 * @brief  Parse an EMR ListInstanceGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInstanceGroupsResponsePrivate::ListInstanceGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstanceGroupsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace AWS
