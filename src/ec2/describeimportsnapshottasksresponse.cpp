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

#include "describeimportsnapshottasksresponse.h"
#include "describeimportsnapshottasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeImportSnapshotTasksResponse
 *
 * @brief  Handles EC2 DescribeImportSnapshotTasks responses.
 *
 * @see    EC2Client::describeImportSnapshotTasks
 */

/**
 * @brief  Constructs a new DescribeImportSnapshotTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeImportSnapshotTasksResponse::DescribeImportSnapshotTasksResponse(
        const DescribeImportSnapshotTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeImportSnapshotTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeImportSnapshotTasksRequest(request));
    setReply(reply);
}

const DescribeImportSnapshotTasksRequest * DescribeImportSnapshotTasksResponse::request() const
{
    Q_D(const DescribeImportSnapshotTasksResponse);
    return static_cast<const DescribeImportSnapshotTasksRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeImportSnapshotTasks response.
 *
 * @param  response  Response to parse.
 */
void DescribeImportSnapshotTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeImportSnapshotTasksResponsePrivate
 *
 * @brief  Private implementation for DescribeImportSnapshotTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeImportSnapshotTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeImportSnapshotTasksResponse instance.
 */
DescribeImportSnapshotTasksResponsePrivate::DescribeImportSnapshotTasksResponsePrivate(
    DescribeImportSnapshotTasksResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeImportSnapshotTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeImportSnapshotTasksResponsePrivate::DescribeImportSnapshotTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImportSnapshotTasksResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
