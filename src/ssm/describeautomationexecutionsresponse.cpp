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

#include "describeautomationexecutionsresponse.h"
#include "describeautomationexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DescribeAutomationExecutionsResponse
 *
 * @brief  Handles SSM DescribeAutomationExecutions responses.
 *
 * @see    SSMClient::describeAutomationExecutions
 */

/**
 * @brief  Constructs a new DescribeAutomationExecutionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAutomationExecutionsResponse::DescribeAutomationExecutionsResponse(
        const DescribeAutomationExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeAutomationExecutionsResponsePrivate(this), parent)
{
    setRequest(new DescribeAutomationExecutionsRequest(request));
    setReply(reply);
}

const DescribeAutomationExecutionsRequest * DescribeAutomationExecutionsResponse::request() const
{
    Q_D(const DescribeAutomationExecutionsResponse);
    return static_cast<const DescribeAutomationExecutionsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeAutomationExecutions response.
 *
 * @param  response  Response to parse.
 */
void DescribeAutomationExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAutomationExecutionsResponsePrivate
 *
 * @brief  Private implementation for DescribeAutomationExecutionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutomationExecutionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAutomationExecutionsResponse instance.
 */
DescribeAutomationExecutionsResponsePrivate::DescribeAutomationExecutionsResponsePrivate(
    DescribeAutomationExecutionsQueueResponse * const q) : DescribeAutomationExecutionsPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeAutomationExecutionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAutomationExecutionsResponsePrivate::DescribeAutomationExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutomationExecutionsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
