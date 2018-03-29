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

#include "describevoicesresponse.h"
#include "describevoicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Polly {

/**
 * @class  DescribeVoicesResponse
 *
 * @brief  Handles Polly DescribeVoices responses.
 *
 * @see    PollyClient::describeVoices
 */

/**
 * @brief  Constructs a new DescribeVoicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVoicesResponse::DescribeVoicesResponse(
        const DescribeVoicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new DescribeVoicesResponsePrivate(this), parent)
{
    setRequest(new DescribeVoicesRequest(request));
    setReply(reply);
}

const DescribeVoicesRequest * DescribeVoicesResponse::request() const
{
    Q_D(const DescribeVoicesResponse);
    return static_cast<const DescribeVoicesRequest *>(d->request);
}

/**
 * @brief  Parse a Polly DescribeVoices response.
 *
 * @param  response  Response to parse.
 */
void DescribeVoicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVoicesResponsePrivate
 *
 * @brief  Private implementation for DescribeVoicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVoicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVoicesResponse instance.
 */
DescribeVoicesResponsePrivate::DescribeVoicesResponsePrivate(
    DescribeVoicesQueueResponse * const q) : DescribeVoicesPrivate(q)
{

}

/**
 * @brief  Parse an Polly DescribeVoicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVoicesResponsePrivate::DescribeVoicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVoicesResponse"));
    /// @todo
}

} // namespace Polly
} // namespace AWS
