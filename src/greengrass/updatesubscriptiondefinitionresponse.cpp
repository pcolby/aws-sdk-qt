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

#include "updatesubscriptiondefinitionresponse.h"
#include "updatesubscriptiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  UpdateSubscriptionDefinitionResponse
 *
 * @brief  Handles Greengrass UpdateSubscriptionDefinition responses.
 *
 * @see    GreengrassClient::updateSubscriptionDefinition
 */

/**
 * @brief  Constructs a new UpdateSubscriptionDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSubscriptionDefinitionResponse::UpdateSubscriptionDefinitionResponse(
        const UpdateSubscriptionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateSubscriptionDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateSubscriptionDefinitionRequest(request));
    setReply(reply);
}

const UpdateSubscriptionDefinitionRequest * UpdateSubscriptionDefinitionResponse::request() const
{
    Q_D(const UpdateSubscriptionDefinitionResponse);
    return static_cast<const UpdateSubscriptionDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass UpdateSubscriptionDefinition response.
 *
 * @param  response  Response to parse.
 */
void UpdateSubscriptionDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSubscriptionDefinitionResponsePrivate
 *
 * @brief  Private implementation for UpdateSubscriptionDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubscriptionDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSubscriptionDefinitionResponse instance.
 */
UpdateSubscriptionDefinitionResponsePrivate::UpdateSubscriptionDefinitionResponsePrivate(
    UpdateSubscriptionDefinitionQueueResponse * const q) : UpdateSubscriptionDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass UpdateSubscriptionDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSubscriptionDefinitionResponsePrivate::UpdateSubscriptionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSubscriptionDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
