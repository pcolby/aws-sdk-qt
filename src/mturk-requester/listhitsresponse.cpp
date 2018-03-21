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

#include "listhitsresponse.h"
#include "listhitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  ListHITsResponse
 *
 * @brief  Handles MTurk ListHITs responses.
 *
 * @see    MTurkClient::listHITs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHITsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListHITsResponsePrivate(this), parent)
{
    setRequest(new ListHITsRequest(request));
    setReply(reply);
}

const ListHITsRequest * ListHITsResponse::request() const
{
    Q_D(const ListHITsResponse);
    return static_cast<const ListHITsRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk ListHITs response.
 *
 * @param  response  Response to parse.
 */
void ListHITsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListHITsResponsePrivate
 *
 * @brief  Private implementation for ListHITsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHITsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListHITsResponse instance.
 */
ListHITsResponsePrivate::ListHITsResponsePrivate(
    ListHITsQueueResponse * const q) : ListHITsPrivate(q)
{

}

/**
 * @brief  Parse an MTurk ListHITsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListHITsResponsePrivate::ListHITsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHITsResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
