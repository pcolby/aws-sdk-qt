// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "geteventintegrationresponse.h"
#include "geteventintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::GetEventIntegrationResponse
 * \brief The GetEventIntegrationResponse class provides an interace for AppIntegrations GetEventIntegration responses.
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
 * \sa AppIntegrationsClient::getEventIntegration
 */

/*!
 * Constructs a GetEventIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
GetEventIntegrationResponse::GetEventIntegrationResponse(
        const GetEventIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new GetEventIntegrationResponsePrivate(this), parent)
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
 * Parses a successful AppIntegrations GetEventIntegration \a response.
 */
void GetEventIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEventIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::GetEventIntegrationResponsePrivate
 * \brief The GetEventIntegrationResponsePrivate class provides private implementation for GetEventIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a GetEventIntegrationResponsePrivate object with public implementation \a q.
 */
GetEventIntegrationResponsePrivate::GetEventIntegrationResponsePrivate(
    GetEventIntegrationResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations GetEventIntegration response element from \a xml.
 */
void GetEventIntegrationResponsePrivate::parseGetEventIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEventIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
