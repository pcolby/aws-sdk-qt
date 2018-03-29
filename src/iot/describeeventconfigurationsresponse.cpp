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

#include "describeeventconfigurationsresponse.h"
#include "describeeventconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeEventConfigurationsResponse
 *
 * @brief  Handles IoT DescribeEventConfigurations responses.
 *
 * @see    IoTClient::describeEventConfigurations
 */

/**
 * @brief  Constructs a new DescribeEventConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventConfigurationsResponse::DescribeEventConfigurationsResponse(
        const DescribeEventConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeEventConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeEventConfigurationsRequest(request));
    setReply(reply);
}

const DescribeEventConfigurationsRequest * DescribeEventConfigurationsResponse::request() const
{
    Q_D(const DescribeEventConfigurationsResponse);
    return static_cast<const DescribeEventConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DescribeEventConfigurations response.
 *
 * @param  response  Response to parse.
 */
void DescribeEventConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEventConfigurationsResponsePrivate
 *
 * @brief  Private implementation for DescribeEventConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEventConfigurationsResponse instance.
 */
DescribeEventConfigurationsResponsePrivate::DescribeEventConfigurationsResponsePrivate(
    DescribeEventConfigurationsQueueResponse * const q) : DescribeEventConfigurationsPrivate(q)
{

}

/**
 * @brief  Parse an IoT DescribeEventConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEventConfigurationsResponsePrivate::DescribeEventConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventConfigurationsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
