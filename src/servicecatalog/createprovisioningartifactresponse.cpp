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

#include "createprovisioningartifactresponse.h"
#include "createprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  CreateProvisioningArtifactResponse
 *
 * @brief  Handles ServiceCatalog CreateProvisioningArtifact responses.
 *
 * @see    ServiceCatalogClient::createProvisioningArtifact
 */

/**
 * @brief  Constructs a new CreateProvisioningArtifactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateProvisioningArtifactResponse::CreateProvisioningArtifactResponse(
        const CreateProvisioningArtifactRequest &request,
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
    CreateProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
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
} // namespace QtAws
