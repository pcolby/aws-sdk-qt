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

#include "updateresourcedefinitionresponse.h"
#include "updateresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  UpdateResourceDefinitionResponse
 *
 * @brief  Handles Greengrass UpdateResourceDefinition responses.
 *
 * @see    GreengrassClient::updateResourceDefinition
 */

/**
 * @brief  Constructs a new UpdateResourceDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateResourceDefinitionResponse::UpdateResourceDefinitionResponse(
        const UpdateResourceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateResourceDefinitionResponse(new UpdateResourceDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceDefinitionRequest(request));
    setReply(reply);
}

const UpdateResourceDefinitionRequest * UpdateResourceDefinitionResponse::request() const
{
    Q_D(const UpdateResourceDefinitionResponse);
    return static_cast<const UpdateResourceDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass UpdateResourceDefinition response.
 *
 * @param  response  Response to parse.
 */
void UpdateResourceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateResourceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateResourceDefinitionResponsePrivate
 *
 * @brief  Private implementation for UpdateResourceDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResourceDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateResourceDefinitionResponse instance.
 */
UpdateResourceDefinitionResponsePrivate::UpdateResourceDefinitionResponsePrivate(
    UpdateResourceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass UpdateResourceDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateResourceDefinitionResponsePrivate::parseUpdateResourceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
