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

#include "describestackeventsresponse.h"
#include "describestackeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  DescribeStackEventsResponse
 *
 * @brief  Handles CloudFormation DescribeStackEvents responses.
 *
 * @see    CloudFormationClient::describeStackEvents
 */

/**
 * @brief  Constructs a new DescribeStackEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStackEventsResponse::DescribeStackEventsResponse(
        const DescribeStackEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeStackEventsResponse(new DescribeStackEventsResponsePrivate(this), parent)
{
    setRequest(new DescribeStackEventsRequest(request));
    setReply(reply);
}

const DescribeStackEventsRequest * DescribeStackEventsResponse::request() const
{
    Q_D(const DescribeStackEventsResponse);
    return static_cast<const DescribeStackEventsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation DescribeStackEvents response.
 *
 * @param  response  Response to parse.
 */
void DescribeStackEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeStackEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStackEventsResponsePrivate
 *
 * @brief  Private implementation for DescribeStackEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStackEventsResponse instance.
 */
DescribeStackEventsResponsePrivate::DescribeStackEventsResponsePrivate(
    DescribeStackEventsResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation DescribeStackEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStackEventsResponsePrivate::parseDescribeStackEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStackEventsResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
