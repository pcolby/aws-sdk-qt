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

#include "describeterminationpolicytypesresponse.h"
#include "describeterminationpolicytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeTerminationPolicyTypesResponse
 *
 * @brief  Handles AutoScaling DescribeTerminationPolicyTypes responses.
 *
 * @see    AutoScalingClient::describeTerminationPolicyTypes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTerminationPolicyTypesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeTerminationPolicyTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeTerminationPolicyTypesRequest(request));
    setReply(reply);
}

const DescribeTerminationPolicyTypesRequest * DescribeTerminationPolicyTypesResponse::request() const
{
    Q_D(const DescribeTerminationPolicyTypesResponse);
    return static_cast<const DescribeTerminationPolicyTypesRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeTerminationPolicyTypes response.
 *
 * @param  response  Response to parse.
 */
void DescribeTerminationPolicyTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTerminationPolicyTypesResponsePrivate
 *
 * @brief  Private implementation for DescribeTerminationPolicyTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTerminationPolicyTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTerminationPolicyTypesResponse instance.
 */
DescribeTerminationPolicyTypesResponsePrivate::DescribeTerminationPolicyTypesResponsePrivate(
    DescribeTerminationPolicyTypesQueueResponse * const q) : DescribeTerminationPolicyTypesPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeTerminationPolicyTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTerminationPolicyTypesResponsePrivate::DescribeTerminationPolicyTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTerminationPolicyTypesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
