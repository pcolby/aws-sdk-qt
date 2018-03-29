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

#include "listsuitesresponse.h"
#include "listsuitesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  ListSuitesResponse
 *
 * @brief  Handles DeviceFarm ListSuites responses.
 *
 * @see    DeviceFarmClient::listSuites
 */

/**
 * @brief  Constructs a new ListSuitesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSuitesResponse::ListSuitesResponse(
        const ListSuitesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListSuitesResponsePrivate(this), parent)
{
    setRequest(new ListSuitesRequest(request));
    setReply(reply);
}

const ListSuitesRequest * ListSuitesResponse::request() const
{
    Q_D(const ListSuitesResponse);
    return static_cast<const ListSuitesRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListSuites response.
 *
 * @param  response  Response to parse.
 */
void ListSuitesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListSuitesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSuitesResponsePrivate
 *
 * @brief  Private implementation for ListSuitesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSuitesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSuitesResponse instance.
 */
ListSuitesResponsePrivate::ListSuitesResponsePrivate(
    ListSuitesResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListSuitesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSuitesResponsePrivate::ListSuitesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSuitesResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
