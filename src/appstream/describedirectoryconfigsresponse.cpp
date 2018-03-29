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

#include "describedirectoryconfigsresponse.h"
#include "describedirectoryconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  DescribeDirectoryConfigsResponse
 *
 * @brief  Handles AppStream DescribeDirectoryConfigs responses.
 *
 * @see    AppStreamClient::describeDirectoryConfigs
 */

/**
 * @brief  Constructs a new DescribeDirectoryConfigsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDirectoryConfigsResponse::DescribeDirectoryConfigsResponse(
        const DescribeDirectoryConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeDirectoryConfigsResponsePrivate(this), parent)
{
    setRequest(new DescribeDirectoryConfigsRequest(request));
    setReply(reply);
}

const DescribeDirectoryConfigsRequest * DescribeDirectoryConfigsResponse::request() const
{
    Q_D(const DescribeDirectoryConfigsResponse);
    return static_cast<const DescribeDirectoryConfigsRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream DescribeDirectoryConfigs response.
 *
 * @param  response  Response to parse.
 */
void DescribeDirectoryConfigsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDirectoryConfigsResponsePrivate
 *
 * @brief  Private implementation for DescribeDirectoryConfigsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectoryConfigsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDirectoryConfigsResponse instance.
 */
DescribeDirectoryConfigsResponsePrivate::DescribeDirectoryConfigsResponsePrivate(
    DescribeDirectoryConfigsQueueResponse * const q) : DescribeDirectoryConfigsPrivate(q)
{

}

/**
 * @brief  Parse an AppStream DescribeDirectoryConfigsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDirectoryConfigsResponsePrivate::DescribeDirectoryConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDirectoryConfigsResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace AWS
