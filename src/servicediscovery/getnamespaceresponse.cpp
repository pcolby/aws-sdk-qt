/*
    Copyright 2013-2020 Paul Colby

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
 *  AWS Cloud Map lets you configure public DNS, private DNS, or HTTP namespaces that your microservice applications run in.
 *  When an instance of the service becomes available, you can call the AWS Cloud Map API to register the instance with AWS
 *  Cloud Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health
 *  check. Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that
 *  contains up to eight healthy records.
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
