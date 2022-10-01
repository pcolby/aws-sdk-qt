// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnamespaceresponse.h"
#include "getnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetNamespaceResponse
 * \brief The GetNamespaceResponse class provides an interace for ServiceDiscovery GetNamespace responses.
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
 * \sa ServiceDiscoveryClient::getNamespace
 */

/*!
 * Constructs a GetNamespaceResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const GetNamespaceRequest * GetNamespaceResponse::request() const
{
    Q_D(const GetNamespaceResponse);
    return static_cast<const GetNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery GetNamespace \a response.
 */
void GetNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::GetNamespaceResponsePrivate
 * \brief The GetNamespaceResponsePrivate class provides private implementation for GetNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetNamespaceResponsePrivate object with public implementation \a q.
 */
GetNamespaceResponsePrivate::GetNamespaceResponsePrivate(
    GetNamespaceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery GetNamespace response element from \a xml.
 */
void GetNamespaceResponsePrivate::parseGetNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
