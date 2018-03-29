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

#include "listresourcedefinitionsresponse.h"
#include "listresourcedefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  ListResourceDefinitionsResponse
 *
 * @brief  Handles Greengrass ListResourceDefinitions responses.
 *
 * @see    GreengrassClient::listResourceDefinitions
 */

/**
 * @brief  Constructs a new ListResourceDefinitionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourceDefinitionsResponse::ListResourceDefinitionsResponse(
        const ListResourceDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListResourceDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListResourceDefinitionsRequest(request));
    setReply(reply);
}

const ListResourceDefinitionsRequest * ListResourceDefinitionsResponse::request() const
{
    Q_D(const ListResourceDefinitionsResponse);
    return static_cast<const ListResourceDefinitionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListResourceDefinitions response.
 *
 * @param  response  Response to parse.
 */
void ListResourceDefinitionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListResourceDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListResourceDefinitionsResponsePrivate
 *
 * @brief  Private implementation for ListResourceDefinitionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceDefinitionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResourceDefinitionsResponse instance.
 */
ListResourceDefinitionsResponsePrivate::ListResourceDefinitionsResponsePrivate(
    ListResourceDefinitionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListResourceDefinitionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResourceDefinitionsResponsePrivate::ListResourceDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceDefinitionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
