// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateeventintegrationresponse.h"
#include "updateeventintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::UpdateEventIntegrationResponse
 * \brief The UpdateEventIntegrationResponse class provides an interace for AppIntegrations UpdateEventIntegration responses.
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
 * \sa AppIntegrationsClient::updateEventIntegration
 */

/*!
 * Constructs a UpdateEventIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEventIntegrationResponse::UpdateEventIntegrationResponse(
        const UpdateEventIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new UpdateEventIntegrationResponsePrivate(this), parent)
{
    setRequest(new UpdateEventIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEventIntegrationRequest * UpdateEventIntegrationResponse::request() const
{
    Q_D(const UpdateEventIntegrationResponse);
    return static_cast<const UpdateEventIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrations UpdateEventIntegration \a response.
 */
void UpdateEventIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEventIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::UpdateEventIntegrationResponsePrivate
 * \brief The UpdateEventIntegrationResponsePrivate class provides private implementation for UpdateEventIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a UpdateEventIntegrationResponsePrivate object with public implementation \a q.
 */
UpdateEventIntegrationResponsePrivate::UpdateEventIntegrationResponsePrivate(
    UpdateEventIntegrationResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations UpdateEventIntegration response element from \a xml.
 */
void UpdateEventIntegrationResponsePrivate::parseUpdateEventIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEventIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
