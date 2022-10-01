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

#include "resolveappversionresourcesresponse.h"
#include "resolveappversionresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ResolveAppVersionResourcesResponse
 * \brief The ResolveAppVersionResourcesResponse class provides an interace for ResilienceHub ResolveAppVersionResources responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::resolveAppVersionResources
 */

/*!
 * Constructs a ResolveAppVersionResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ResolveAppVersionResourcesResponse::ResolveAppVersionResourcesResponse(
        const ResolveAppVersionResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ResolveAppVersionResourcesResponsePrivate(this), parent)
{
    setRequest(new ResolveAppVersionResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResolveAppVersionResourcesRequest * ResolveAppVersionResourcesResponse::request() const
{
    Q_D(const ResolveAppVersionResourcesResponse);
    return static_cast<const ResolveAppVersionResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ResolveAppVersionResources \a response.
 */
void ResolveAppVersionResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResolveAppVersionResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ResolveAppVersionResourcesResponsePrivate
 * \brief The ResolveAppVersionResourcesResponsePrivate class provides private implementation for ResolveAppVersionResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ResolveAppVersionResourcesResponsePrivate object with public implementation \a q.
 */
ResolveAppVersionResourcesResponsePrivate::ResolveAppVersionResourcesResponsePrivate(
    ResolveAppVersionResourcesResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ResolveAppVersionResources response element from \a xml.
 */
void ResolveAppVersionResourcesResponsePrivate::parseResolveAppVersionResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResolveAppVersionResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
