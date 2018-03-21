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

#include "listiproutesresponse.h"
#include "listiproutesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  ListIpRoutesResponse
 *
 * @brief  Handles DirectoryService ListIpRoutes responses.
 *
 * @see    DirectoryServiceClient::listIpRoutes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIpRoutesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new ListIpRoutesResponsePrivate(this), parent)
{
    setRequest(new ListIpRoutesRequest(request));
    setReply(reply);
}

const ListIpRoutesRequest * ListIpRoutesResponse::request() const
{
    Q_D(const ListIpRoutesResponse);
    return static_cast<const ListIpRoutesRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService ListIpRoutes response.
 *
 * @param  response  Response to parse.
 */
void ListIpRoutesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListIpRoutesResponsePrivate
 *
 * @brief  Private implementation for ListIpRoutesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIpRoutesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListIpRoutesResponse instance.
 */
ListIpRoutesResponsePrivate::ListIpRoutesResponsePrivate(
    ListIpRoutesQueueResponse * const q) : ListIpRoutesPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService ListIpRoutesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListIpRoutesResponsePrivate::ListIpRoutesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIpRoutesResponse"));
    /// @todo
}
