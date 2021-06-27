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

#include "createeventintegrationresponse.h"
#include "createeventintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrationsService {

/*!
 * \class QtAws::AppIntegrationsService::CreateEventIntegrationResponse
 * \brief The CreateEventIntegrationResponse class provides an interace for AppIntegrationsService CreateEventIntegration responses.
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
 * \sa AppIntegrationsServiceClient::createEventIntegration
 */

/*!
 * Constructs a CreateEventIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEventIntegrationResponse::CreateEventIntegrationResponse(
        const CreateEventIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsServiceResponse(new CreateEventIntegrationResponsePrivate(this), parent)
{
    setRequest(new CreateEventIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEventIntegrationRequest * CreateEventIntegrationResponse::request() const
{
    return static_cast<const CreateEventIntegrationRequest *>(AppIntegrationsServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful AppIntegrationsService CreateEventIntegration \a response.
 */
void CreateEventIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEventIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrationsService::CreateEventIntegrationResponsePrivate
 * \brief The CreateEventIntegrationResponsePrivate class provides private implementation for CreateEventIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a CreateEventIntegrationResponsePrivate object with public implementation \a q.
 */
CreateEventIntegrationResponsePrivate::CreateEventIntegrationResponsePrivate(
    CreateEventIntegrationResponse * const q) : AppIntegrationsServiceResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrationsService CreateEventIntegration response element from \a xml.
 */
void CreateEventIntegrationResponsePrivate::parseCreateEventIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEventIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrationsService
} // namespace QtAws
