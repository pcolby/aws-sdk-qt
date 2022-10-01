// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepublicdnsnamespaceresponse.h"
#include "updatepublicdnsnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::UpdatePublicDnsNamespaceResponse
 * \brief The UpdatePublicDnsNamespaceResponse class provides an interace for ServiceDiscovery UpdatePublicDnsNamespace responses.
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
 * \sa ServiceDiscoveryClient::updatePublicDnsNamespace
 */

/*!
 * Constructs a UpdatePublicDnsNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePublicDnsNamespaceResponse::UpdatePublicDnsNamespaceResponse(
        const UpdatePublicDnsNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new UpdatePublicDnsNamespaceResponsePrivate(this), parent)
{
    setRequest(new UpdatePublicDnsNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePublicDnsNamespaceRequest * UpdatePublicDnsNamespaceResponse::request() const
{
    Q_D(const UpdatePublicDnsNamespaceResponse);
    return static_cast<const UpdatePublicDnsNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery UpdatePublicDnsNamespace \a response.
 */
void UpdatePublicDnsNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePublicDnsNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::UpdatePublicDnsNamespaceResponsePrivate
 * \brief The UpdatePublicDnsNamespaceResponsePrivate class provides private implementation for UpdatePublicDnsNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a UpdatePublicDnsNamespaceResponsePrivate object with public implementation \a q.
 */
UpdatePublicDnsNamespaceResponsePrivate::UpdatePublicDnsNamespaceResponsePrivate(
    UpdatePublicDnsNamespaceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery UpdatePublicDnsNamespace response element from \a xml.
 */
void UpdatePublicDnsNamespaceResponsePrivate::parseUpdatePublicDnsNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePublicDnsNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
