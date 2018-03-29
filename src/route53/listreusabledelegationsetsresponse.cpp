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

#include "listreusabledelegationsetsresponse.h"
#include "listreusabledelegationsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  ListReusableDelegationSetsResponse
 *
 * @brief  Handles Route53 ListReusableDelegationSets responses.
 *
 * @see    Route53Client::listReusableDelegationSets
 */

/**
 * @brief  Constructs a new ListReusableDelegationSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListReusableDelegationSetsResponse::ListReusableDelegationSetsResponse(
        const ListReusableDelegationSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListReusableDelegationSetsResponsePrivate(this), parent)
{
    setRequest(new ListReusableDelegationSetsRequest(request));
    setReply(reply);
}

const ListReusableDelegationSetsRequest * ListReusableDelegationSetsResponse::request() const
{
    Q_D(const ListReusableDelegationSetsResponse);
    return static_cast<const ListReusableDelegationSetsRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListReusableDelegationSets response.
 *
 * @param  response  Response to parse.
 */
void ListReusableDelegationSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListReusableDelegationSetsResponsePrivate
 *
 * @brief  Private implementation for ListReusableDelegationSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListReusableDelegationSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListReusableDelegationSetsResponse instance.
 */
ListReusableDelegationSetsResponsePrivate::ListReusableDelegationSetsResponsePrivate(
    ListReusableDelegationSetsQueueResponse * const q) : ListReusableDelegationSetsPrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListReusableDelegationSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListReusableDelegationSetsResponsePrivate::ListReusableDelegationSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReusableDelegationSetsResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
