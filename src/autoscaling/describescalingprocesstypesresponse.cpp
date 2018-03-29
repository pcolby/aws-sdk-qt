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

#include "describescalingprocesstypesresponse.h"
#include "describescalingprocesstypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DescribeScalingProcessTypesResponse
 *
 * @brief  Handles AutoScaling DescribeScalingProcessTypes responses.
 *
 * @see    AutoScalingClient::describeScalingProcessTypes
 */

/**
 * @brief  Constructs a new DescribeScalingProcessTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScalingProcessTypesResponse::DescribeScalingProcessTypesResponse(
        const DescribeScalingProcessTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeScalingProcessTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingProcessTypesRequest(request));
    setReply(reply);
}

const DescribeScalingProcessTypesRequest * DescribeScalingProcessTypesResponse::request() const
{
    Q_D(const DescribeScalingProcessTypesResponse);
    return static_cast<const DescribeScalingProcessTypesRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeScalingProcessTypes response.
 *
 * @param  response  Response to parse.
 */
void DescribeScalingProcessTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeScalingProcessTypesResponsePrivate
 *
 * @brief  Private implementation for DescribeScalingProcessTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalingProcessTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeScalingProcessTypesResponse instance.
 */
DescribeScalingProcessTypesResponsePrivate::DescribeScalingProcessTypesResponsePrivate(
    DescribeScalingProcessTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeScalingProcessTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeScalingProcessTypesResponsePrivate::DescribeScalingProcessTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingProcessTypesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
