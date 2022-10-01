// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Cloud Map</fullname>
 * 
 *  With Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications run
 *  in. When an instance becomes available, you can call the Cloud Map API to register the instance with Cloud Map. For
 *  public or private DNS namespaces, Cloud Map automatically creates DNS records and an optional health check. Clients that
 *  submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up to eight
 *  healthy records.
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
    //Q_D(CreatePublicDnsNamespaceResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
