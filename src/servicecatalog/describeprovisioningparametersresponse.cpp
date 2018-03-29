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

#include "describeprovisioningparametersresponse.h"
#include "describeprovisioningparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DescribeProvisioningParametersResponse
 *
 * @brief  Handles ServiceCatalog DescribeProvisioningParameters responses.
 *
 * @see    ServiceCatalogClient::describeProvisioningParameters
 */

/**
 * @brief  Constructs a new DescribeProvisioningParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProvisioningParametersResponse::DescribeProvisioningParametersResponse(
        const DescribeProvisioningParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProvisioningParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeProvisioningParametersRequest(request));
    setReply(reply);
}

const DescribeProvisioningParametersRequest * DescribeProvisioningParametersResponse::request() const
{
    Q_D(const DescribeProvisioningParametersResponse);
    return static_cast<const DescribeProvisioningParametersRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribeProvisioningParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeProvisioningParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeProvisioningParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeProvisioningParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeProvisioningParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProvisioningParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeProvisioningParametersResponse instance.
 */
DescribeProvisioningParametersResponsePrivate::DescribeProvisioningParametersResponsePrivate(
    DescribeProvisioningParametersResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribeProvisioningParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeProvisioningParametersResponsePrivate::DescribeProvisioningParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProvisioningParametersResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
