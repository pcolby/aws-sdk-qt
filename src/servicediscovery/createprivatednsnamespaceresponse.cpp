// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Cloud Map</fullname>
 * 
 *  With Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications run
 *  in. When an instance becomes available, you can call the Cloud Map API to register the instance with Cloud Map. For
 *  public or private DNS namespaces, Cloud Map automatically creates DNS records and an optional health check. Clients that
 *  submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up to eight
 *  healthy records.
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
    //Q_D(CreatePrivateDnsNamespaceResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
