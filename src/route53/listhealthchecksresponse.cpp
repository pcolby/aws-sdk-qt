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

#include "listhealthchecksresponse.h"
#include "listhealthchecksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  ListHealthChecksResponse
 *
 * @brief  Handles Route53 ListHealthChecks responses.
 *
 * @see    Route53Client::listHealthChecks
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHealthChecksResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListHealthChecksResponsePrivate(this), parent)
{
    setRequest(new ListHealthChecksRequest(request));
    setReply(reply);
}

const ListHealthChecksRequest * ListHealthChecksResponse::request() const
{
    Q_D(const ListHealthChecksResponse);
    return static_cast<const ListHealthChecksRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListHealthChecks response.
 *
 * @param  response  Response to parse.
 */
void ListHealthChecksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListHealthChecksResponsePrivate
 *
 * @brief  Private implementation for ListHealthChecksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHealthChecksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListHealthChecksResponse instance.
 */
ListHealthChecksResponsePrivate::ListHealthChecksResponsePrivate(
    ListHealthChecksQueueResponse * const q) : ListHealthChecksPrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListHealthChecksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListHealthChecksResponsePrivate::ListHealthChecksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHealthChecksResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
