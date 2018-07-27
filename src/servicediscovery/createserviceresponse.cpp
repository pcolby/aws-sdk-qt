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

#include "createserviceresponse.h"
#include "createserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::CreateServiceResponse
 * \brief The CreateServiceResponse class provides an interace for ServiceDiscovery CreateService responses.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::createService
 */

/*!
 * Constructs a CreateServiceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateServiceResponse::CreateServiceResponse(
        const CreateServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new CreateServiceResponsePrivate(this), parent)
{
    setRequest(new CreateServiceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateServiceRequest * CreateServiceResponse::request() const
{
    Q_D(const CreateServiceResponse);
    return static_cast<const CreateServiceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery CreateService \a response.
 */
void CreateServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::CreateServiceResponsePrivate
 * \brief The CreateServiceResponsePrivate class provides private implementation for CreateServiceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a CreateServiceResponsePrivate object with public implementation \a q.
 */
CreateServiceResponsePrivate::CreateServiceResponsePrivate(
    CreateServiceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery CreateService response element from \a xml.
 */
void CreateServiceResponsePrivate::parseCreateServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
