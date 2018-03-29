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

#include "listsubscriptiondefinitionsresponse.h"
#include "listsubscriptiondefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  ListSubscriptionDefinitionsResponse
 *
 * @brief  Handles Greengrass ListSubscriptionDefinitions responses.
 *
 * @see    GreengrassClient::listSubscriptionDefinitions
 */

/**
 * @brief  Constructs a new ListSubscriptionDefinitionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSubscriptionDefinitionsResponse::ListSubscriptionDefinitionsResponse(
        const ListSubscriptionDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListSubscriptionDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListSubscriptionDefinitionsRequest(request));
    setReply(reply);
}

const ListSubscriptionDefinitionsRequest * ListSubscriptionDefinitionsResponse::request() const
{
    Q_D(const ListSubscriptionDefinitionsResponse);
    return static_cast<const ListSubscriptionDefinitionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListSubscriptionDefinitions response.
 *
 * @param  response  Response to parse.
 */
void ListSubscriptionDefinitionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListSubscriptionDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSubscriptionDefinitionsResponsePrivate
 *
 * @brief  Private implementation for ListSubscriptionDefinitionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionDefinitionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSubscriptionDefinitionsResponse instance.
 */
ListSubscriptionDefinitionsResponsePrivate::ListSubscriptionDefinitionsResponsePrivate(
    ListSubscriptionDefinitionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListSubscriptionDefinitionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSubscriptionDefinitionsResponsePrivate::parseListSubscriptionDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscriptionDefinitionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
