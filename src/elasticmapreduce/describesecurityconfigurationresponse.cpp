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

#include "describesecurityconfigurationresponse.h"
#include "describesecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  DescribeSecurityConfigurationResponse
 *
 * @brief  Handles EMR DescribeSecurityConfiguration responses.
 *
 * @see    EMRClient::describeSecurityConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSecurityConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new DescribeSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeSecurityConfigurationRequest(request));
    setReply(reply);
}

const DescribeSecurityConfigurationRequest * DescribeSecurityConfigurationResponse::request() const
{
    Q_D(const DescribeSecurityConfigurationResponse);
    return static_cast<const DescribeSecurityConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a EMR DescribeSecurityConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DescribeSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSecurityConfigurationResponsePrivate
 *
 * @brief  Private implementation for DescribeSecurityConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSecurityConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSecurityConfigurationResponse instance.
 */
DescribeSecurityConfigurationResponsePrivate::DescribeSecurityConfigurationResponsePrivate(
    DescribeSecurityConfigurationQueueResponse * const q) : DescribeSecurityConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an EMR DescribeSecurityConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSecurityConfigurationResponsePrivate::DescribeSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSecurityConfigurationResponse"));
    /// @todo
}

} // namespace EMR
} // namespace AWS
