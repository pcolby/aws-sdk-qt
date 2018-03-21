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

#include "describeeventdetailsresponse.h"
#include "describeeventdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Health {

/**
 * @class  DescribeEventDetailsResponse
 *
 * @brief  Handles Health DescribeEventDetails responses.
 *
 * @see    HealthClient::describeEventDetails
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventDetailsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthResponse(new DescribeEventDetailsResponsePrivate(this), parent)
{
    setRequest(new DescribeEventDetailsRequest(request));
    setReply(reply);
}

const DescribeEventDetailsRequest * DescribeEventDetailsResponse::request() const
{
    Q_D(const DescribeEventDetailsResponse);
    return static_cast<const DescribeEventDetailsRequest *>(d->request);
}

/**
 * @brief  Parse a Health DescribeEventDetails response.
 *
 * @param  response  Response to parse.
 */
void DescribeEventDetailsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEventDetailsResponsePrivate
 *
 * @brief  Private implementation for DescribeEventDetailsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventDetailsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEventDetailsResponse instance.
 */
DescribeEventDetailsResponsePrivate::DescribeEventDetailsResponsePrivate(
    DescribeEventDetailsQueueResponse * const q) : DescribeEventDetailsPrivate(q)
{

}

/**
 * @brief  Parse an Health DescribeEventDetailsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEventDetailsResponsePrivate::DescribeEventDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventDetailsResponse"));
    /// @todo
}
