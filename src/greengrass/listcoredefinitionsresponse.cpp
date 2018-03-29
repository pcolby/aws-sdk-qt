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

#include "listcoredefinitionsresponse.h"
#include "listcoredefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  ListCoreDefinitionsResponse
 *
 * @brief  Handles Greengrass ListCoreDefinitions responses.
 *
 * @see    GreengrassClient::listCoreDefinitions
 */

/**
 * @brief  Constructs a new ListCoreDefinitionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCoreDefinitionsResponse::ListCoreDefinitionsResponse(
        const ListCoreDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListCoreDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListCoreDefinitionsRequest(request));
    setReply(reply);
}

const ListCoreDefinitionsRequest * ListCoreDefinitionsResponse::request() const
{
    Q_D(const ListCoreDefinitionsResponse);
    return static_cast<const ListCoreDefinitionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListCoreDefinitions response.
 *
 * @param  response  Response to parse.
 */
void ListCoreDefinitionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCoreDefinitionsResponsePrivate
 *
 * @brief  Private implementation for ListCoreDefinitionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCoreDefinitionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCoreDefinitionsResponse instance.
 */
ListCoreDefinitionsResponsePrivate::ListCoreDefinitionsResponsePrivate(
    ListCoreDefinitionsQueueResponse * const q) : ListCoreDefinitionsPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListCoreDefinitionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCoreDefinitionsResponsePrivate::ListCoreDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoreDefinitionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
