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

#include "listresourcesresponse.h"
#include "listresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkMail {

/**
 * @class  ListResourcesResponse
 *
 * @brief  Handles WorkMail ListResources responses.
 *
 * @see    WorkMailClient::listResources
 */

/**
 * @brief  Constructs a new ListResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourcesResponse::ListResourcesResponse(
        const ListResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new ListResourcesResponsePrivate(this), parent)
{
    setRequest(new ListResourcesRequest(request));
    setReply(reply);
}

const ListResourcesRequest * ListResourcesResponse::request() const
{
    Q_D(const ListResourcesResponse);
    return static_cast<const ListResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail ListResources response.
 *
 * @param  response  Response to parse.
 */
void ListResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListResourcesResponsePrivate
 *
 * @brief  Private implementation for ListResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResourcesResponse instance.
 */
ListResourcesResponsePrivate::ListResourcesResponsePrivate(
    ListResourcesQueueResponse * const q) : ListResourcesPrivate(q)
{

}

/**
 * @brief  Parse an WorkMail ListResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResourcesResponsePrivate::ListResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourcesResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace AWS
