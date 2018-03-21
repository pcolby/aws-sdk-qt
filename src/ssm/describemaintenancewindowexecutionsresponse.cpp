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

#include "describemaintenancewindowexecutionsresponse.h"
#include "describemaintenancewindowexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowExecutionsResponse
 *
 * @brief  Handles SSM DescribeMaintenanceWindowExecutions responses.
 *
 * @see    SSMClient::describeMaintenanceWindowExecutions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMaintenanceWindowExecutionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeMaintenanceWindowExecutionsResponsePrivate(this), parent)
{
    setRequest(new DescribeMaintenanceWindowExecutionsRequest(request));
    setReply(reply);
}

const DescribeMaintenanceWindowExecutionsRequest * DescribeMaintenanceWindowExecutionsResponse::request() const
{
    Q_D(const DescribeMaintenanceWindowExecutionsResponse);
    return static_cast<const DescribeMaintenanceWindowExecutionsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeMaintenanceWindowExecutions response.
 *
 * @param  response  Response to parse.
 */
void DescribeMaintenanceWindowExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowExecutionsResponsePrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowExecutionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMaintenanceWindowExecutionsResponse instance.
 */
DescribeMaintenanceWindowExecutionsResponsePrivate::DescribeMaintenanceWindowExecutionsResponsePrivate(
    DescribeMaintenanceWindowExecutionsQueueResponse * const q) : DescribeMaintenanceWindowExecutionsPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeMaintenanceWindowExecutionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMaintenanceWindowExecutionsResponsePrivate::DescribeMaintenanceWindowExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMaintenanceWindowExecutionsResponse"));
    /// @todo
}
