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

#include "listnamespacesresponse.h"
#include "listnamespacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  ListNamespacesResponse
 *
 * @brief  Handles ServiceDiscovery ListNamespaces responses.
 *
 * @see    ServiceDiscoveryClient::listNamespaces
 */

/**
 * @brief  Constructs a new ListNamespacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListNamespacesResponse::ListNamespacesResponse(
        const ListNamespacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new ListNamespacesResponsePrivate(this), parent)
{
    setRequest(new ListNamespacesRequest(request));
    setReply(reply);
}

const ListNamespacesRequest * ListNamespacesResponse::request() const
{
    Q_D(const ListNamespacesResponse);
    return static_cast<const ListNamespacesRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceDiscovery ListNamespaces response.
 *
 * @param  response  Response to parse.
 */
void ListNamespacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListNamespacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListNamespacesResponsePrivate
 *
 * @brief  Private implementation for ListNamespacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListNamespacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListNamespacesResponse instance.
 */
ListNamespacesResponsePrivate::ListNamespacesResponsePrivate(
    ListNamespacesResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceDiscovery ListNamespacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListNamespacesResponsePrivate::parseListNamespacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNamespacesResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
