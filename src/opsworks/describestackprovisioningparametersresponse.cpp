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

#include "describestackprovisioningparametersresponse.h"
#include "describestackprovisioningparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeStackProvisioningParametersResponse
 *
 * @brief  Handles OpsWorks DescribeStackProvisioningParameters responses.
 *
 * @see    OpsWorksClient::describeStackProvisioningParameters
 */

/**
 * @brief  Constructs a new DescribeStackProvisioningParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStackProvisioningParametersResponse::DescribeStackProvisioningParametersResponse(
        const DescribeStackProvisioningParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeStackProvisioningParametersResponse(new DescribeStackProvisioningParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeStackProvisioningParametersRequest(request));
    setReply(reply);
}

const DescribeStackProvisioningParametersRequest * DescribeStackProvisioningParametersResponse::request() const
{
    Q_D(const DescribeStackProvisioningParametersResponse);
    return static_cast<const DescribeStackProvisioningParametersRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeStackProvisioningParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeStackProvisioningParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeStackProvisioningParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStackProvisioningParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeStackProvisioningParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackProvisioningParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStackProvisioningParametersResponse instance.
 */
DescribeStackProvisioningParametersResponsePrivate::DescribeStackProvisioningParametersResponsePrivate(
    DescribeStackProvisioningParametersResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeStackProvisioningParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStackProvisioningParametersResponsePrivate::parseDescribeStackProvisioningParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStackProvisioningParametersResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
