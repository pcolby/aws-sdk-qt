/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describesourceregionsresponse.h"
#include "describesourceregionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeSourceRegionsResponse
 *
 * @brief  Handles RDS DescribeSourceRegions responses.
 *
 * @see    RDSClient::describeSourceRegions
 */

/**
 * @brief  Constructs a new DescribeSourceRegionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSourceRegionsResponse::DescribeSourceRegionsResponse(
        const DescribeSourceRegionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeSourceRegionsResponsePrivate(this), parent)
{
    setRequest(new DescribeSourceRegionsRequest(request));
    setReply(reply);
}

const DescribeSourceRegionsRequest * DescribeSourceRegionsResponse::request() const
{
    Q_D(const DescribeSourceRegionsResponse);
    return static_cast<const DescribeSourceRegionsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeSourceRegions response.
 *
 * @param  response  Response to parse.
 */
void DescribeSourceRegionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSourceRegionsResponsePrivate
 *
 * @brief  Private implementation for DescribeSourceRegionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSourceRegionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSourceRegionsResponse instance.
 */
DescribeSourceRegionsResponsePrivate::DescribeSourceRegionsResponsePrivate(
    DescribeSourceRegionsQueueResponse * const q) : DescribeSourceRegionsPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeSourceRegionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSourceRegionsResponsePrivate::DescribeSourceRegionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSourceRegionsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
