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

#include "describesessionsresponse.h"
#include "describesessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  DescribeSessionsResponse
 *
 * @brief  Handles AppStream DescribeSessions responses.
 *
 * @see    AppStreamClient::describeSessions
 */

/**
 * @brief  Constructs a new DescribeSessionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSessionsResponse::DescribeSessionsResponse(
        const DescribeSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeSessionsResponsePrivate(this), parent)
{
    setRequest(new DescribeSessionsRequest(request));
    setReply(reply);
}

const DescribeSessionsRequest * DescribeSessionsResponse::request() const
{
    Q_D(const DescribeSessionsResponse);
    return static_cast<const DescribeSessionsRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream DescribeSessions response.
 *
 * @param  response  Response to parse.
 */
void DescribeSessionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSessionsResponsePrivate
 *
 * @brief  Private implementation for DescribeSessionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSessionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSessionsResponse instance.
 */
DescribeSessionsResponsePrivate::DescribeSessionsResponsePrivate(
    DescribeSessionsQueueResponse * const q) : DescribeSessionsPrivate(q)
{

}

/**
 * @brief  Parse an AppStream DescribeSessionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSessionsResponsePrivate::DescribeSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSessionsResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace AWS
