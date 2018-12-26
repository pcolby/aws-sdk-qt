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

#include "updateinstancecustomhealthstatusresponse.h"
#include "updateinstancecustomhealthstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::UpdateInstanceCustomHealthStatusResponse
 * \brief The UpdateInstanceCustomHealthStatusResponse class provides an interace for ServiceDiscovery UpdateInstanceCustomHealthStatus responses.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  AWS Cloud Map lets you configure public DNS, private DNS, or HTTP namespaces that your microservice applications run in.
 *  When an instance of the service becomes available, you can call the AWS Cloud Map API to register the instance with AWS
 *  Cloud Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health
 *  check. Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that
 *  contains up to eight healthy records.
 *
 * \sa ServiceDiscoveryClient::updateInstanceCustomHealthStatus
 */

/*!
 * Constructs a UpdateInstanceCustomHealthStatusResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInstanceCustomHealthStatusResponse::UpdateInstanceCustomHealthStatusResponse(
        const UpdateInstanceCustomHealthStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new UpdateInstanceCustomHealthStatusResponsePrivate(this), parent)
{
    setRequest(new UpdateInstanceCustomHealthStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInstanceCustomHealthStatusRequest * UpdateInstanceCustomHealthStatusResponse::request() const
{
    Q_D(const UpdateInstanceCustomHealthStatusResponse);
    return static_cast<const UpdateInstanceCustomHealthStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery UpdateInstanceCustomHealthStatus \a response.
 */
void UpdateInstanceCustomHealthStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInstanceCustomHealthStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::UpdateInstanceCustomHealthStatusResponsePrivate
 * \brief The UpdateInstanceCustomHealthStatusResponsePrivate class provides private implementation for UpdateInstanceCustomHealthStatusResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a UpdateInstanceCustomHealthStatusResponsePrivate object with public implementation \a q.
 */
UpdateInstanceCustomHealthStatusResponsePrivate::UpdateInstanceCustomHealthStatusResponsePrivate(
    UpdateInstanceCustomHealthStatusResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery UpdateInstanceCustomHealthStatus response element from \a xml.
 */
void UpdateInstanceCustomHealthStatusResponsePrivate::parseUpdateInstanceCustomHealthStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInstanceCustomHealthStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
