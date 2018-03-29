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

#include "describereplicationinstancetasklogsresponse.h"
#include "describereplicationinstancetasklogsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationInstanceTaskLogsResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeReplicationInstanceTaskLogs responses.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationInstanceTaskLogs
 */

/**
 * @brief  Constructs a new DescribeReplicationInstanceTaskLogsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReplicationInstanceTaskLogsResponse::DescribeReplicationInstanceTaskLogsResponse(
        const DescribeReplicationInstanceTaskLogsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeReplicationInstanceTaskLogsResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationInstanceTaskLogsRequest(request));
    setReply(reply);
}

const DescribeReplicationInstanceTaskLogsRequest * DescribeReplicationInstanceTaskLogsResponse::request() const
{
    Q_D(const DescribeReplicationInstanceTaskLogsResponse);
    return static_cast<const DescribeReplicationInstanceTaskLogsRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeReplicationInstanceTaskLogs response.
 *
 * @param  response  Response to parse.
 */
void DescribeReplicationInstanceTaskLogsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReplicationInstanceTaskLogsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReplicationInstanceTaskLogsResponsePrivate
 *
 * @brief  Private implementation for DescribeReplicationInstanceTaskLogsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationInstanceTaskLogsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReplicationInstanceTaskLogsResponse instance.
 */
DescribeReplicationInstanceTaskLogsResponsePrivate::DescribeReplicationInstanceTaskLogsResponsePrivate(
    DescribeReplicationInstanceTaskLogsResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeReplicationInstanceTaskLogsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReplicationInstanceTaskLogsResponsePrivate::parseDescribeReplicationInstanceTaskLogsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationInstanceTaskLogsResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
