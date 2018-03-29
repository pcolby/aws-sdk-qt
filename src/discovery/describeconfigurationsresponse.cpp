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

#include "describeconfigurationsresponse.h"
#include "describeconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  DescribeConfigurationsResponse
 *
 * @brief  Handles ApplicationDiscoveryService DescribeConfigurations responses.
 *
 * @see    ApplicationDiscoveryServiceClient::describeConfigurations
 */

/**
 * @brief  Constructs a new DescribeConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationsResponse::DescribeConfigurationsResponse(
        const DescribeConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new DescribeConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationsRequest(request));
    setReply(reply);
}

const DescribeConfigurationsRequest * DescribeConfigurationsResponse::request() const
{
    Q_D(const DescribeConfigurationsResponse);
    return static_cast<const DescribeConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService DescribeConfigurations response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConfigurationsResponsePrivate
 *
 * @brief  Private implementation for DescribeConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigurationsResponse instance.
 */
DescribeConfigurationsResponsePrivate::DescribeConfigurationsResponsePrivate(
    DescribeConfigurationsResponse * const q) : ApplicationDiscoveryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService DescribeConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigurationsResponsePrivate::DescribeConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationsResponse"));
    /// @todo
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
