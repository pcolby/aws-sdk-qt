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

#include "describeoptiongroupsresponse.h"
#include "describeoptiongroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeOptionGroupsResponse
 *
 * @brief  Handles RDS DescribeOptionGroups responses.
 *
 * @see    RDSClient::describeOptionGroups
 */

/**
 * @brief  Constructs a new DescribeOptionGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOptionGroupsResponse::DescribeOptionGroupsResponse(
        const DescribeOptionGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeOptionGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeOptionGroupsRequest(request));
    setReply(reply);
}

const DescribeOptionGroupsRequest * DescribeOptionGroupsResponse::request() const
{
    Q_D(const DescribeOptionGroupsResponse);
    return static_cast<const DescribeOptionGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeOptionGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeOptionGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeOptionGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeOptionGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOptionGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeOptionGroupsResponse instance.
 */
DescribeOptionGroupsResponsePrivate::DescribeOptionGroupsResponsePrivate(
    DescribeOptionGroupsQueueResponse * const q) : DescribeOptionGroupsPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeOptionGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeOptionGroupsResponsePrivate::DescribeOptionGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOptionGroupsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
