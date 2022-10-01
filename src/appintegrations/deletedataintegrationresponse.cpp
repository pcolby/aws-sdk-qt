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

#include "deletedataintegrationresponse.h"
#include "deletedataintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::DeleteDataIntegrationResponse
 * \brief The DeleteDataIntegrationResponse class provides an interace for AppIntegrations DeleteDataIntegration responses.
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
 * \sa AppIntegrationsClient::deleteDataIntegration
 */

/*!
 * Constructs a DeleteDataIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataIntegrationResponse::DeleteDataIntegrationResponse(
        const DeleteDataIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new DeleteDataIntegrationResponsePrivate(this), parent)
{
    setRequest(new DeleteDataIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataIntegrationRequest * DeleteDataIntegrationResponse::request() const
{
    Q_D(const DeleteDataIntegrationResponse);
    return static_cast<const DeleteDataIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrations DeleteDataIntegration \a response.
 */
void DeleteDataIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::DeleteDataIntegrationResponsePrivate
 * \brief The DeleteDataIntegrationResponsePrivate class provides private implementation for DeleteDataIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a DeleteDataIntegrationResponsePrivate object with public implementation \a q.
 */
DeleteDataIntegrationResponsePrivate::DeleteDataIntegrationResponsePrivate(
    DeleteDataIntegrationResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations DeleteDataIntegration response element from \a xml.
 */
void DeleteDataIntegrationResponsePrivate::parseDeleteDataIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
