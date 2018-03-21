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

#include "listsubscriptionsresponse.h"
#include "listsubscriptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  ListSubscriptionsResponse
 *
 * @brief  Handles SNS ListSubscriptions responses.
 *
 * @see    SNSClient::listSubscriptions
 */

/**
 * @brief  Constructs a new ListSubscriptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSubscriptionsResponse::ListSubscriptionsResponse(
        const ListSubscriptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new ListSubscriptionsResponsePrivate(this), parent)
{
    setRequest(new ListSubscriptionsRequest(request));
    setReply(reply);
}

const ListSubscriptionsRequest * ListSubscriptionsResponse::request() const
{
    Q_D(const ListSubscriptionsResponse);
    return static_cast<const ListSubscriptionsRequest *>(d->request);
}

/**
 * @brief  Parse a SNS ListSubscriptions response.
 *
 * @param  response  Response to parse.
 */
void ListSubscriptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSubscriptionsResponsePrivate
 *
 * @brief  Private implementation for ListSubscriptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSubscriptionsResponse instance.
 */
ListSubscriptionsResponsePrivate::ListSubscriptionsResponsePrivate(
    ListSubscriptionsQueueResponse * const q) : ListSubscriptionsPrivate(q)
{

}

/**
 * @brief  Parse an SNS ListSubscriptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSubscriptionsResponsePrivate::ListSubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscriptionsResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
