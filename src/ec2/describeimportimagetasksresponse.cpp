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

#include "describeimportimagetasksresponse.h"
#include "describeimportimagetasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeImportImageTasksResponse
 *
 * @brief  Handles EC2 DescribeImportImageTasks responses.
 *
 * @see    EC2Client::describeImportImageTasks
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeImportImageTasksResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeImportImageTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeImportImageTasksRequest(request));
    setReply(reply);
}

const DescribeImportImageTasksRequest * DescribeImportImageTasksResponse::request() const
{
    Q_D(const DescribeImportImageTasksResponse);
    return static_cast<const DescribeImportImageTasksRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeImportImageTasks response.
 *
 * @param  response  Response to parse.
 */
void DescribeImportImageTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeImportImageTasksResponsePrivate
 *
 * @brief  Private implementation for DescribeImportImageTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeImportImageTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeImportImageTasksResponse instance.
 */
DescribeImportImageTasksResponsePrivate::DescribeImportImageTasksResponsePrivate(
    DescribeImportImageTasksQueueResponse * const q) : DescribeImportImageTasksPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeImportImageTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeImportImageTasksResponsePrivate::DescribeImportImageTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImportImageTasksResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
