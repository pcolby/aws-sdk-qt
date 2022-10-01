// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createeventintegrationresponse.h"
#include "createeventintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::CreateEventIntegrationResponse
 * \brief The CreateEventIntegrationResponse class provides an interace for AppIntegrations CreateEventIntegration responses.
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
 * \sa AppIntegrationsClient::createEventIntegration
 */

/*!
 * Constructs a CreateEventIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEventIntegrationResponse::CreateEventIntegrationResponse(
        const CreateEventIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new CreateEventIntegrationResponsePrivate(this), parent)
{
    setRequest(new CreateEventIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEventIntegrationRequest * CreateEventIntegrationResponse::request() const
{
    Q_D(const CreateEventIntegrationResponse);
    return static_cast<const CreateEventIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrations CreateEventIntegration \a response.
 */
void CreateEventIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEventIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::CreateEventIntegrationResponsePrivate
 * \brief The CreateEventIntegrationResponsePrivate class provides private implementation for CreateEventIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a CreateEventIntegrationResponsePrivate object with public implementation \a q.
 */
CreateEventIntegrationResponsePrivate::CreateEventIntegrationResponsePrivate(
    CreateEventIntegrationResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations CreateEventIntegration response element from \a xml.
 */
void CreateEventIntegrationResponsePrivate::parseCreateEventIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEventIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
