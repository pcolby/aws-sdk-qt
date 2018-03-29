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

#include "describeexecutionresponse.h"
#include "describeexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/**
 * @class  DescribeExecutionResponse
 *
 * @brief  Handles SFN DescribeExecution responses.
 *
 * @see    SFNClient::describeExecution
 */

/**
 * @brief  Constructs a new DescribeExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeExecutionResponse::DescribeExecutionResponse(
        const DescribeExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new DescribeExecutionResponsePrivate(this), parent)
{
    setRequest(new DescribeExecutionRequest(request));
    setReply(reply);
}

const DescribeExecutionRequest * DescribeExecutionResponse::request() const
{
    Q_D(const DescribeExecutionResponse);
    return static_cast<const DescribeExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a SFN DescribeExecution response.
 *
 * @param  response  Response to parse.
 */
void DescribeExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeExecutionResponsePrivate
 *
 * @brief  Private implementation for DescribeExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeExecutionResponse instance.
 */
DescribeExecutionResponsePrivate::DescribeExecutionResponsePrivate(
    DescribeExecutionResponse * const q) : SFNResponsePrivate(q)
{

}

/**
 * @brief  Parse an SFN DescribeExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeExecutionResponsePrivate::parseDescribeExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExecutionResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
