/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createprivatednsnamespaceresponse.h"
#include "createprivatednsnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::CreatePrivateDnsNamespaceResponse
 * \brief The CreatePrivateDnsNamespaceResponse class provides an interace for ServiceDiscovery CreatePrivateDnsNamespace responses.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::createPrivateDnsNamespace
 */

/*!
 * Constructs a CreatePrivateDnsNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePrivateDnsNamespaceResponse::CreatePrivateDnsNamespaceResponse(
        const CreatePrivateDnsNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new CreatePrivateDnsNamespaceResponsePrivate(this), parent)
{
    setRequest(new CreatePrivateDnsNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePrivateDnsNamespaceRequest * CreatePrivateDnsNamespaceResponse::request() const
{
    Q_D(const CreatePrivateDnsNamespaceResponse);
    return static_cast<const CreatePrivateDnsNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery CreatePrivateDnsNamespace \a response.
 */
void CreatePrivateDnsNamespaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreatePrivateDnsNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::CreatePrivateDnsNamespaceResponsePrivate
 * \brief The CreatePrivateDnsNamespaceResponsePrivate class provides private implementation for CreatePrivateDnsNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a CreatePrivateDnsNamespaceResponsePrivate object with public implementation \a q.
 */
CreatePrivateDnsNamespaceResponsePrivate::CreatePrivateDnsNamespaceResponsePrivate(
    CreatePrivateDnsNamespaceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery CreatePrivateDnsNamespace response element from \a xml.
 */
void CreatePrivateDnsNamespaceResponsePrivate::parseCreatePrivateDnsNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePrivateDnsNamespaceResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
