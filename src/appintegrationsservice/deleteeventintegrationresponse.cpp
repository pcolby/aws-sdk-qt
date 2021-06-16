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

#include "deleteeventintegrationresponse.h"
#include "deleteeventintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrationsService {

/*!
 * \class QtAws::AppIntegrationsService::DeleteEventIntegrationResponse
 * \brief The DeleteEventIntegrationResponse class provides an interace for AppIntegrationsService DeleteEventIntegration responses.
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
 * \sa AppIntegrationsServiceClient::deleteEventIntegration
 */

/*!
 * Constructs a DeleteEventIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEventIntegrationResponse::DeleteEventIntegrationResponse(
        const DeleteEventIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsServiceResponse(new DeleteEventIntegrationResponsePrivate(this), parent)
{
    setRequest(new DeleteEventIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEventIntegrationRequest * DeleteEventIntegrationResponse::request() const
{
    Q_D(const DeleteEventIntegrationResponse);
    return static_cast<const DeleteEventIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrationsService DeleteEventIntegration \a response.
 */
void DeleteEventIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEventIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrationsService::DeleteEventIntegrationResponsePrivate
 * \brief The DeleteEventIntegrationResponsePrivate class provides private implementation for DeleteEventIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a DeleteEventIntegrationResponsePrivate object with public implementation \a q.
 */
DeleteEventIntegrationResponsePrivate::DeleteEventIntegrationResponsePrivate(
    DeleteEventIntegrationResponse * const q) : AppIntegrationsServiceResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrationsService DeleteEventIntegration response element from \a xml.
 */
void DeleteEventIntegrationResponsePrivate::parseDeleteEventIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrationsService
} // namespace QtAws
