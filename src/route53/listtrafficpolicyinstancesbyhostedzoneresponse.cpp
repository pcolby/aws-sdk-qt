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

#include "listtrafficpolicyinstancesbyhostedzoneresponse.h"
#include "listtrafficpolicyinstancesbyhostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  ListTrafficPolicyInstancesByHostedZoneResponse
 *
 * @brief  Handles Route53 ListTrafficPolicyInstancesByHostedZone responses.
 *
 * @see    Route53Client::listTrafficPolicyInstancesByHostedZone
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTrafficPolicyInstancesByHostedZoneResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPolicyInstancesByHostedZoneResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPolicyInstancesByHostedZoneRequest(request));
    setReply(reply);
}

const ListTrafficPolicyInstancesByHostedZoneRequest * ListTrafficPolicyInstancesByHostedZoneResponse::request() const
{
    Q_D(const ListTrafficPolicyInstancesByHostedZoneResponse);
    return static_cast<const ListTrafficPolicyInstancesByHostedZoneRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListTrafficPolicyInstancesByHostedZone response.
 *
 * @param  response  Response to parse.
 */
void ListTrafficPolicyInstancesByHostedZoneResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTrafficPolicyInstancesByHostedZoneResponsePrivate
 *
 * @brief  Private implementation for ListTrafficPolicyInstancesByHostedZoneResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyInstancesByHostedZoneResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTrafficPolicyInstancesByHostedZoneResponse instance.
 */
ListTrafficPolicyInstancesByHostedZoneResponsePrivate::ListTrafficPolicyInstancesByHostedZoneResponsePrivate(
    ListTrafficPolicyInstancesByHostedZoneQueueResponse * const q) : ListTrafficPolicyInstancesByHostedZonePrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListTrafficPolicyInstancesByHostedZoneResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTrafficPolicyInstancesByHostedZoneResponsePrivate::ListTrafficPolicyInstancesByHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPolicyInstancesByHostedZoneResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
