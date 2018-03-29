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

#include "describestreamsummaryresponse.h"
#include "describestreamsummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  DescribeStreamSummaryResponse
 *
 * @brief  Handles Kinesis DescribeStreamSummary responses.
 *
 * @see    KinesisClient::describeStreamSummary
 */

/**
 * @brief  Constructs a new DescribeStreamSummaryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStreamSummaryResponse::DescribeStreamSummaryResponse(
        const DescribeStreamSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DescribeStreamSummaryResponsePrivate(this), parent)
{
    setRequest(new DescribeStreamSummaryRequest(request));
    setReply(reply);
}

const DescribeStreamSummaryRequest * DescribeStreamSummaryResponse::request() const
{
    Q_D(const DescribeStreamSummaryResponse);
    return static_cast<const DescribeStreamSummaryRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis DescribeStreamSummary response.
 *
 * @param  response  Response to parse.
 */
void DescribeStreamSummaryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStreamSummaryResponsePrivate
 *
 * @brief  Private implementation for DescribeStreamSummaryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStreamSummaryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStreamSummaryResponse instance.
 */
DescribeStreamSummaryResponsePrivate::DescribeStreamSummaryResponsePrivate(
    DescribeStreamSummaryResponse * const q) : KinesisResponsePrivate(q)
{

}

/**
 * @brief  Parse an Kinesis DescribeStreamSummaryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStreamSummaryResponsePrivate::DescribeStreamSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStreamSummaryResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
