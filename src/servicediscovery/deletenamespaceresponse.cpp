// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenamespaceresponse.h"
#include "deletenamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::DeleteNamespaceResponse
 * \brief The DeleteNamespaceResponse class provides an interace for ServiceDiscovery DeleteNamespace responses.
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
 * \sa ServiceDiscoveryClient::deleteNamespace
 */

/*!
 * Constructs a DeleteNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNamespaceResponse::DeleteNamespaceResponse(
        const DeleteNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new DeleteNamespaceResponsePrivate(this), parent)
{
    setRequest(new DeleteNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNamespaceRequest * DeleteNamespaceResponse::request() const
{
    Q_D(const DeleteNamespaceResponse);
    return static_cast<const DeleteNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery DeleteNamespace \a response.
 */
void DeleteNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::DeleteNamespaceResponsePrivate
 * \brief The DeleteNamespaceResponsePrivate class provides private implementation for DeleteNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a DeleteNamespaceResponsePrivate object with public implementation \a q.
 */
DeleteNamespaceResponsePrivate::DeleteNamespaceResponsePrivate(
    DeleteNamespaceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery DeleteNamespace response element from \a xml.
 */
void DeleteNamespaceResponsePrivate::parseDeleteNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
