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

#include "listfindingsresponse.h"
#include "listfindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  ListFindingsResponse
 *
 * @brief  Handles Inspector ListFindings responses.
 *
 * @see    InspectorClient::listFindings
 */

/**
 * @brief  Constructs a new ListFindingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFindingsResponse::ListFindingsResponse(
        const ListFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListFindingsResponsePrivate(this), parent)
{
    setRequest(new ListFindingsRequest(request));
    setReply(reply);
}

const ListFindingsRequest * ListFindingsResponse::request() const
{
    Q_D(const ListFindingsResponse);
    return static_cast<const ListFindingsRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector ListFindings response.
 *
 * @param  response  Response to parse.
 */
void ListFindingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListFindingsResponsePrivate
 *
 * @brief  Private implementation for ListFindingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFindingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFindingsResponse instance.
 */
ListFindingsResponsePrivate::ListFindingsResponsePrivate(
    ListFindingsQueueResponse * const q) : ListFindingsPrivate(q)
{

}

/**
 * @brief  Parse an Inspector ListFindingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFindingsResponsePrivate::ListFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFindingsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace AWS
