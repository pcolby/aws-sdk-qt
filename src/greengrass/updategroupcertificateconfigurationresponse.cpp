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

#include "updategroupcertificateconfigurationresponse.h"
#include "updategroupcertificateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  UpdateGroupCertificateConfigurationResponse
 *
 * @brief  Handles Greengrass UpdateGroupCertificateConfiguration responses.
 *
 * @see    GreengrassClient::updateGroupCertificateConfiguration
 */

/**
 * @brief  Constructs a new UpdateGroupCertificateConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGroupCertificateConfigurationResponse::UpdateGroupCertificateConfigurationResponse(
        const UpdateGroupCertificateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateGroupCertificateConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateGroupCertificateConfigurationRequest(request));
    setReply(reply);
}

const UpdateGroupCertificateConfigurationRequest * UpdateGroupCertificateConfigurationResponse::request() const
{
    Q_D(const UpdateGroupCertificateConfigurationResponse);
    return static_cast<const UpdateGroupCertificateConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass UpdateGroupCertificateConfiguration response.
 *
 * @param  response  Response to parse.
 */
void UpdateGroupCertificateConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateGroupCertificateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGroupCertificateConfigurationResponsePrivate
 *
 * @brief  Private implementation for UpdateGroupCertificateConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGroupCertificateConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGroupCertificateConfigurationResponse instance.
 */
UpdateGroupCertificateConfigurationResponsePrivate::UpdateGroupCertificateConfigurationResponsePrivate(
    UpdateGroupCertificateConfigurationResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass UpdateGroupCertificateConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGroupCertificateConfigurationResponsePrivate::UpdateGroupCertificateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGroupCertificateConfigurationResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
