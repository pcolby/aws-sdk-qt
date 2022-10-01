// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Cloud Map</fullname>
 * 
 *  With Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications run
 *  in. When an instance becomes available, you can call the Cloud Map API to register the instance with Cloud Map. For
 *  public or private DNS namespaces, Cloud Map automatically creates DNS records and an optional health check. Clients that
 *  submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up to eight
 *  healthy records.
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
