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

#include "describeconfigurationaggregatorsourcesstatusresponse.h"
#include "describeconfigurationaggregatorsourcesstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeConfigurationAggregatorSourcesStatusResponse
 *
 * @brief  Handles ConfigService DescribeConfigurationAggregatorSourcesStatus responses.
 *
 * @see    ConfigServiceClient::describeConfigurationAggregatorSourcesStatus
 */

/**
 * @brief  Constructs a new DescribeConfigurationAggregatorSourcesStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationAggregatorSourcesStatusResponse::DescribeConfigurationAggregatorSourcesStatusResponse(
        const DescribeConfigurationAggregatorSourcesStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DescribeConfigurationAggregatorSourcesStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationAggregatorSourcesStatusRequest(request));
    setReply(reply);
}

const DescribeConfigurationAggregatorSourcesStatusRequest * DescribeConfigurationAggregatorSourcesStatusResponse::request() const
{
    Q_D(const DescribeConfigurationAggregatorSourcesStatusResponse);
    return static_cast<const DescribeConfigurationAggregatorSourcesStatusRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribeConfigurationAggregatorSourcesStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigurationAggregatorSourcesStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeConfigurationAggregatorSourcesStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConfigurationAggregatorSourcesStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeConfigurationAggregatorSourcesStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationAggregatorSourcesStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigurationAggregatorSourcesStatusResponse instance.
 */
DescribeConfigurationAggregatorSourcesStatusResponsePrivate::DescribeConfigurationAggregatorSourcesStatusResponsePrivate(
    DescribeConfigurationAggregatorSourcesStatusResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribeConfigurationAggregatorSourcesStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigurationAggregatorSourcesStatusResponsePrivate::parseDescribeConfigurationAggregatorSourcesStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationAggregatorSourcesStatusResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
