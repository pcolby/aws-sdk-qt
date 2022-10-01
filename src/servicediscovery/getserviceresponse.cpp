// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserviceresponse.h"
#include "getserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetServiceResponse
 * \brief The GetServiceResponse class provides an interace for ServiceDiscovery GetService responses.
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
 * \sa ServiceDiscoveryClient::getService
 */

/*!
 * Constructs a GetServiceResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceResponse::GetServiceResponse(
        const GetServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new GetServiceResponsePrivate(this), parent)
{
    setRequest(new GetServiceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceRequest * GetServiceResponse::request() const
{
    Q_D(const GetServiceResponse);
    return static_cast<const GetServiceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery GetService \a response.
 */
void GetServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::GetServiceResponsePrivate
 * \brief The GetServiceResponsePrivate class provides private implementation for GetServiceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetServiceResponsePrivate object with public implementation \a q.
 */
GetServiceResponsePrivate::GetServiceResponsePrivate(
    GetServiceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery GetService response element from \a xml.
 */
void GetServiceResponsePrivate::parseGetServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
