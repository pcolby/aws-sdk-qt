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
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::DeleteEventIntegrationResponse
 * \brief The DeleteEventIntegrationResponse class provides an interace for AppIntegrations DeleteEventIntegration responses.
 *
 * \inmodule QtAwsAppIntegrations
 *
 *  The Amazon AppIntegrations service enables you to configure and reuse connections to external
 * 
 *  applications>
 * 
 *  For information about how you can use external applications with Amazon Connect, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/crm.html">Set up pre-built integrations</a> and <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-wisdom.html">Deliver information to agents
 *  using Amazon Connect Wisdom</a> in the <i>Amazon Connect Administrator
 *
 * \sa AppIntegrationsClient::deleteEventIntegration
 */

/*!
 * Constructs a DeleteEventIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEventIntegrationResponse::DeleteEventIntegrationResponse(
        const DeleteEventIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new DeleteEventIntegrationResponsePrivate(this), parent)
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
 * Parses a successful AppIntegrations DeleteEventIntegration \a response.
 */
void DeleteEventIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEventIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::DeleteEventIntegrationResponsePrivate
 * \brief The DeleteEventIntegrationResponsePrivate class provides private implementation for DeleteEventIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a DeleteEventIntegrationResponsePrivate object with public implementation \a q.
 */
DeleteEventIntegrationResponsePrivate::DeleteEventIntegrationResponsePrivate(
    DeleteEventIntegrationResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations DeleteEventIntegration response element from \a xml.
 */
void DeleteEventIntegrationResponsePrivate::parseDeleteEventIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
