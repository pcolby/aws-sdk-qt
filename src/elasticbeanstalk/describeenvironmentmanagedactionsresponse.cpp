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

#include "describeenvironmentmanagedactionsresponse.h"
#include "describeenvironmentmanagedactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DescribeEnvironmentManagedActionsResponse
 *
 * @brief  Handles ElasticBeanstalk DescribeEnvironmentManagedActions responses.
 *
 * @see    ElasticBeanstalkClient::describeEnvironmentManagedActions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEnvironmentManagedActionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DescribeEnvironmentManagedActionsResponsePrivate(this), parent)
{
    setRequest(new DescribeEnvironmentManagedActionsRequest(request));
    setReply(reply);
}

const DescribeEnvironmentManagedActionsRequest * DescribeEnvironmentManagedActionsResponse::request() const
{
    Q_D(const DescribeEnvironmentManagedActionsResponse);
    return static_cast<const DescribeEnvironmentManagedActionsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DescribeEnvironmentManagedActions response.
 *
 * @param  response  Response to parse.
 */
void DescribeEnvironmentManagedActionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentManagedActionsResponsePrivate
 *
 * @brief  Private implementation for DescribeEnvironmentManagedActionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentManagedActionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEnvironmentManagedActionsResponse instance.
 */
DescribeEnvironmentManagedActionsResponsePrivate::DescribeEnvironmentManagedActionsResponsePrivate(
    DescribeEnvironmentManagedActionsQueueResponse * const q) : DescribeEnvironmentManagedActionsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DescribeEnvironmentManagedActionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEnvironmentManagedActionsResponsePrivate::DescribeEnvironmentManagedActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEnvironmentManagedActionsResponse"));
    /// @todo
}
