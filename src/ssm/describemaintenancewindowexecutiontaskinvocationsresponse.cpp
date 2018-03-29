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

#include "describemaintenancewindowexecutiontaskinvocationsresponse.h"
#include "describemaintenancewindowexecutiontaskinvocationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowExecutionTaskInvocationsResponse
 *
 * @brief  Handles SSM DescribeMaintenanceWindowExecutionTaskInvocations responses.
 *
 * @see    SSMClient::describeMaintenanceWindowExecutionTaskInvocations
 */

/**
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTaskInvocationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMaintenanceWindowExecutionTaskInvocationsResponse::DescribeMaintenanceWindowExecutionTaskInvocationsResponse(
        const DescribeMaintenanceWindowExecutionTaskInvocationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeMaintenanceWindowExecutionTaskInvocationsResponse(new DescribeMaintenanceWindowExecutionTaskInvocationsResponsePrivate(this), parent)
{
    setRequest(new DescribeMaintenanceWindowExecutionTaskInvocationsRequest(request));
    setReply(reply);
}

const DescribeMaintenanceWindowExecutionTaskInvocationsRequest * DescribeMaintenanceWindowExecutionTaskInvocationsResponse::request() const
{
    Q_D(const DescribeMaintenanceWindowExecutionTaskInvocationsResponse);
    return static_cast<const DescribeMaintenanceWindowExecutionTaskInvocationsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeMaintenanceWindowExecutionTaskInvocations response.
 *
 * @param  response  Response to parse.
 */
void DescribeMaintenanceWindowExecutionTaskInvocationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeMaintenanceWindowExecutionTaskInvocationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowExecutionTaskInvocationsResponsePrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowExecutionTaskInvocationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTaskInvocationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMaintenanceWindowExecutionTaskInvocationsResponse instance.
 */
DescribeMaintenanceWindowExecutionTaskInvocationsResponsePrivate::DescribeMaintenanceWindowExecutionTaskInvocationsResponsePrivate(
    DescribeMaintenanceWindowExecutionTaskInvocationsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeMaintenanceWindowExecutionTaskInvocationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMaintenanceWindowExecutionTaskInvocationsResponsePrivate::parseDescribeMaintenanceWindowExecutionTaskInvocationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMaintenanceWindowExecutionTaskInvocationsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
