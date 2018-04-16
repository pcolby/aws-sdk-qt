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

#include "listoperationsresponse.h"
#include "listoperationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ListOperationsResponse
 *
 * \brief The ListOperationsResponse class encapsulates ServiceDiscovery ListOperations responses.
 *
 * \ingroup ServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::listOperations
 */

/*!
 * @brief  Constructs a new ListOperationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOperationsResponse::ListOperationsResponse(
        const ListOperationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new ListOperationsResponsePrivate(this), parent)
{
    setRequest(new ListOperationsRequest(request));
    setReply(reply);
}

const ListOperationsRequest * ListOperationsResponse::request() const
{
    Q_D(const ListOperationsResponse);
    return static_cast<const ListOperationsRequest *>(d->request);
}

/*!
 * @brief  Parse a ServiceDiscovery ListOperations response.
 *
 * @param  response  Response to parse.
 */
void ListOperationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListOperationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListOperationsResponsePrivate
 *
 * \brief Private implementation for ListOperationsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListOperationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOperationsResponse instance.
 */
ListOperationsResponsePrivate::ListOperationsResponsePrivate(
    ListOperationsResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServiceDiscovery ListOperationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOperationsResponsePrivate::parseListOperationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOperationsResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
