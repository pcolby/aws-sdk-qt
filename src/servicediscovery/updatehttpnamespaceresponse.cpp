/*
    Copyright 2013-2021 Paul Colby

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

#include "updatehttpnamespaceresponse.h"
#include "updatehttpnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::UpdateHttpNamespaceResponse
 * \brief The UpdateHttpNamespaceResponse class provides an interace for ServiceDiscovery UpdateHttpNamespace responses.
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
 * \sa ServiceDiscoveryClient::updateHttpNamespace
 */

/*!
 * Constructs a UpdateHttpNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateHttpNamespaceResponse::UpdateHttpNamespaceResponse(
        const UpdateHttpNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new UpdateHttpNamespaceResponsePrivate(this), parent)
{
    setRequest(new UpdateHttpNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateHttpNamespaceRequest * UpdateHttpNamespaceResponse::request() const
{
    Q_D(const UpdateHttpNamespaceResponse);
    return static_cast<const UpdateHttpNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery UpdateHttpNamespace \a response.
 */
void UpdateHttpNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateHttpNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::UpdateHttpNamespaceResponsePrivate
 * \brief The UpdateHttpNamespaceResponsePrivate class provides private implementation for UpdateHttpNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a UpdateHttpNamespaceResponsePrivate object with public implementation \a q.
 */
UpdateHttpNamespaceResponsePrivate::UpdateHttpNamespaceResponsePrivate(
    UpdateHttpNamespaceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery UpdateHttpNamespace response element from \a xml.
 */
void UpdateHttpNamespaceResponsePrivate::parseUpdateHttpNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHttpNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
