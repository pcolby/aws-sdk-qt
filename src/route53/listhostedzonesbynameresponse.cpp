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

#include "listhostedzonesbynameresponse.h"
#include "listhostedzonesbynameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  ListHostedZonesByNameResponse
 *
 * @brief  Handles Route53 ListHostedZonesByName responses.
 *
 * @see    Route53Client::listHostedZonesByName
 */

/**
 * @brief  Constructs a new ListHostedZonesByNameResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHostedZonesByNameResponse::ListHostedZonesByNameResponse(
        const ListHostedZonesByNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListHostedZonesByNameResponsePrivate(this), parent)
{
    setRequest(new ListHostedZonesByNameRequest(request));
    setReply(reply);
}

const ListHostedZonesByNameRequest * ListHostedZonesByNameResponse::request() const
{
    Q_D(const ListHostedZonesByNameResponse);
    return static_cast<const ListHostedZonesByNameRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListHostedZonesByName response.
 *
 * @param  response  Response to parse.
 */
void ListHostedZonesByNameResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListHostedZonesByNameResponsePrivate
 *
 * @brief  Private implementation for ListHostedZonesByNameResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHostedZonesByNameResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListHostedZonesByNameResponse instance.
 */
ListHostedZonesByNameResponsePrivate::ListHostedZonesByNameResponsePrivate(
    ListHostedZonesByNameQueueResponse * const q) : ListHostedZonesByNamePrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListHostedZonesByNameResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListHostedZonesByNameResponsePrivate::ListHostedZonesByNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHostedZonesByNameResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
