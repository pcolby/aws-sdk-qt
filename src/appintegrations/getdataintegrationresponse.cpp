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

#include "getdataintegrationresponse.h"
#include "getdataintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::GetDataIntegrationResponse
 * \brief The GetDataIntegrationResponse class provides an interace for AppIntegrations GetDataIntegration responses.
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
 * \sa AppIntegrationsClient::getDataIntegration
 */

/*!
 * Constructs a GetDataIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataIntegrationResponse::GetDataIntegrationResponse(
        const GetDataIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new GetDataIntegrationResponsePrivate(this), parent)
{
    setRequest(new GetDataIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataIntegrationRequest * GetDataIntegrationResponse::request() const
{
    Q_D(const GetDataIntegrationResponse);
    return static_cast<const GetDataIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrations GetDataIntegration \a response.
 */
void GetDataIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::GetDataIntegrationResponsePrivate
 * \brief The GetDataIntegrationResponsePrivate class provides private implementation for GetDataIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a GetDataIntegrationResponsePrivate object with public implementation \a q.
 */
GetDataIntegrationResponsePrivate::GetDataIntegrationResponsePrivate(
    GetDataIntegrationResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations GetDataIntegration response element from \a xml.
 */
void GetDataIntegrationResponsePrivate::parseGetDataIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
