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

#include "describeadjustmenttypesresponse.h"
#include "describeadjustmenttypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DescribeAdjustmentTypesResponse
 *
 * @brief  Handles AutoScaling DescribeAdjustmentTypes responses.
 *
 * @see    AutoScalingClient::describeAdjustmentTypes
 */

/**
 * @brief  Constructs a new DescribeAdjustmentTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAdjustmentTypesResponse::DescribeAdjustmentTypesResponse(
        const DescribeAdjustmentTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeAdjustmentTypesResponse(new DescribeAdjustmentTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeAdjustmentTypesRequest(request));
    setReply(reply);
}

const DescribeAdjustmentTypesRequest * DescribeAdjustmentTypesResponse::request() const
{
    Q_D(const DescribeAdjustmentTypesResponse);
    return static_cast<const DescribeAdjustmentTypesRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeAdjustmentTypes response.
 *
 * @param  response  Response to parse.
 */
void DescribeAdjustmentTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAdjustmentTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAdjustmentTypesResponsePrivate
 *
 * @brief  Private implementation for DescribeAdjustmentTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAdjustmentTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAdjustmentTypesResponse instance.
 */
DescribeAdjustmentTypesResponsePrivate::DescribeAdjustmentTypesResponsePrivate(
    DescribeAdjustmentTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeAdjustmentTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAdjustmentTypesResponsePrivate::parseDescribeAdjustmentTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAdjustmentTypesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
