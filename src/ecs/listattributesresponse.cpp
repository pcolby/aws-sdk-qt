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

#include "listattributesresponse.h"
#include "listattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/**
 * @class  ListAttributesResponse
 *
 * @brief  Handles ECS ListAttributes responses.
 *
 * @see    ECSClient::listAttributes
 */

/**
 * @brief  Constructs a new ListAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAttributesResponse::ListAttributesResponse(
        const ListAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new ListAttributesResponsePrivate(this), parent)
{
    setRequest(new ListAttributesRequest(request));
    setReply(reply);
}

const ListAttributesRequest * ListAttributesResponse::request() const
{
    Q_D(const ListAttributesResponse);
    return static_cast<const ListAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a ECS ListAttributes response.
 *
 * @param  response  Response to parse.
 */
void ListAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAttributesResponsePrivate
 *
 * @brief  Private implementation for ListAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAttributesResponse instance.
 */
ListAttributesResponsePrivate::ListAttributesResponsePrivate(
    ListAttributesQueueResponse * const q) : ListAttributesPrivate(q)
{

}

/**
 * @brief  Parse an ECS ListAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAttributesResponsePrivate::ListAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttributesResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws
