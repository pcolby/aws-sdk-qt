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

#include "describescalingparametersresponse.h"
#include "describescalingparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/**
 * @class  DescribeScalingParametersResponse
 *
 * @brief  Handles CloudSearch DescribeScalingParameters responses.
 *
 * @see    CloudSearchClient::describeScalingParameters
 */

/**
 * @brief  Constructs a new DescribeScalingParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScalingParametersResponse::DescribeScalingParametersResponse(
        const DescribeScalingParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeScalingParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingParametersRequest(request));
    setReply(reply);
}

const DescribeScalingParametersRequest * DescribeScalingParametersResponse::request() const
{
    Q_D(const DescribeScalingParametersResponse);
    return static_cast<const DescribeScalingParametersRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DescribeScalingParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeScalingParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeScalingParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeScalingParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeScalingParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalingParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeScalingParametersResponse instance.
 */
DescribeScalingParametersResponsePrivate::DescribeScalingParametersResponsePrivate(
    DescribeScalingParametersResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DescribeScalingParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeScalingParametersResponsePrivate::parseDescribeScalingParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingParametersResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
