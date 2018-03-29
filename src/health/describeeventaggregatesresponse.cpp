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

#include "describeeventaggregatesresponse.h"
#include "describeeventaggregatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Health {

/**
 * @class  DescribeEventAggregatesResponse
 *
 * @brief  Handles Health DescribeEventAggregates responses.
 *
 * @see    HealthClient::describeEventAggregates
 */

/**
 * @brief  Constructs a new DescribeEventAggregatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventAggregatesResponse::DescribeEventAggregatesResponse(
        const DescribeEventAggregatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthResponse(new DescribeEventAggregatesResponsePrivate(this), parent)
{
    setRequest(new DescribeEventAggregatesRequest(request));
    setReply(reply);
}

const DescribeEventAggregatesRequest * DescribeEventAggregatesResponse::request() const
{
    Q_D(const DescribeEventAggregatesResponse);
    return static_cast<const DescribeEventAggregatesRequest *>(d->request);
}

/**
 * @brief  Parse a Health DescribeEventAggregates response.
 *
 * @param  response  Response to parse.
 */
void DescribeEventAggregatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEventAggregatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEventAggregatesResponsePrivate
 *
 * @brief  Private implementation for DescribeEventAggregatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventAggregatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEventAggregatesResponse instance.
 */
DescribeEventAggregatesResponsePrivate::DescribeEventAggregatesResponsePrivate(
    DescribeEventAggregatesResponse * const q) : HealthResponsePrivate(q)
{

}

/**
 * @brief  Parse an Health DescribeEventAggregatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEventAggregatesResponsePrivate::parseDescribeEventAggregatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventAggregatesResponse"));
    /// @todo
}

} // namespace Health
} // namespace QtAws
