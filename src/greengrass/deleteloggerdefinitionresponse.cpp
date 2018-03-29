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

#include "deleteloggerdefinitionresponse.h"
#include "deleteloggerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  DeleteLoggerDefinitionResponse
 *
 * @brief  Handles Greengrass DeleteLoggerDefinition responses.
 *
 * @see    GreengrassClient::deleteLoggerDefinition
 */

/**
 * @brief  Constructs a new DeleteLoggerDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLoggerDefinitionResponse::DeleteLoggerDefinitionResponse(
        const DeleteLoggerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteLoggerDefinitionResponse(new DeleteLoggerDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteLoggerDefinitionRequest(request));
    setReply(reply);
}

const DeleteLoggerDefinitionRequest * DeleteLoggerDefinitionResponse::request() const
{
    Q_D(const DeleteLoggerDefinitionResponse);
    return static_cast<const DeleteLoggerDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass DeleteLoggerDefinition response.
 *
 * @param  response  Response to parse.
 */
void DeleteLoggerDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteLoggerDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLoggerDefinitionResponsePrivate
 *
 * @brief  Private implementation for DeleteLoggerDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoggerDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLoggerDefinitionResponse instance.
 */
DeleteLoggerDefinitionResponsePrivate::DeleteLoggerDefinitionResponsePrivate(
    DeleteLoggerDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass DeleteLoggerDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLoggerDefinitionResponsePrivate::parseDeleteLoggerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLoggerDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
