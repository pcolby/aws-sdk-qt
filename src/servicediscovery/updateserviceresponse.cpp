// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateserviceresponse.h"
#include "updateserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::UpdateServiceResponse
 * \brief The UpdateServiceResponse class provides an interace for ServiceDiscovery UpdateService responses.
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
 * \sa ServiceDiscoveryClient::updateService
 */

/*!
 * Constructs a UpdateServiceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServiceResponse::UpdateServiceResponse(
        const UpdateServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new UpdateServiceResponsePrivate(this), parent)
{
    setRequest(new UpdateServiceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServiceRequest * UpdateServiceResponse::request() const
{
    Q_D(const UpdateServiceResponse);
    return static_cast<const UpdateServiceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery UpdateService \a response.
 */
void UpdateServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::UpdateServiceResponsePrivate
 * \brief The UpdateServiceResponsePrivate class provides private implementation for UpdateServiceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a UpdateServiceResponsePrivate object with public implementation \a q.
 */
UpdateServiceResponsePrivate::UpdateServiceResponsePrivate(
    UpdateServiceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery UpdateService response element from \a xml.
 */
void UpdateServiceResponsePrivate::parseUpdateServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
