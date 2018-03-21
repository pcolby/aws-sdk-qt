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

#include "describeinstancesresponse.h"
#include "describeinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeInstancesResponse
 *
 * @brief  Handles OpsWorks DescribeInstances responses.
 *
 * @see    OpsWorksClient::describeInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeInstancesRequest(request));
    setReply(reply);
}

const DescribeInstancesRequest * DescribeInstancesResponse::request() const
{
    Q_D(const DescribeInstancesResponse);
    return static_cast<const DescribeInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeInstances response.
 *
 * @param  response  Response to parse.
 */
void DescribeInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInstancesResponsePrivate
 *
 * @brief  Private implementation for DescribeInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInstancesResponse instance.
 */
DescribeInstancesResponsePrivate::DescribeInstancesResponsePrivate(
    DescribeInstancesQueueResponse * const q) : DescribeInstancesPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInstancesResponsePrivate::DescribeInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstancesResponse"));
    /// @todo
}
