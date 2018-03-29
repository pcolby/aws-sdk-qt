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

#include "describereplicationtasksresponse.h"
#include "describereplicationtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationTasksResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeReplicationTasks responses.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationTasks
 */

/**
 * @brief  Constructs a new DescribeReplicationTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReplicationTasksResponse::DescribeReplicationTasksResponse(
        const DescribeReplicationTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeReplicationTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationTasksRequest(request));
    setReply(reply);
}

const DescribeReplicationTasksRequest * DescribeReplicationTasksResponse::request() const
{
    Q_D(const DescribeReplicationTasksResponse);
    return static_cast<const DescribeReplicationTasksRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeReplicationTasks response.
 *
 * @param  response  Response to parse.
 */
void DescribeReplicationTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReplicationTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReplicationTasksResponsePrivate
 *
 * @brief  Private implementation for DescribeReplicationTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReplicationTasksResponse instance.
 */
DescribeReplicationTasksResponsePrivate::DescribeReplicationTasksResponsePrivate(
    DescribeReplicationTasksResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeReplicationTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReplicationTasksResponsePrivate::parseDescribeReplicationTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationTasksResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
