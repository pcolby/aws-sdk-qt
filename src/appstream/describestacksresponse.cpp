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

#include "describestacksresponse.h"
#include "describestacksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/**
 * @class  DescribeStacksResponse
 *
 * @brief  Handles AppStream DescribeStacks responses.
 *
 * @see    AppStreamClient::describeStacks
 */

/**
 * @brief  Constructs a new DescribeStacksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStacksResponse::DescribeStacksResponse(
        const DescribeStacksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeStacksResponsePrivate(this), parent)
{
    setRequest(new DescribeStacksRequest(request));
    setReply(reply);
}

const DescribeStacksRequest * DescribeStacksResponse::request() const
{
    Q_D(const DescribeStacksResponse);
    return static_cast<const DescribeStacksRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream DescribeStacks response.
 *
 * @param  response  Response to parse.
 */
void DescribeStacksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStacksResponsePrivate
 *
 * @brief  Private implementation for DescribeStacksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStacksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStacksResponse instance.
 */
DescribeStacksResponsePrivate::DescribeStacksResponsePrivate(
    DescribeStacksQueueResponse * const q) : DescribeStacksPrivate(q)
{

}

/**
 * @brief  Parse an AppStream DescribeStacksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStacksResponsePrivate::DescribeStacksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStacksResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
