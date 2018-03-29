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

#include "deleteresourcedefinitionresponse.h"
#include "deleteresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  DeleteResourceDefinitionResponse
 *
 * @brief  Handles Greengrass DeleteResourceDefinition responses.
 *
 * @see    GreengrassClient::deleteResourceDefinition
 */

/**
 * @brief  Constructs a new DeleteResourceDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteResourceDefinitionResponse::DeleteResourceDefinitionResponse(
        const DeleteResourceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteResourceDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceDefinitionRequest(request));
    setReply(reply);
}

const DeleteResourceDefinitionRequest * DeleteResourceDefinitionResponse::request() const
{
    Q_D(const DeleteResourceDefinitionResponse);
    return static_cast<const DeleteResourceDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass DeleteResourceDefinition response.
 *
 * @param  response  Response to parse.
 */
void DeleteResourceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteResourceDefinitionResponsePrivate
 *
 * @brief  Private implementation for DeleteResourceDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourceDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteResourceDefinitionResponse instance.
 */
DeleteResourceDefinitionResponsePrivate::DeleteResourceDefinitionResponsePrivate(
    DeleteResourceDefinitionQueueResponse * const q) : DeleteResourceDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass DeleteResourceDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteResourceDefinitionResponsePrivate::DeleteResourceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
