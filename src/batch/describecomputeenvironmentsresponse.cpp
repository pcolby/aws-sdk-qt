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

#include "describecomputeenvironmentsresponse.h"
#include "describecomputeenvironmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Batch {

/**
 * @class  DescribeComputeEnvironmentsResponse
 *
 * @brief  Handles Batch DescribeComputeEnvironments responses.
 *
 * @see    BatchClient::describeComputeEnvironments
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeComputeEnvironmentsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DescribeComputeEnvironmentsResponsePrivate(this), parent)
{
    setRequest(new DescribeComputeEnvironmentsRequest(request));
    setReply(reply);
}

const DescribeComputeEnvironmentsRequest * DescribeComputeEnvironmentsResponse::request() const
{
    Q_D(const DescribeComputeEnvironmentsResponse);
    return static_cast<const DescribeComputeEnvironmentsRequest *>(d->request);
}

/**
 * @brief  Parse a Batch DescribeComputeEnvironments response.
 *
 * @param  response  Response to parse.
 */
void DescribeComputeEnvironmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeComputeEnvironmentsResponsePrivate
 *
 * @brief  Private implementation for DescribeComputeEnvironmentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeComputeEnvironmentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeComputeEnvironmentsResponse instance.
 */
DescribeComputeEnvironmentsResponsePrivate::DescribeComputeEnvironmentsResponsePrivate(
    DescribeComputeEnvironmentsQueueResponse * const q) : DescribeComputeEnvironmentsPrivate(q)
{

}

/**
 * @brief  Parse an Batch DescribeComputeEnvironmentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeComputeEnvironmentsResponsePrivate::DescribeComputeEnvironmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeComputeEnvironmentsResponse"));
    /// @todo
}
