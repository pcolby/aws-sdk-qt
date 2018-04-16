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

#include "getnamespaceresponse.h"
#include "getnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetNamespaceResponse
 *
 * \brief The GetNamespaceResponse class encapsulates ServiceDiscovery GetNamespace responses.
 *
 * \ingroup ServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::getNamespace
 */

/*!
 * @brief  Constructs a new GetNamespaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetNamespaceResponse::GetNamespaceResponse(
        const GetNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new GetNamespaceResponsePrivate(this), parent)
{
    setRequest(new GetNamespaceRequest(request));
    setReply(reply);
}

const GetNamespaceRequest * GetNamespaceResponse::request() const
{
    Q_D(const GetNamespaceResponse);
    return static_cast<const GetNamespaceRequest *>(d->request);
}

/*!
 * @brief  Parse a ServiceDiscovery GetNamespace response.
 *
 * @param  response  Response to parse.
 */
void GetNamespaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetNamespaceResponsePrivate
 *
 * \brief Private implementation for GetNamespaceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetNamespaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetNamespaceResponse instance.
 */
GetNamespaceResponsePrivate::GetNamespaceResponsePrivate(
    GetNamespaceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServiceDiscovery GetNamespaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetNamespaceResponsePrivate::parseGetNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNamespaceResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
