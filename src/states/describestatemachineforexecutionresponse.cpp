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

#include "describestatemachineforexecutionresponse.h"
#include "describestatemachineforexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/**
 * @class  DescribeStateMachineForExecutionResponse
 *
 * @brief  Handles SFN DescribeStateMachineForExecution responses.
 *
 * @see    SFNClient::describeStateMachineForExecution
 */

/**
 * @brief  Constructs a new DescribeStateMachineForExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStateMachineForExecutionResponse::DescribeStateMachineForExecutionResponse(
        const DescribeStateMachineForExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new DescribeStateMachineForExecutionResponsePrivate(this), parent)
{
    setRequest(new DescribeStateMachineForExecutionRequest(request));
    setReply(reply);
}

const DescribeStateMachineForExecutionRequest * DescribeStateMachineForExecutionResponse::request() const
{
    Q_D(const DescribeStateMachineForExecutionResponse);
    return static_cast<const DescribeStateMachineForExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a SFN DescribeStateMachineForExecution response.
 *
 * @param  response  Response to parse.
 */
void DescribeStateMachineForExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeStateMachineForExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStateMachineForExecutionResponsePrivate
 *
 * @brief  Private implementation for DescribeStateMachineForExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStateMachineForExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStateMachineForExecutionResponse instance.
 */
DescribeStateMachineForExecutionResponsePrivate::DescribeStateMachineForExecutionResponsePrivate(
    DescribeStateMachineForExecutionResponse * const q) : SFNResponsePrivate(q)
{

}

/**
 * @brief  Parse an SFN DescribeStateMachineForExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStateMachineForExecutionResponsePrivate::DescribeStateMachineForExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStateMachineForExecutionResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
