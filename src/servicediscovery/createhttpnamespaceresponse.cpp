// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhttpnamespaceresponse.h"
#include "createhttpnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::CreateHttpNamespaceResponse
 * \brief The CreateHttpNamespaceResponse class provides an interace for ServiceDiscovery CreateHttpNamespace responses.
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
 * \sa ServiceDiscoveryClient::createHttpNamespace
 */

/*!
 * Constructs a CreateHttpNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHttpNamespaceResponse::CreateHttpNamespaceResponse(
        const CreateHttpNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new CreateHttpNamespaceResponsePrivate(this), parent)
{
    setRequest(new CreateHttpNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHttpNamespaceRequest * CreateHttpNamespaceResponse::request() const
{
    Q_D(const CreateHttpNamespaceResponse);
    return static_cast<const CreateHttpNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery CreateHttpNamespace \a response.
 */
void CreateHttpNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHttpNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::CreateHttpNamespaceResponsePrivate
 * \brief The CreateHttpNamespaceResponsePrivate class provides private implementation for CreateHttpNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a CreateHttpNamespaceResponsePrivate object with public implementation \a q.
 */
CreateHttpNamespaceResponsePrivate::CreateHttpNamespaceResponsePrivate(
    CreateHttpNamespaceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery CreateHttpNamespace response element from \a xml.
 */
void CreateHttpNamespaceResponsePrivate::parseCreateHttpNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHttpNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
