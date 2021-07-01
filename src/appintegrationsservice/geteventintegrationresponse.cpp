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

#include "geteventintegrationresponse.h"
#include "geteventintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrationsService {

/*!
 * \class QtAws::AppIntegrationsService::GetEventIntegrationResponse
 * \brief The GetEventIntegrationResponse class provides an interace for AppIntegrationsService GetEventIntegration responses.
 *
 * \inmodule QtAwsAppIntegrationsService
 *
 *  The Amazon AppIntegrations APIs are in preview release and are subject to
 * 
 *  change>
 * 
 *  The Amazon AppIntegrations service enables you to configure and reuse connections to external
 * 
 *  applications>
 * 
 *  For information about how you can use external applications with Amazon Connect, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/crm.html">Set up pre-built integrations</a> in the <i>Amazon
 *  Connect Administrator
 *
 * \sa AppIntegrationsServiceClient::getEventIntegration
 */

/*!
 * Constructs a GetEventIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
GetEventIntegrationResponse::GetEventIntegrationResponse(
        const GetEventIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsServiceResponse(new GetEventIntegrationResponsePrivate(this), parent)
{
    setRequest(new GetEventIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEventIntegrationRequest * GetEventIntegrationResponse::request() const
{
    Q_D(const GetEventIntegrationResponse);
    return static_cast<const GetEventIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrationsService GetEventIntegration \a response.
 */
void GetEventIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEventIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrationsService::GetEventIntegrationResponsePrivate
 * \brief The GetEventIntegrationResponsePrivate class provides private implementation for GetEventIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a GetEventIntegrationResponsePrivate object with public implementation \a q.
 */
GetEventIntegrationResponsePrivate::GetEventIntegrationResponsePrivate(
    GetEventIntegrationResponse * const q) : AppIntegrationsServiceResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrationsService GetEventIntegration response element from \a xml.
 */
void GetEventIntegrationResponsePrivate::parseGetEventIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEventIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrationsService
} // namespace QtAws
