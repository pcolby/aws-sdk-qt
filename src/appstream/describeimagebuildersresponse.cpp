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

#include "describeimagebuildersresponse.h"
#include "describeimagebuildersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/**
 * @class  DescribeImageBuildersResponse
 *
 * @brief  Handles AppStream DescribeImageBuilders responses.
 *
 * @see    AppStreamClient::describeImageBuilders
 */

/**
 * @brief  Constructs a new DescribeImageBuildersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeImageBuildersResponse::DescribeImageBuildersResponse(
        const DescribeImageBuildersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeImageBuildersResponsePrivate(this), parent)
{
    setRequest(new DescribeImageBuildersRequest(request));
    setReply(reply);
}

const DescribeImageBuildersRequest * DescribeImageBuildersResponse::request() const
{
    Q_D(const DescribeImageBuildersResponse);
    return static_cast<const DescribeImageBuildersRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream DescribeImageBuilders response.
 *
 * @param  response  Response to parse.
 */
void DescribeImageBuildersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeImageBuildersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeImageBuildersResponsePrivate
 *
 * @brief  Private implementation for DescribeImageBuildersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeImageBuildersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeImageBuildersResponse instance.
 */
DescribeImageBuildersResponsePrivate::DescribeImageBuildersResponsePrivate(
    DescribeImageBuildersResponse * const q) : AppStreamResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppStream DescribeImageBuildersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeImageBuildersResponsePrivate::DescribeImageBuildersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageBuildersResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
