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

#include "createsubscriptiondefinitionversionresponse.h"
#include "createsubscriptiondefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateSubscriptionDefinitionVersionResponse
 *
 * @brief  Handles Greengrass CreateSubscriptionDefinitionVersion responses.
 *
 * @see    GreengrassClient::createSubscriptionDefinitionVersion
 */

/**
 * @brief  Constructs a new CreateSubscriptionDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSubscriptionDefinitionVersionResponse::CreateSubscriptionDefinitionVersionResponse(
        const CreateSubscriptionDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateSubscriptionDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateSubscriptionDefinitionVersionRequest(request));
    setReply(reply);
}

const CreateSubscriptionDefinitionVersionRequest * CreateSubscriptionDefinitionVersionResponse::request() const
{
    Q_D(const CreateSubscriptionDefinitionVersionResponse);
    return static_cast<const CreateSubscriptionDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateSubscriptionDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateSubscriptionDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSubscriptionDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for CreateSubscriptionDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubscriptionDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSubscriptionDefinitionVersionResponse instance.
 */
CreateSubscriptionDefinitionVersionResponsePrivate::CreateSubscriptionDefinitionVersionResponsePrivate(
    CreateSubscriptionDefinitionVersionQueueResponse * const q) : CreateSubscriptionDefinitionVersionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateSubscriptionDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSubscriptionDefinitionVersionResponsePrivate::CreateSubscriptionDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubscriptionDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
