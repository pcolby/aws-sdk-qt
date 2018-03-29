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

#include "getsubscriptiondefinitionversionresponse.h"
#include "getsubscriptiondefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  GetSubscriptionDefinitionVersionResponse
 *
 * @brief  Handles Greengrass GetSubscriptionDefinitionVersion responses.
 *
 * @see    GreengrassClient::getSubscriptionDefinitionVersion
 */

/**
 * @brief  Constructs a new GetSubscriptionDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSubscriptionDefinitionVersionResponse::GetSubscriptionDefinitionVersionResponse(
        const GetSubscriptionDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetSubscriptionDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetSubscriptionDefinitionVersionRequest(request));
    setReply(reply);
}

const GetSubscriptionDefinitionVersionRequest * GetSubscriptionDefinitionVersionResponse::request() const
{
    Q_D(const GetSubscriptionDefinitionVersionResponse);
    return static_cast<const GetSubscriptionDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetSubscriptionDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void GetSubscriptionDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSubscriptionDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for GetSubscriptionDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSubscriptionDefinitionVersionResponse instance.
 */
GetSubscriptionDefinitionVersionResponsePrivate::GetSubscriptionDefinitionVersionResponsePrivate(
    GetSubscriptionDefinitionVersionQueueResponse * const q) : GetSubscriptionDefinitionVersionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetSubscriptionDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSubscriptionDefinitionVersionResponsePrivate::GetSubscriptionDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSubscriptionDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
