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

#include "describecontainerinstancesresponse.h"
#include "describecontainerinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  DescribeContainerInstancesResponse
 *
 * @brief  Handles ECS DescribeContainerInstances responses.
 *
 * @see    ECSClient::describeContainerInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeContainerInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new DescribeContainerInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeContainerInstancesRequest(request));
    setReply(reply);
}

const DescribeContainerInstancesRequest * DescribeContainerInstancesResponse::request() const
{
    Q_D(const DescribeContainerInstancesResponse);
    return static_cast<const DescribeContainerInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a ECS DescribeContainerInstances response.
 *
 * @param  response  Response to parse.
 */
void DescribeContainerInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeContainerInstancesResponsePrivate
 *
 * @brief  Private implementation for DescribeContainerInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeContainerInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeContainerInstancesResponse instance.
 */
DescribeContainerInstancesResponsePrivate::DescribeContainerInstancesResponsePrivate(
    DescribeContainerInstancesQueueResponse * const q) : DescribeContainerInstancesPrivate(q)
{

}

/**
 * @brief  Parse an ECS DescribeContainerInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeContainerInstancesResponsePrivate::DescribeContainerInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeContainerInstancesResponse"));
    /// @todo
}
