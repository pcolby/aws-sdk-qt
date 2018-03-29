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

#include "describeeventtypesresponse.h"
#include "describeeventtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Health {

/**
 * @class  DescribeEventTypesResponse
 *
 * @brief  Handles Health DescribeEventTypes responses.
 *
 * @see    HealthClient::describeEventTypes
 */

/**
 * @brief  Constructs a new DescribeEventTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventTypesResponse::DescribeEventTypesResponse(
        const DescribeEventTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthResponse(new DescribeEventTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeEventTypesRequest(request));
    setReply(reply);
}

const DescribeEventTypesRequest * DescribeEventTypesResponse::request() const
{
    Q_D(const DescribeEventTypesResponse);
    return static_cast<const DescribeEventTypesRequest *>(d->request);
}

/**
 * @brief  Parse a Health DescribeEventTypes response.
 *
 * @param  response  Response to parse.
 */
void DescribeEventTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEventTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEventTypesResponsePrivate
 *
 * @brief  Private implementation for DescribeEventTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEventTypesResponse instance.
 */
DescribeEventTypesResponsePrivate::DescribeEventTypesResponsePrivate(
    DescribeEventTypesResponse * const q) : HealthResponsePrivate(q)
{

}

/**
 * @brief  Parse an Health DescribeEventTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEventTypesResponsePrivate::DescribeEventTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventTypesResponse"));
    /// @todo
}

} // namespace Health
} // namespace QtAws
