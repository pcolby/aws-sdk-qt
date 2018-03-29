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

#include "listtypesresponse.h"
#include "listtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  ListTypesResponse
 *
 * @brief  Handles AppSync ListTypes responses.
 *
 * @see    AppSyncClient::listTypes
 */

/**
 * @brief  Constructs a new ListTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTypesResponse::ListTypesResponse(
        const ListTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListTypesResponsePrivate(this), parent)
{
    setRequest(new ListTypesRequest(request));
    setReply(reply);
}

const ListTypesRequest * ListTypesResponse::request() const
{
    Q_D(const ListTypesResponse);
    return static_cast<const ListTypesRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync ListTypes response.
 *
 * @param  response  Response to parse.
 */
void ListTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTypesResponsePrivate
 *
 * @brief  Private implementation for ListTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTypesResponse instance.
 */
ListTypesResponsePrivate::ListTypesResponsePrivate(
    ListTypesQueueResponse * const q) : ListTypesPrivate(q)
{

}

/**
 * @brief  Parse an AppSync ListTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTypesResponsePrivate::ListTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTypesResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
