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

#include "describeagentsresponse.h"
#include "describeagentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  DescribeAgentsResponse
 *
 * @brief  Handles ApplicationDiscoveryService DescribeAgents responses.
 *
 * @see    ApplicationDiscoveryServiceClient::describeAgents
 */

/**
 * @brief  Constructs a new DescribeAgentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAgentsResponse::DescribeAgentsResponse(
        const DescribeAgentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new DescribeAgentsResponsePrivate(this), parent)
{
    setRequest(new DescribeAgentsRequest(request));
    setReply(reply);
}

const DescribeAgentsRequest * DescribeAgentsResponse::request() const
{
    Q_D(const DescribeAgentsResponse);
    return static_cast<const DescribeAgentsRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService DescribeAgents response.
 *
 * @param  response  Response to parse.
 */
void DescribeAgentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAgentsResponsePrivate
 *
 * @brief  Private implementation for DescribeAgentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAgentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAgentsResponse instance.
 */
DescribeAgentsResponsePrivate::DescribeAgentsResponsePrivate(
    DescribeAgentsResponse * const q) : ApplicationDiscoveryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService DescribeAgentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAgentsResponsePrivate::DescribeAgentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAgentsResponse"));
    /// @todo
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
