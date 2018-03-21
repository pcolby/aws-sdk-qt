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

#include "listrootsresponse.h"
#include "listrootsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  ListRootsResponse
 *
 * @brief  Handles Organizations ListRoots responses.
 *
 * @see    OrganizationsClient::listRoots
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRootsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new ListRootsResponsePrivate(this), parent)
{
    setRequest(new ListRootsRequest(request));
    setReply(reply);
}

const ListRootsRequest * ListRootsResponse::request() const
{
    Q_D(const ListRootsResponse);
    return static_cast<const ListRootsRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations ListRoots response.
 *
 * @param  response  Response to parse.
 */
void ListRootsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRootsResponsePrivate
 *
 * @brief  Private implementation for ListRootsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRootsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRootsResponse instance.
 */
ListRootsResponsePrivate::ListRootsResponsePrivate(
    ListRootsQueueResponse * const q) : ListRootsPrivate(q)
{

}

/**
 * @brief  Parse an Organizations ListRootsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRootsResponsePrivate::ListRootsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRootsResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
