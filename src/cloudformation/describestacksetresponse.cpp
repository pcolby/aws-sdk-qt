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

#include "describestacksetresponse.h"
#include "describestacksetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  DescribeStackSetResponse
 *
 * @brief  Handles CloudFormation DescribeStackSet responses.
 *
 * @see    CloudFormationClient::describeStackSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStackSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DescribeStackSetResponsePrivate(this), parent)
{
    setRequest(new DescribeStackSetRequest(request));
    setReply(reply);
}

const DescribeStackSetRequest * DescribeStackSetResponse::request() const
{
    Q_D(const DescribeStackSetResponse);
    return static_cast<const DescribeStackSetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation DescribeStackSet response.
 *
 * @param  response  Response to parse.
 */
void DescribeStackSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStackSetResponsePrivate
 *
 * @brief  Private implementation for DescribeStackSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStackSetResponse instance.
 */
DescribeStackSetResponsePrivate::DescribeStackSetResponsePrivate(
    DescribeStackSetQueueResponse * const q) : DescribeStackSetPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation DescribeStackSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStackSetResponsePrivate::DescribeStackSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStackSetResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
