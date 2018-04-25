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

#include "createpublicdnsnamespaceresponse.h"
#include "createpublicdnsnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::CreatePublicDnsNamespaceResponse
 * \brief The CreatePublicDnsNamespaceResponse class provides an interace for ServiceDiscovery CreatePublicDnsNamespace responses.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::createPublicDnsNamespace
 */

/*!
 * Constructs a CreatePublicDnsNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePublicDnsNamespaceResponse::CreatePublicDnsNamespaceResponse(
        const CreatePublicDnsNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new CreatePublicDnsNamespaceResponsePrivate(this), parent)
{
    setRequest(new CreatePublicDnsNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePublicDnsNamespaceRequest * CreatePublicDnsNamespaceResponse::request() const
{
    Q_D(const CreatePublicDnsNamespaceResponse);
    return static_cast<const CreatePublicDnsNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery CreatePublicDnsNamespace \a response.
 */
void CreatePublicDnsNamespaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreatePublicDnsNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::CreatePublicDnsNamespaceResponsePrivate
 * \brief The CreatePublicDnsNamespaceResponsePrivate class provides private implementation for CreatePublicDnsNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a CreatePublicDnsNamespaceResponsePrivate object with public implementation \a q.
 */
CreatePublicDnsNamespaceResponsePrivate::CreatePublicDnsNamespaceResponsePrivate(
    CreatePublicDnsNamespaceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery CreatePublicDnsNamespace response element from \a xml.
 */
void CreatePublicDnsNamespaceResponsePrivate::parseCreatePublicDnsNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePublicDnsNamespaceResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
