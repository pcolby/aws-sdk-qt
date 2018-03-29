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

#include "describeautomationstepexecutionsresponse.h"
#include "describeautomationstepexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeAutomationStepExecutionsResponse
 *
 * @brief  Handles SSM DescribeAutomationStepExecutions responses.
 *
 * @see    SSMClient::describeAutomationStepExecutions
 */

/**
 * @brief  Constructs a new DescribeAutomationStepExecutionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAutomationStepExecutionsResponse::DescribeAutomationStepExecutionsResponse(
        const DescribeAutomationStepExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeAutomationStepExecutionsResponsePrivate(this), parent)
{
    setRequest(new DescribeAutomationStepExecutionsRequest(request));
    setReply(reply);
}

const DescribeAutomationStepExecutionsRequest * DescribeAutomationStepExecutionsResponse::request() const
{
    Q_D(const DescribeAutomationStepExecutionsResponse);
    return static_cast<const DescribeAutomationStepExecutionsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeAutomationStepExecutions response.
 *
 * @param  response  Response to parse.
 */
void DescribeAutomationStepExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAutomationStepExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAutomationStepExecutionsResponsePrivate
 *
 * @brief  Private implementation for DescribeAutomationStepExecutionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutomationStepExecutionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAutomationStepExecutionsResponse instance.
 */
DescribeAutomationStepExecutionsResponsePrivate::DescribeAutomationStepExecutionsResponsePrivate(
    DescribeAutomationStepExecutionsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeAutomationStepExecutionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAutomationStepExecutionsResponsePrivate::parseDescribeAutomationStepExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutomationStepExecutionsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
