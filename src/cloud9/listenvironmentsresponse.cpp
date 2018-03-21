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

#include "listenvironmentsresponse.h"
#include "listenvironmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Cloud9 {

/**
 * @class  ListEnvironmentsResponse
 *
 * @brief  Handles Cloud9 ListEnvironments responses.
 *
 * @see    Cloud9Client::listEnvironments
 */

/**
 * @brief  Constructs a new ListEnvironmentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListEnvironmentsResponse::ListEnvironmentsResponse(
        const ListEnvironmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Cloud9Response(new ListEnvironmentsResponsePrivate(this), parent)
{
    setRequest(new ListEnvironmentsRequest(request));
    setReply(reply);
}

const ListEnvironmentsRequest * ListEnvironmentsResponse::request() const
{
    Q_D(const ListEnvironmentsResponse);
    return static_cast<const ListEnvironmentsRequest *>(d->request);
}

/**
 * @brief  Parse a Cloud9 ListEnvironments response.
 *
 * @param  response  Response to parse.
 */
void ListEnvironmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListEnvironmentsResponsePrivate
 *
 * @brief  Private implementation for ListEnvironmentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEnvironmentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListEnvironmentsResponse instance.
 */
ListEnvironmentsResponsePrivate::ListEnvironmentsResponsePrivate(
    ListEnvironmentsQueueResponse * const q) : ListEnvironmentsPrivate(q)
{

}

/**
 * @brief  Parse an Cloud9 ListEnvironmentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListEnvironmentsResponsePrivate::ListEnvironmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEnvironmentsResponse"));
    /// @todo
}

} // namespace Cloud9
} // namespace AWS
