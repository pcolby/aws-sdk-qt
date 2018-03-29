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

#include "describeagentversionsresponse.h"
#include "describeagentversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeAgentVersionsResponse
 *
 * @brief  Handles OpsWorks DescribeAgentVersions responses.
 *
 * @see    OpsWorksClient::describeAgentVersions
 */

/**
 * @brief  Constructs a new DescribeAgentVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAgentVersionsResponse::DescribeAgentVersionsResponse(
        const DescribeAgentVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeAgentVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeAgentVersionsRequest(request));
    setReply(reply);
}

const DescribeAgentVersionsRequest * DescribeAgentVersionsResponse::request() const
{
    Q_D(const DescribeAgentVersionsResponse);
    return static_cast<const DescribeAgentVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeAgentVersions response.
 *
 * @param  response  Response to parse.
 */
void DescribeAgentVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAgentVersionsResponsePrivate
 *
 * @brief  Private implementation for DescribeAgentVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAgentVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAgentVersionsResponse instance.
 */
DescribeAgentVersionsResponsePrivate::DescribeAgentVersionsResponsePrivate(
    DescribeAgentVersionsQueueResponse * const q) : DescribeAgentVersionsPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeAgentVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAgentVersionsResponsePrivate::DescribeAgentVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAgentVersionsResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
