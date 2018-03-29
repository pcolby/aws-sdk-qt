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

#include "listindicesresponse.h"
#include "listindicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  ListIndicesResponse
 *
 * @brief  Handles IoT ListIndices responses.
 *
 * @see    IoTClient::listIndices
 */

/**
 * @brief  Constructs a new ListIndicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIndicesResponse::ListIndicesResponse(
        const ListIndicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListIndicesResponsePrivate(this), parent)
{
    setRequest(new ListIndicesRequest(request));
    setReply(reply);
}

const ListIndicesRequest * ListIndicesResponse::request() const
{
    Q_D(const ListIndicesResponse);
    return static_cast<const ListIndicesRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListIndices response.
 *
 * @param  response  Response to parse.
 */
void ListIndicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListIndicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListIndicesResponsePrivate
 *
 * @brief  Private implementation for ListIndicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIndicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListIndicesResponse instance.
 */
ListIndicesResponsePrivate::ListIndicesResponsePrivate(
    ListIndicesResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT ListIndicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListIndicesResponsePrivate::parseListIndicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIndicesResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
