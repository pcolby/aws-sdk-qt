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

#include "describehsmconfigurationsresponse.h"
#include "describehsmconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeHsmConfigurationsResponse
 *
 * @brief  Handles Redshift DescribeHsmConfigurations responses.
 *
 * @see    RedshiftClient::describeHsmConfigurations
 */

/**
 * @brief  Constructs a new DescribeHsmConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeHsmConfigurationsResponse::DescribeHsmConfigurationsResponse(
        const DescribeHsmConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeHsmConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeHsmConfigurationsRequest(request));
    setReply(reply);
}

const DescribeHsmConfigurationsRequest * DescribeHsmConfigurationsResponse::request() const
{
    Q_D(const DescribeHsmConfigurationsResponse);
    return static_cast<const DescribeHsmConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeHsmConfigurations response.
 *
 * @param  response  Response to parse.
 */
void DescribeHsmConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeHsmConfigurationsResponsePrivate
 *
 * @brief  Private implementation for DescribeHsmConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHsmConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeHsmConfigurationsResponse instance.
 */
DescribeHsmConfigurationsResponsePrivate::DescribeHsmConfigurationsResponsePrivate(
    DescribeHsmConfigurationsQueueResponse * const q) : DescribeHsmConfigurationsPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeHsmConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeHsmConfigurationsResponsePrivate::DescribeHsmConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHsmConfigurationsResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
