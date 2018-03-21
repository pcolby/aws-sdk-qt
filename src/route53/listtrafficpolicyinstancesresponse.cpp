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

#include "listtrafficpolicyinstancesresponse.h"
#include "listtrafficpolicyinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  ListTrafficPolicyInstancesResponse
 *
 * @brief  Handles Route53 ListTrafficPolicyInstances responses.
 *
 * @see    Route53Client::listTrafficPolicyInstances
 */

/**
 * @brief  Constructs a new ListTrafficPolicyInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTrafficPolicyInstancesResponse::ListTrafficPolicyInstancesResponse(
        const ListTrafficPolicyInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPolicyInstancesResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPolicyInstancesRequest(request));
    setReply(reply);
}

const ListTrafficPolicyInstancesRequest * ListTrafficPolicyInstancesResponse::request() const
{
    Q_D(const ListTrafficPolicyInstancesResponse);
    return static_cast<const ListTrafficPolicyInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListTrafficPolicyInstances response.
 *
 * @param  response  Response to parse.
 */
void ListTrafficPolicyInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTrafficPolicyInstancesResponsePrivate
 *
 * @brief  Private implementation for ListTrafficPolicyInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTrafficPolicyInstancesResponse instance.
 */
ListTrafficPolicyInstancesResponsePrivate::ListTrafficPolicyInstancesResponsePrivate(
    ListTrafficPolicyInstancesQueueResponse * const q) : ListTrafficPolicyInstancesPrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListTrafficPolicyInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTrafficPolicyInstancesResponsePrivate::ListTrafficPolicyInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPolicyInstancesResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
