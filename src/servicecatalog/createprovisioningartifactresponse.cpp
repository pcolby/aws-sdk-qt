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

#include "createprovisioningartifactresponse.h"
#include "createprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  CreateProvisioningArtifactResponse
 *
 * @brief  Handles ServiceCatalog CreateProvisioningArtifact responses.
 *
 * @see    ServiceCatalogClient::createProvisioningArtifact
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateProvisioningArtifactResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreateProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new CreateProvisioningArtifactRequest(request));
    setReply(reply);
}

const CreateProvisioningArtifactRequest * CreateProvisioningArtifactResponse::request() const
{
    Q_D(const CreateProvisioningArtifactResponse);
    return static_cast<const CreateProvisioningArtifactRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog CreateProvisioningArtifact response.
 *
 * @param  response  Response to parse.
 */
void CreateProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateProvisioningArtifactResponsePrivate
 *
 * @brief  Private implementation for CreateProvisioningArtifactResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProvisioningArtifactResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateProvisioningArtifactResponse instance.
 */
CreateProvisioningArtifactResponsePrivate::CreateProvisioningArtifactResponsePrivate(
    CreateProvisioningArtifactQueueResponse * const q) : CreateProvisioningArtifactPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog CreateProvisioningArtifactResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateProvisioningArtifactResponsePrivate::CreateProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProvisioningArtifactResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
