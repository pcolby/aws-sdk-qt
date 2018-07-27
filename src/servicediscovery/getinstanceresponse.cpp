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

#include "getinstanceresponse.h"
#include "getinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetInstanceResponse
 * \brief The GetInstanceResponse class provides an interace for ServiceDiscovery GetInstance responses.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::getInstance
 */

/*!
 * Constructs a GetInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
GetInstanceResponse::GetInstanceResponse(
        const GetInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new GetInstanceResponsePrivate(this), parent)
{
    setRequest(new GetInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInstanceRequest * GetInstanceResponse::request() const
{
    Q_D(const GetInstanceResponse);
    return static_cast<const GetInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery GetInstance \a response.
 */
void GetInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::GetInstanceResponsePrivate
 * \brief The GetInstanceResponsePrivate class provides private implementation for GetInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetInstanceResponsePrivate object with public implementation \a q.
 */
GetInstanceResponsePrivate::GetInstanceResponsePrivate(
    GetInstanceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery GetInstance response element from \a xml.
 */
void GetInstanceResponsePrivate::parseGetInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
