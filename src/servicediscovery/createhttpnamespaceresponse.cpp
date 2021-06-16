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
 *  AWS Cloud Map lets you configure public DNS, private DNS, or HTTP namespaces that your microservice applications run in.
 *  When an instance of the service becomes available, you can call the AWS Cloud Map API to register the instance with AWS
 *  Cloud Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health
 *  check. Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that
 *  contains up to eight healthy records.
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
