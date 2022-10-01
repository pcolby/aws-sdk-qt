// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdataintegrationresponse.h"
#include "createdataintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::CreateDataIntegrationResponse
 * \brief The CreateDataIntegrationResponse class provides an interace for AppIntegrations CreateDataIntegration responses.
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
 * \sa AppIntegrationsClient::createDataIntegration
 */

/*!
 * Constructs a CreateDataIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataIntegrationResponse::CreateDataIntegrationResponse(
        const CreateDataIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new CreateDataIntegrationResponsePrivate(this), parent)
{
    setRequest(new CreateDataIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataIntegrationRequest * CreateDataIntegrationResponse::request() const
{
    Q_D(const CreateDataIntegrationResponse);
    return static_cast<const CreateDataIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrations CreateDataIntegration \a response.
 */
void CreateDataIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::CreateDataIntegrationResponsePrivate
 * \brief The CreateDataIntegrationResponsePrivate class provides private implementation for CreateDataIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a CreateDataIntegrationResponsePrivate object with public implementation \a q.
 */
CreateDataIntegrationResponsePrivate::CreateDataIntegrationResponsePrivate(
    CreateDataIntegrationResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations CreateDataIntegration response element from \a xml.
 */
void CreateDataIntegrationResponsePrivate::parseCreateDataIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
