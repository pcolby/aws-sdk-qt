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

#include "updatefunctiondefinitionresponse.h"
#include "updatefunctiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  UpdateFunctionDefinitionResponse
 *
 * @brief  Handles Greengrass UpdateFunctionDefinition responses.
 *
 * @see    GreengrassClient::updateFunctionDefinition
 */

/**
 * @brief  Constructs a new UpdateFunctionDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFunctionDefinitionResponse::UpdateFunctionDefinitionResponse(
        const UpdateFunctionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateFunctionDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateFunctionDefinitionRequest(request));
    setReply(reply);
}

const UpdateFunctionDefinitionRequest * UpdateFunctionDefinitionResponse::request() const
{
    Q_D(const UpdateFunctionDefinitionResponse);
    return static_cast<const UpdateFunctionDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass UpdateFunctionDefinition response.
 *
 * @param  response  Response to parse.
 */
void UpdateFunctionDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFunctionDefinitionResponsePrivate
 *
 * @brief  Private implementation for UpdateFunctionDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFunctionDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFunctionDefinitionResponse instance.
 */
UpdateFunctionDefinitionResponsePrivate::UpdateFunctionDefinitionResponsePrivate(
    UpdateFunctionDefinitionQueueResponse * const q) : UpdateFunctionDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass UpdateFunctionDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFunctionDefinitionResponsePrivate::UpdateFunctionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFunctionDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
