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

#include "describestreamresponse.h"
#include "describestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  DescribeStreamResponse
 *
 * @brief  Handles Kinesis DescribeStream responses.
 *
 * @see    KinesisClient::describeStream
 */

/**
 * @brief  Constructs a new DescribeStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStreamResponse::DescribeStreamResponse(
        const DescribeStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DescribeStreamResponsePrivate(this), parent)
{
    setRequest(new DescribeStreamRequest(request));
    setReply(reply);
}

const DescribeStreamRequest * DescribeStreamResponse::request() const
{
    Q_D(const DescribeStreamResponse);
    return static_cast<const DescribeStreamRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis DescribeStream response.
 *
 * @param  response  Response to parse.
 */
void DescribeStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStreamResponsePrivate
 *
 * @brief  Private implementation for DescribeStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStreamResponse instance.
 */
DescribeStreamResponsePrivate::DescribeStreamResponsePrivate(
    DescribeStreamResponse * const q) : KinesisResponsePrivate(q)
{

}

/**
 * @brief  Parse an Kinesis DescribeStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStreamResponsePrivate::parseDescribeStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStreamResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
