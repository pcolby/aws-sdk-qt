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

#include "describeconfigurationaggregatorsresponse.h"
#include "describeconfigurationaggregatorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeConfigurationAggregatorsResponse
 *
 * @brief  Handles ConfigService DescribeConfigurationAggregators responses.
 *
 * @see    ConfigServiceClient::describeConfigurationAggregators
 */

/**
 * @brief  Constructs a new DescribeConfigurationAggregatorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationAggregatorsResponse::DescribeConfigurationAggregatorsResponse(
        const DescribeConfigurationAggregatorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DescribeConfigurationAggregatorsResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationAggregatorsRequest(request));
    setReply(reply);
}

const DescribeConfigurationAggregatorsRequest * DescribeConfigurationAggregatorsResponse::request() const
{
    Q_D(const DescribeConfigurationAggregatorsResponse);
    return static_cast<const DescribeConfigurationAggregatorsRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribeConfigurationAggregators response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigurationAggregatorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeConfigurationAggregatorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConfigurationAggregatorsResponsePrivate
 *
 * @brief  Private implementation for DescribeConfigurationAggregatorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationAggregatorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigurationAggregatorsResponse instance.
 */
DescribeConfigurationAggregatorsResponsePrivate::DescribeConfigurationAggregatorsResponsePrivate(
    DescribeConfigurationAggregatorsResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribeConfigurationAggregatorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigurationAggregatorsResponsePrivate::parseDescribeConfigurationAggregatorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationAggregatorsResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
