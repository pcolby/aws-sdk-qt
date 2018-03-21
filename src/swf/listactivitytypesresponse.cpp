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

#include "listactivitytypesresponse.h"
#include "listactivitytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  ListActivityTypesResponse
 *
 * @brief  Handles SWF ListActivityTypes responses.
 *
 * @see    SWFClient::listActivityTypes
 */

/**
 * @brief  Constructs a new ListActivityTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListActivityTypesResponse::ListActivityTypesResponse(
        const ListActivityTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new ListActivityTypesResponsePrivate(this), parent)
{
    setRequest(new ListActivityTypesRequest(request));
    setReply(reply);
}

const ListActivityTypesRequest * ListActivityTypesResponse::request() const
{
    Q_D(const ListActivityTypesResponse);
    return static_cast<const ListActivityTypesRequest *>(d->request);
}

/**
 * @brief  Parse a SWF ListActivityTypes response.
 *
 * @param  response  Response to parse.
 */
void ListActivityTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListActivityTypesResponsePrivate
 *
 * @brief  Private implementation for ListActivityTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListActivityTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListActivityTypesResponse instance.
 */
ListActivityTypesResponsePrivate::ListActivityTypesResponsePrivate(
    ListActivityTypesQueueResponse * const q) : ListActivityTypesPrivate(q)
{

}

/**
 * @brief  Parse an SWF ListActivityTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListActivityTypesResponsePrivate::ListActivityTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActivityTypesResponse"));
    /// @todo
}

} // namespace SWF
} // namespace AWS
