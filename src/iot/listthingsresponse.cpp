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

#include "listthingsresponse.h"
#include "listthingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  ListThingsResponse
 *
 * @brief  Handles IoT ListThings responses.
 *
 * @see    IoTClient::listThings
 */

/**
 * @brief  Constructs a new ListThingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingsResponse::ListThingsResponse(
        const ListThingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListThingsResponse(new ListThingsResponsePrivate(this), parent)
{
    setRequest(new ListThingsRequest(request));
    setReply(reply);
}

const ListThingsRequest * ListThingsResponse::request() const
{
    Q_D(const ListThingsResponse);
    return static_cast<const ListThingsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListThings response.
 *
 * @param  response  Response to parse.
 */
void ListThingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListThingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListThingsResponsePrivate
 *
 * @brief  Private implementation for ListThingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListThingsResponse instance.
 */
ListThingsResponsePrivate::ListThingsResponsePrivate(
    ListThingsResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT ListThingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListThingsResponsePrivate::parseListThingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
