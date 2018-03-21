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

#include "listworkerblocksresponse.h"
#include "listworkerblocksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  ListWorkerBlocksResponse
 *
 * @brief  Handles MTurk ListWorkerBlocks responses.
 *
 * @see    MTurkClient::listWorkerBlocks
 */

/**
 * @brief  Constructs a new ListWorkerBlocksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListWorkerBlocksResponse::ListWorkerBlocksResponse(
        const ListWorkerBlocksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListWorkerBlocksResponsePrivate(this), parent)
{
    setRequest(new ListWorkerBlocksRequest(request));
    setReply(reply);
}

const ListWorkerBlocksRequest * ListWorkerBlocksResponse::request() const
{
    Q_D(const ListWorkerBlocksResponse);
    return static_cast<const ListWorkerBlocksRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk ListWorkerBlocks response.
 *
 * @param  response  Response to parse.
 */
void ListWorkerBlocksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListWorkerBlocksResponsePrivate
 *
 * @brief  Private implementation for ListWorkerBlocksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListWorkerBlocksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListWorkerBlocksResponse instance.
 */
ListWorkerBlocksResponsePrivate::ListWorkerBlocksResponsePrivate(
    ListWorkerBlocksQueueResponse * const q) : ListWorkerBlocksPrivate(q)
{

}

/**
 * @brief  Parse an MTurk ListWorkerBlocksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListWorkerBlocksResponsePrivate::ListWorkerBlocksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkerBlocksResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
