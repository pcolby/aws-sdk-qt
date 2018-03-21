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

#include "describesnapshotscheduleresponse.h"
#include "describesnapshotscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeSnapshotScheduleResponse
 *
 * @brief  Handles StorageGateway DescribeSnapshotSchedule responses.
 *
 * @see    StorageGatewayClient::describeSnapshotSchedule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSnapshotScheduleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeSnapshotScheduleResponsePrivate(this), parent)
{
    setRequest(new DescribeSnapshotScheduleRequest(request));
    setReply(reply);
}

const DescribeSnapshotScheduleRequest * DescribeSnapshotScheduleResponse::request() const
{
    Q_D(const DescribeSnapshotScheduleResponse);
    return static_cast<const DescribeSnapshotScheduleRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeSnapshotSchedule response.
 *
 * @param  response  Response to parse.
 */
void DescribeSnapshotScheduleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSnapshotScheduleResponsePrivate
 *
 * @brief  Private implementation for DescribeSnapshotScheduleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotScheduleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSnapshotScheduleResponse instance.
 */
DescribeSnapshotScheduleResponsePrivate::DescribeSnapshotScheduleResponsePrivate(
    DescribeSnapshotScheduleQueueResponse * const q) : DescribeSnapshotSchedulePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeSnapshotScheduleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSnapshotScheduleResponsePrivate::DescribeSnapshotScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSnapshotScheduleResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
