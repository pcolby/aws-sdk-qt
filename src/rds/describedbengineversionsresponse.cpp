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

#include "describedbengineversionsresponse.h"
#include "describedbengineversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBEngineVersionsResponse
 *
 * @brief  Handles RDS DescribeDBEngineVersions responses.
 *
 * @see    RDSClient::describeDBEngineVersions
 */

/**
 * @brief  Constructs a new DescribeDBEngineVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBEngineVersionsResponse::DescribeDBEngineVersionsResponse(
        const DescribeDBEngineVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBEngineVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBEngineVersionsRequest(request));
    setReply(reply);
}

const DescribeDBEngineVersionsRequest * DescribeDBEngineVersionsResponse::request() const
{
    Q_D(const DescribeDBEngineVersionsResponse);
    return static_cast<const DescribeDBEngineVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBEngineVersions response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBEngineVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDBEngineVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBEngineVersionsResponsePrivate
 *
 * @brief  Private implementation for DescribeDBEngineVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBEngineVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBEngineVersionsResponse instance.
 */
DescribeDBEngineVersionsResponsePrivate::DescribeDBEngineVersionsResponsePrivate(
    DescribeDBEngineVersionsResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBEngineVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBEngineVersionsResponsePrivate::DescribeDBEngineVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBEngineVersionsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
