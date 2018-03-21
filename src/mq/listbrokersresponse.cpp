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

#include "listbrokersresponse.h"
#include "listbrokersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MQ {

/**
 * @class  ListBrokersResponse
 *
 * @brief  Handles MQ ListBrokers responses.
 *
 * @see    MQClient::listBrokers
 */

/**
 * @brief  Constructs a new ListBrokersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBrokersResponse::ListBrokersResponse(
        const ListBrokersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new ListBrokersResponsePrivate(this), parent)
{
    setRequest(new ListBrokersRequest(request));
    setReply(reply);
}

const ListBrokersRequest * ListBrokersResponse::request() const
{
    Q_D(const ListBrokersResponse);
    return static_cast<const ListBrokersRequest *>(d->request);
}

/**
 * @brief  Parse a MQ ListBrokers response.
 *
 * @param  response  Response to parse.
 */
void ListBrokersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBrokersResponsePrivate
 *
 * @brief  Private implementation for ListBrokersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBrokersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBrokersResponse instance.
 */
ListBrokersResponsePrivate::ListBrokersResponsePrivate(
    ListBrokersQueueResponse * const q) : ListBrokersPrivate(q)
{

}

/**
 * @brief  Parse an MQ ListBrokersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBrokersResponsePrivate::ListBrokersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBrokersResponse"));
    /// @todo
}

} // namespace MQ
} // namespace AWS
