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

#include "describeaggregateidformatresponse.h"
#include "describeaggregateidformatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeAggregateIdFormatResponse
 *
 * @brief  Handles EC2 DescribeAggregateIdFormat responses.
 *
 * @see    EC2Client::describeAggregateIdFormat
 */

/**
 * @brief  Constructs a new DescribeAggregateIdFormatResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAggregateIdFormatResponse::DescribeAggregateIdFormatResponse(
        const DescribeAggregateIdFormatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeAggregateIdFormatResponsePrivate(this), parent)
{
    setRequest(new DescribeAggregateIdFormatRequest(request));
    setReply(reply);
}

const DescribeAggregateIdFormatRequest * DescribeAggregateIdFormatResponse::request() const
{
    Q_D(const DescribeAggregateIdFormatResponse);
    return static_cast<const DescribeAggregateIdFormatRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeAggregateIdFormat response.
 *
 * @param  response  Response to parse.
 */
void DescribeAggregateIdFormatResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAggregateIdFormatResponsePrivate
 *
 * @brief  Private implementation for DescribeAggregateIdFormatResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAggregateIdFormatResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAggregateIdFormatResponse instance.
 */
DescribeAggregateIdFormatResponsePrivate::DescribeAggregateIdFormatResponsePrivate(
    DescribeAggregateIdFormatResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeAggregateIdFormatResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAggregateIdFormatResponsePrivate::DescribeAggregateIdFormatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAggregateIdFormatResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
