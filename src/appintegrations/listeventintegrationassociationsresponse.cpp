// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventintegrationassociationsresponse.h"
#include "listeventintegrationassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::ListEventIntegrationAssociationsResponse
 * \brief The ListEventIntegrationAssociationsResponse class provides an interace for AppIntegrations ListEventIntegrationAssociations responses.
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
 * \sa AppIntegrationsClient::listEventIntegrationAssociations
 */

/*!
 * Constructs a ListEventIntegrationAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventIntegrationAssociationsResponse::ListEventIntegrationAssociationsResponse(
        const ListEventIntegrationAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new ListEventIntegrationAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListEventIntegrationAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventIntegrationAssociationsRequest * ListEventIntegrationAssociationsResponse::request() const
{
    Q_D(const ListEventIntegrationAssociationsResponse);
    return static_cast<const ListEventIntegrationAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrations ListEventIntegrationAssociations \a response.
 */
void ListEventIntegrationAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventIntegrationAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::ListEventIntegrationAssociationsResponsePrivate
 * \brief The ListEventIntegrationAssociationsResponsePrivate class provides private implementation for ListEventIntegrationAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a ListEventIntegrationAssociationsResponsePrivate object with public implementation \a q.
 */
ListEventIntegrationAssociationsResponsePrivate::ListEventIntegrationAssociationsResponsePrivate(
    ListEventIntegrationAssociationsResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations ListEventIntegrationAssociations response element from \a xml.
 */
void ListEventIntegrationAssociationsResponsePrivate::parseListEventIntegrationAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventIntegrationAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
