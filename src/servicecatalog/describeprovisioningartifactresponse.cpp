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

#include "describeprovisioningartifactresponse.h"
#include "describeprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeProvisioningArtifactResponse
 *
 * @brief  Handles ServiceCatalog DescribeProvisioningArtifact responses.
 *
 * @see    ServiceCatalogClient::describeProvisioningArtifact
 */

/**
 * @brief  Constructs a new DescribeProvisioningArtifactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProvisioningArtifactResponse::DescribeProvisioningArtifactResponse(
        const DescribeProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new DescribeProvisioningArtifactRequest(request));
    setReply(reply);
}

const DescribeProvisioningArtifactRequest * DescribeProvisioningArtifactResponse::request() const
{
    Q_D(const DescribeProvisioningArtifactResponse);
    return static_cast<const DescribeProvisioningArtifactRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribeProvisioningArtifact response.
 *
 * @param  response  Response to parse.
 */
void DescribeProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeProvisioningArtifactResponsePrivate
 *
 * @brief  Private implementation for DescribeProvisioningArtifactResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProvisioningArtifactResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeProvisioningArtifactResponse instance.
 */
DescribeProvisioningArtifactResponsePrivate::DescribeProvisioningArtifactResponsePrivate(
    DescribeProvisioningArtifactQueueResponse * const q) : DescribeProvisioningArtifactPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribeProvisioningArtifactResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeProvisioningArtifactResponsePrivate::DescribeProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProvisioningArtifactResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
