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

#include "listtestsresponse.h"
#include "listtestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  ListTestsResponse
 *
 * @brief  Handles DeviceFarm ListTests responses.
 *
 * @see    DeviceFarmClient::listTests
 */

/**
 * @brief  Constructs a new ListTestsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTestsResponse::ListTestsResponse(
        const ListTestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListTestsResponsePrivate(this), parent)
{
    setRequest(new ListTestsRequest(request));
    setReply(reply);
}

const ListTestsRequest * ListTestsResponse::request() const
{
    Q_D(const ListTestsResponse);
    return static_cast<const ListTestsRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListTests response.
 *
 * @param  response  Response to parse.
 */
void ListTestsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTestsResponsePrivate
 *
 * @brief  Private implementation for ListTestsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTestsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTestsResponse instance.
 */
ListTestsResponsePrivate::ListTestsResponsePrivate(
    ListTestsQueueResponse * const q) : ListTestsPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListTestsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTestsResponsePrivate::ListTestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTestsResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
