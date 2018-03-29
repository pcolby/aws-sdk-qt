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

#include "describeworkflowtyperesponse.h"
#include "describeworkflowtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  DescribeWorkflowTypeResponse
 *
 * @brief  Handles SWF DescribeWorkflowType responses.
 *
 * @see    SWFClient::describeWorkflowType
 */

/**
 * @brief  Constructs a new DescribeWorkflowTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeWorkflowTypeResponse::DescribeWorkflowTypeResponse(
        const DescribeWorkflowTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new DescribeWorkflowTypeResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkflowTypeRequest(request));
    setReply(reply);
}

const DescribeWorkflowTypeRequest * DescribeWorkflowTypeResponse::request() const
{
    Q_D(const DescribeWorkflowTypeResponse);
    return static_cast<const DescribeWorkflowTypeRequest *>(d->request);
}

/**
 * @brief  Parse a SWF DescribeWorkflowType response.
 *
 * @param  response  Response to parse.
 */
void DescribeWorkflowTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeWorkflowTypeResponsePrivate
 *
 * @brief  Private implementation for DescribeWorkflowTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkflowTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeWorkflowTypeResponse instance.
 */
DescribeWorkflowTypeResponsePrivate::DescribeWorkflowTypeResponsePrivate(
    DescribeWorkflowTypeQueueResponse * const q) : DescribeWorkflowTypePrivate(q)
{

}

/**
 * @brief  Parse an SWF DescribeWorkflowTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeWorkflowTypeResponsePrivate::DescribeWorkflowTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkflowTypeResponse"));
    /// @todo
}

} // namespace SWF
} // namespace AWS
