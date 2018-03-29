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

#include "describescalabletargetsresponse.h"
#include "describescalabletargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationAutoScaling {

/**
 * @class  DescribeScalableTargetsResponse
 *
 * @brief  Handles ApplicationAutoScaling DescribeScalableTargets responses.
 *
 * @see    ApplicationAutoScalingClient::describeScalableTargets
 */

/**
 * @brief  Constructs a new DescribeScalableTargetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScalableTargetsResponse::DescribeScalableTargetsResponse(
        const DescribeScalableTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationAutoScalingResponse(new DescribeScalableTargetsResponsePrivate(this), parent)
{
    setRequest(new DescribeScalableTargetsRequest(request));
    setReply(reply);
}

const DescribeScalableTargetsRequest * DescribeScalableTargetsResponse::request() const
{
    Q_D(const DescribeScalableTargetsResponse);
    return static_cast<const DescribeScalableTargetsRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationAutoScaling DescribeScalableTargets response.
 *
 * @param  response  Response to parse.
 */
void DescribeScalableTargetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeScalableTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeScalableTargetsResponsePrivate
 *
 * @brief  Private implementation for DescribeScalableTargetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalableTargetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeScalableTargetsResponse instance.
 */
DescribeScalableTargetsResponsePrivate::DescribeScalableTargetsResponsePrivate(
    DescribeScalableTargetsResponse * const q) : ApplicationAutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationAutoScaling DescribeScalableTargetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeScalableTargetsResponsePrivate::DescribeScalableTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalableTargetsResponse"));
    /// @todo
}

} // namespace ApplicationAutoScaling
} // namespace QtAws
