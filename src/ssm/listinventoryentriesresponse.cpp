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

#include "listinventoryentriesresponse.h"
#include "listinventoryentriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  ListInventoryEntriesResponse
 *
 * @brief  Handles SSM ListInventoryEntries responses.
 *
 * @see    SSMClient::listInventoryEntries
 */

/**
 * @brief  Constructs a new ListInventoryEntriesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInventoryEntriesResponse::ListInventoryEntriesResponse(
        const ListInventoryEntriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new ListInventoryEntriesResponsePrivate(this), parent)
{
    setRequest(new ListInventoryEntriesRequest(request));
    setReply(reply);
}

const ListInventoryEntriesRequest * ListInventoryEntriesResponse::request() const
{
    Q_D(const ListInventoryEntriesResponse);
    return static_cast<const ListInventoryEntriesRequest *>(d->request);
}

/**
 * @brief  Parse a SSM ListInventoryEntries response.
 *
 * @param  response  Response to parse.
 */
void ListInventoryEntriesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListInventoryEntriesResponsePrivate
 *
 * @brief  Private implementation for ListInventoryEntriesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInventoryEntriesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInventoryEntriesResponse instance.
 */
ListInventoryEntriesResponsePrivate::ListInventoryEntriesResponsePrivate(
    ListInventoryEntriesQueueResponse * const q) : ListInventoryEntriesPrivate(q)
{

}

/**
 * @brief  Parse an SSM ListInventoryEntriesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInventoryEntriesResponsePrivate::ListInventoryEntriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInventoryEntriesResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
