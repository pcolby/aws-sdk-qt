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

#include "updateprovisioningartifactresponse.h"
#include "updateprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  UpdateProvisioningArtifactResponse
 *
 * @brief  Handles ServiceCatalog UpdateProvisioningArtifact responses.
 *
 * @see    ServiceCatalogClient::updateProvisioningArtifact
 */

/**
 * @brief  Constructs a new UpdateProvisioningArtifactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateProvisioningArtifactResponse::UpdateProvisioningArtifactResponse(
        const UpdateProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdateProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new UpdateProvisioningArtifactRequest(request));
    setReply(reply);
}

const UpdateProvisioningArtifactRequest * UpdateProvisioningArtifactResponse::request() const
{
    Q_D(const UpdateProvisioningArtifactResponse);
    return static_cast<const UpdateProvisioningArtifactRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog UpdateProvisioningArtifact response.
 *
 * @param  response  Response to parse.
 */
void UpdateProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateProvisioningArtifactResponsePrivate
 *
 * @brief  Private implementation for UpdateProvisioningArtifactResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProvisioningArtifactResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateProvisioningArtifactResponse instance.
 */
UpdateProvisioningArtifactResponsePrivate::UpdateProvisioningArtifactResponsePrivate(
    UpdateProvisioningArtifactQueueResponse * const q) : UpdateProvisioningArtifactPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog UpdateProvisioningArtifactResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateProvisioningArtifactResponsePrivate::UpdateProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProvisioningArtifactResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
