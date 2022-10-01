// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoperationresponse.h"
#include "getoperationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetOperationResponse
 * \brief The GetOperationResponse class provides an interace for ServiceDiscovery GetOperation responses.
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
 * \sa ServiceDiscoveryClient::getOperation
 */

/*!
 * Constructs a GetOperationResponse object for \a reply to \a request, with parent \a parent.
 */
GetOperationResponse::GetOperationResponse(
        const GetOperationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new GetOperationResponsePrivate(this), parent)
{
    setRequest(new GetOperationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOperationRequest * GetOperationResponse::request() const
{
    Q_D(const GetOperationResponse);
    return static_cast<const GetOperationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery GetOperation \a response.
 */
void GetOperationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOperationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::GetOperationResponsePrivate
 * \brief The GetOperationResponsePrivate class provides private implementation for GetOperationResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetOperationResponsePrivate object with public implementation \a q.
 */
GetOperationResponsePrivate::GetOperationResponsePrivate(
    GetOperationResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery GetOperation response element from \a xml.
 */
void GetOperationResponsePrivate::parseGetOperationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOperationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
