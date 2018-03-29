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

#include "deletesubscriptiondefinitionresponse.h"
#include "deletesubscriptiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  DeleteSubscriptionDefinitionResponse
 *
 * @brief  Handles Greengrass DeleteSubscriptionDefinition responses.
 *
 * @see    GreengrassClient::deleteSubscriptionDefinition
 */

/**
 * @brief  Constructs a new DeleteSubscriptionDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSubscriptionDefinitionResponse::DeleteSubscriptionDefinitionResponse(
        const DeleteSubscriptionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteSubscriptionDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteSubscriptionDefinitionRequest(request));
    setReply(reply);
}

const DeleteSubscriptionDefinitionRequest * DeleteSubscriptionDefinitionResponse::request() const
{
    Q_D(const DeleteSubscriptionDefinitionResponse);
    return static_cast<const DeleteSubscriptionDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass DeleteSubscriptionDefinition response.
 *
 * @param  response  Response to parse.
 */
void DeleteSubscriptionDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSubscriptionDefinitionResponsePrivate
 *
 * @brief  Private implementation for DeleteSubscriptionDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriptionDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSubscriptionDefinitionResponse instance.
 */
DeleteSubscriptionDefinitionResponsePrivate::DeleteSubscriptionDefinitionResponsePrivate(
    DeleteSubscriptionDefinitionQueueResponse * const q) : DeleteSubscriptionDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass DeleteSubscriptionDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSubscriptionDefinitionResponsePrivate::DeleteSubscriptionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubscriptionDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
