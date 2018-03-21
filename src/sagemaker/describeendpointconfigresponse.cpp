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

#include "describeendpointconfigresponse.h"
#include "describeendpointconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  DescribeEndpointConfigResponse
 *
 * @brief  Handles SageMaker DescribeEndpointConfig responses.
 *
 * @see    SageMakerClient::describeEndpointConfig
 */

/**
 * @brief  Constructs a new DescribeEndpointConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEndpointConfigResponse::DescribeEndpointConfigResponse(
        const DescribeEndpointConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeEndpointConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointConfigRequest(request));
    setReply(reply);
}

const DescribeEndpointConfigRequest * DescribeEndpointConfigResponse::request() const
{
    Q_D(const DescribeEndpointConfigResponse);
    return static_cast<const DescribeEndpointConfigRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker DescribeEndpointConfig response.
 *
 * @param  response  Response to parse.
 */
void DescribeEndpointConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEndpointConfigResponsePrivate
 *
 * @brief  Private implementation for DescribeEndpointConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEndpointConfigResponse instance.
 */
DescribeEndpointConfigResponsePrivate::DescribeEndpointConfigResponsePrivate(
    DescribeEndpointConfigQueueResponse * const q) : DescribeEndpointConfigPrivate(q)
{

}

/**
 * @brief  Parse an SageMaker DescribeEndpointConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEndpointConfigResponsePrivate::DescribeEndpointConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointConfigResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace AWS
