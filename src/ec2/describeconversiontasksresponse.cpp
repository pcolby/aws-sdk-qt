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

#include "describeconversiontasksresponse.h"
#include "describeconversiontasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeConversionTasksResponse
 *
 * @brief  Handles EC2 DescribeConversionTasks responses.
 *
 * @see    EC2Client::describeConversionTasks
 */

/**
 * @brief  Constructs a new DescribeConversionTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConversionTasksResponse::DescribeConversionTasksResponse(
        const DescribeConversionTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeConversionTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeConversionTasksRequest(request));
    setReply(reply);
}

const DescribeConversionTasksRequest * DescribeConversionTasksResponse::request() const
{
    Q_D(const DescribeConversionTasksResponse);
    return static_cast<const DescribeConversionTasksRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeConversionTasks response.
 *
 * @param  response  Response to parse.
 */
void DescribeConversionTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConversionTasksResponsePrivate
 *
 * @brief  Private implementation for DescribeConversionTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConversionTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConversionTasksResponse instance.
 */
DescribeConversionTasksResponsePrivate::DescribeConversionTasksResponsePrivate(
    DescribeConversionTasksQueueResponse * const q) : DescribeConversionTasksPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeConversionTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConversionTasksResponsePrivate::DescribeConversionTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConversionTasksResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
