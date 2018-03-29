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

#include "listtaskdefinitionsresponse.h"
#include "listtaskdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/**
 * @class  ListTaskDefinitionsResponse
 *
 * @brief  Handles ECS ListTaskDefinitions responses.
 *
 * @see    ECSClient::listTaskDefinitions
 */

/**
 * @brief  Constructs a new ListTaskDefinitionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTaskDefinitionsResponse::ListTaskDefinitionsResponse(
        const ListTaskDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new ListTaskDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListTaskDefinitionsRequest(request));
    setReply(reply);
}

const ListTaskDefinitionsRequest * ListTaskDefinitionsResponse::request() const
{
    Q_D(const ListTaskDefinitionsResponse);
    return static_cast<const ListTaskDefinitionsRequest *>(d->request);
}

/**
 * @brief  Parse a ECS ListTaskDefinitions response.
 *
 * @param  response  Response to parse.
 */
void ListTaskDefinitionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTaskDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTaskDefinitionsResponsePrivate
 *
 * @brief  Private implementation for ListTaskDefinitionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTaskDefinitionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTaskDefinitionsResponse instance.
 */
ListTaskDefinitionsResponsePrivate::ListTaskDefinitionsResponsePrivate(
    ListTaskDefinitionsResponse * const q) : ECSResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECS ListTaskDefinitionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTaskDefinitionsResponsePrivate::parseListTaskDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTaskDefinitionsResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws
