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

#include "describeworkflowexecutionresponse.h"
#include "describeworkflowexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  DescribeWorkflowExecutionResponse
 *
 * @brief  Handles SWF DescribeWorkflowExecution responses.
 *
 * @see    SWFClient::describeWorkflowExecution
 */

/**
 * @brief  Constructs a new DescribeWorkflowExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeWorkflowExecutionResponse::DescribeWorkflowExecutionResponse(
        const DescribeWorkflowExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new DescribeWorkflowExecutionResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkflowExecutionRequest(request));
    setReply(reply);
}

const DescribeWorkflowExecutionRequest * DescribeWorkflowExecutionResponse::request() const
{
    Q_D(const DescribeWorkflowExecutionResponse);
    return static_cast<const DescribeWorkflowExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a SWF DescribeWorkflowExecution response.
 *
 * @param  response  Response to parse.
 */
void DescribeWorkflowExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeWorkflowExecutionResponsePrivate
 *
 * @brief  Private implementation for DescribeWorkflowExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkflowExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeWorkflowExecutionResponse instance.
 */
DescribeWorkflowExecutionResponsePrivate::DescribeWorkflowExecutionResponsePrivate(
    DescribeWorkflowExecutionResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF DescribeWorkflowExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeWorkflowExecutionResponsePrivate::DescribeWorkflowExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkflowExecutionResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
