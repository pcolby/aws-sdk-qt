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

#include "createsubscriptiondefinitionresponse.h"
#include "createsubscriptiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  CreateSubscriptionDefinitionResponse
 *
 * @brief  Handles Greengrass CreateSubscriptionDefinition responses.
 *
 * @see    GreengrassClient::createSubscriptionDefinition
 */

/**
 * @brief  Constructs a new CreateSubscriptionDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSubscriptionDefinitionResponse::CreateSubscriptionDefinitionResponse(
        const CreateSubscriptionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateSubscriptionDefinitionResponse(new CreateSubscriptionDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateSubscriptionDefinitionRequest(request));
    setReply(reply);
}

const CreateSubscriptionDefinitionRequest * CreateSubscriptionDefinitionResponse::request() const
{
    Q_D(const CreateSubscriptionDefinitionResponse);
    return static_cast<const CreateSubscriptionDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateSubscriptionDefinition response.
 *
 * @param  response  Response to parse.
 */
void CreateSubscriptionDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateSubscriptionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSubscriptionDefinitionResponsePrivate
 *
 * @brief  Private implementation for CreateSubscriptionDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubscriptionDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSubscriptionDefinitionResponse instance.
 */
CreateSubscriptionDefinitionResponsePrivate::CreateSubscriptionDefinitionResponsePrivate(
    CreateSubscriptionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateSubscriptionDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSubscriptionDefinitionResponsePrivate::parseCreateSubscriptionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubscriptionDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
