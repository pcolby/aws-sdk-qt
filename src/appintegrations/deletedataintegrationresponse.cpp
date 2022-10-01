// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
