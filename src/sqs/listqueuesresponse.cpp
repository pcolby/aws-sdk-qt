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

#include "listqueuesresponse.h"
#include "listqueuesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  ListQueuesResponse
 *
 * @brief  Handles SQS ListQueues responses.
 *
 * @see    SQSClient::listQueues
 */

/**
 * @brief  Constructs a new ListQueuesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListQueuesResponse::ListQueuesResponse(
        const ListQueuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new ListQueuesResponsePrivate(this), parent)
{
    setRequest(new ListQueuesRequest(request));
    setReply(reply);
}

const ListQueuesRequest * ListQueuesResponse::request() const
{
    Q_D(const ListQueuesResponse);
    return static_cast<const ListQueuesRequest *>(d->request);
}

/**
 * @brief  Parse a SQS ListQueues response.
 *
 * @param  response  Response to parse.
 */
void ListQueuesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListQueuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListQueuesResponsePrivate
 *
 * @brief  Private implementation for ListQueuesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQueuesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListQueuesResponse instance.
 */
ListQueuesResponsePrivate::ListQueuesResponsePrivate(
    ListQueuesResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS ListQueuesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListQueuesResponsePrivate::parseListQueuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQueuesResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
