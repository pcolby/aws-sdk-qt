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

#include "listtrafficpoliciesresponse.h"
#include "listtrafficpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  ListTrafficPoliciesResponse
 *
 * @brief  Handles Route53 ListTrafficPolicies responses.
 *
 * @see    Route53Client::listTrafficPolicies
 */

/**
 * @brief  Constructs a new ListTrafficPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTrafficPoliciesResponse::ListTrafficPoliciesResponse(
        const ListTrafficPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPoliciesRequest(request));
    setReply(reply);
}

const ListTrafficPoliciesRequest * ListTrafficPoliciesResponse::request() const
{
    Q_D(const ListTrafficPoliciesResponse);
    return static_cast<const ListTrafficPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListTrafficPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListTrafficPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTrafficPoliciesResponsePrivate
 *
 * @brief  Private implementation for ListTrafficPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTrafficPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTrafficPoliciesResponse instance.
 */
ListTrafficPoliciesResponsePrivate::ListTrafficPoliciesResponsePrivate(
    ListTrafficPoliciesQueueResponse * const q) : ListTrafficPoliciesPrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListTrafficPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTrafficPoliciesResponsePrivate::ListTrafficPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPoliciesResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
