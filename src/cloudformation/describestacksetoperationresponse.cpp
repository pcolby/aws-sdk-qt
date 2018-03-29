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

#include "describestacksetoperationresponse.h"
#include "describestacksetoperationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  DescribeStackSetOperationResponse
 *
 * @brief  Handles CloudFormation DescribeStackSetOperation responses.
 *
 * @see    CloudFormationClient::describeStackSetOperation
 */

/**
 * @brief  Constructs a new DescribeStackSetOperationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStackSetOperationResponse::DescribeStackSetOperationResponse(
        const DescribeStackSetOperationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeStackSetOperationResponse(new DescribeStackSetOperationResponsePrivate(this), parent)
{
    setRequest(new DescribeStackSetOperationRequest(request));
    setReply(reply);
}

const DescribeStackSetOperationRequest * DescribeStackSetOperationResponse::request() const
{
    Q_D(const DescribeStackSetOperationResponse);
    return static_cast<const DescribeStackSetOperationRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation DescribeStackSetOperation response.
 *
 * @param  response  Response to parse.
 */
void DescribeStackSetOperationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeStackSetOperationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStackSetOperationResponsePrivate
 *
 * @brief  Private implementation for DescribeStackSetOperationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackSetOperationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStackSetOperationResponse instance.
 */
DescribeStackSetOperationResponsePrivate::DescribeStackSetOperationResponsePrivate(
    DescribeStackSetOperationResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation DescribeStackSetOperationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStackSetOperationResponsePrivate::parseDescribeStackSetOperationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStackSetOperationResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
