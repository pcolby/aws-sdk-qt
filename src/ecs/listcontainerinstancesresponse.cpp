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

#include "listcontainerinstancesresponse.h"
#include "listcontainerinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  ListContainerInstancesResponse
 *
 * @brief  Handles ECS ListContainerInstances responses.
 *
 * @see    ECSClient::listContainerInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListContainerInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new ListContainerInstancesResponsePrivate(this), parent)
{
    setRequest(new ListContainerInstancesRequest(request));
    setReply(reply);
}

const ListContainerInstancesRequest * ListContainerInstancesResponse::request() const
{
    Q_D(const ListContainerInstancesResponse);
    return static_cast<const ListContainerInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a ECS ListContainerInstances response.
 *
 * @param  response  Response to parse.
 */
void ListContainerInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListContainerInstancesResponsePrivate
 *
 * @brief  Private implementation for ListContainerInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListContainerInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListContainerInstancesResponse instance.
 */
ListContainerInstancesResponsePrivate::ListContainerInstancesResponsePrivate(
    ListContainerInstancesQueueResponse * const q) : ListContainerInstancesPrivate(q)
{

}

/**
 * @brief  Parse an ECS ListContainerInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListContainerInstancesResponsePrivate::ListContainerInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContainerInstancesResponse"));
    /// @todo
}
