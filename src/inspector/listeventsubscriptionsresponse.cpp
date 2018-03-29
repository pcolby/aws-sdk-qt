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

#include "listeventsubscriptionsresponse.h"
#include "listeventsubscriptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  ListEventSubscriptionsResponse
 *
 * @brief  Handles Inspector ListEventSubscriptions responses.
 *
 * @see    InspectorClient::listEventSubscriptions
 */

/**
 * @brief  Constructs a new ListEventSubscriptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListEventSubscriptionsResponse::ListEventSubscriptionsResponse(
        const ListEventSubscriptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListEventSubscriptionsResponsePrivate(this), parent)
{
    setRequest(new ListEventSubscriptionsRequest(request));
    setReply(reply);
}

const ListEventSubscriptionsRequest * ListEventSubscriptionsResponse::request() const
{
    Q_D(const ListEventSubscriptionsResponse);
    return static_cast<const ListEventSubscriptionsRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector ListEventSubscriptions response.
 *
 * @param  response  Response to parse.
 */
void ListEventSubscriptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListEventSubscriptionsResponsePrivate
 *
 * @brief  Private implementation for ListEventSubscriptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEventSubscriptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListEventSubscriptionsResponse instance.
 */
ListEventSubscriptionsResponsePrivate::ListEventSubscriptionsResponsePrivate(
    ListEventSubscriptionsResponse * const q) : InspectorResponsePrivate(q)
{

}

/**
 * @brief  Parse an Inspector ListEventSubscriptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListEventSubscriptionsResponsePrivate::ListEventSubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventSubscriptionsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
