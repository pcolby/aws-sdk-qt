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

#include "listrunsresponse.h"
#include "listrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListRunsResponse
 *
 * @brief  Handles DeviceFarm ListRuns responses.
 *
 * @see    DeviceFarmClient::listRuns
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRunsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListRunsResponsePrivate(this), parent)
{
    setRequest(new ListRunsRequest(request));
    setReply(reply);
}

const ListRunsRequest * ListRunsResponse::request() const
{
    Q_D(const ListRunsResponse);
    return static_cast<const ListRunsRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListRuns response.
 *
 * @param  response  Response to parse.
 */
void ListRunsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRunsResponsePrivate
 *
 * @brief  Private implementation for ListRunsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRunsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRunsResponse instance.
 */
ListRunsResponsePrivate::ListRunsResponsePrivate(
    ListRunsQueueResponse * const q) : ListRunsPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListRunsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRunsResponsePrivate::ListRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRunsResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
