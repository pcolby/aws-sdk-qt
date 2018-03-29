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

#include "describeparametergroupsresponse.h"
#include "describeparametergroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/**
 * @class  DescribeParameterGroupsResponse
 *
 * @brief  Handles DAX DescribeParameterGroups responses.
 *
 * @see    DAXClient::describeParameterGroups
 */

/**
 * @brief  Constructs a new DescribeParameterGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeParameterGroupsResponse::DescribeParameterGroupsResponse(
        const DescribeParameterGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new DescribeParameterGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeParameterGroupsRequest(request));
    setReply(reply);
}

const DescribeParameterGroupsRequest * DescribeParameterGroupsResponse::request() const
{
    Q_D(const DescribeParameterGroupsResponse);
    return static_cast<const DescribeParameterGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a DAX DescribeParameterGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeParameterGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeParameterGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeParameterGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeParameterGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeParameterGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeParameterGroupsResponse instance.
 */
DescribeParameterGroupsResponsePrivate::DescribeParameterGroupsResponsePrivate(
    DescribeParameterGroupsResponse * const q) : DAXResponsePrivate(q)
{

}

/**
 * @brief  Parse an DAX DescribeParameterGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeParameterGroupsResponsePrivate::DescribeParameterGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeParameterGroupsResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
