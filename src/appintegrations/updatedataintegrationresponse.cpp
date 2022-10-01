// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedataintegrationresponse.h"
#include "updatedataintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::UpdateDataIntegrationResponse
 * \brief The UpdateDataIntegrationResponse class provides an interace for AppIntegrations UpdateDataIntegration responses.
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
 * \sa AppIntegrationsClient::updateDataIntegration
 */

/*!
 * Constructs a UpdateDataIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDataIntegrationResponse::UpdateDataIntegrationResponse(
        const UpdateDataIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new UpdateDataIntegrationResponsePrivate(this), parent)
{
    setRequest(new UpdateDataIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDataIntegrationRequest * UpdateDataIntegrationResponse::request() const
{
    Q_D(const UpdateDataIntegrationResponse);
    return static_cast<const UpdateDataIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrations UpdateDataIntegration \a response.
 */
void UpdateDataIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDataIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::UpdateDataIntegrationResponsePrivate
 * \brief The UpdateDataIntegrationResponsePrivate class provides private implementation for UpdateDataIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a UpdateDataIntegrationResponsePrivate object with public implementation \a q.
 */
UpdateDataIntegrationResponsePrivate::UpdateDataIntegrationResponsePrivate(
    UpdateDataIntegrationResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations UpdateDataIntegration response element from \a xml.
 */
void UpdateDataIntegrationResponsePrivate::parseUpdateDataIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
