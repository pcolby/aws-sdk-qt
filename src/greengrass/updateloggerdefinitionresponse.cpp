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

#include "updateloggerdefinitionresponse.h"
#include "updateloggerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  UpdateLoggerDefinitionResponse
 *
 * @brief  Handles Greengrass UpdateLoggerDefinition responses.
 *
 * @see    GreengrassClient::updateLoggerDefinition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateLoggerDefinitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateLoggerDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateLoggerDefinitionRequest(request));
    setReply(reply);
}

const UpdateLoggerDefinitionRequest * UpdateLoggerDefinitionResponse::request() const
{
    Q_D(const UpdateLoggerDefinitionResponse);
    return static_cast<const UpdateLoggerDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass UpdateLoggerDefinition response.
 *
 * @param  response  Response to parse.
 */
void UpdateLoggerDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateLoggerDefinitionResponsePrivate
 *
 * @brief  Private implementation for UpdateLoggerDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLoggerDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateLoggerDefinitionResponse instance.
 */
UpdateLoggerDefinitionResponsePrivate::UpdateLoggerDefinitionResponsePrivate(
    UpdateLoggerDefinitionQueueResponse * const q) : UpdateLoggerDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass UpdateLoggerDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateLoggerDefinitionResponsePrivate::UpdateLoggerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLoggerDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
