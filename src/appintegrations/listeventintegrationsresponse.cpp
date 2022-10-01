// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventintegrationsresponse.h"
#include "listeventintegrationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::ListEventIntegrationsResponse
 * \brief The ListEventIntegrationsResponse class provides an interace for AppIntegrations ListEventIntegrations responses.
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
 * \sa AppIntegrationsClient::listEventIntegrations
 */

/*!
 * Constructs a ListEventIntegrationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventIntegrationsResponse::ListEventIntegrationsResponse(
        const ListEventIntegrationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new ListEventIntegrationsResponsePrivate(this), parent)
{
    setRequest(new ListEventIntegrationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventIntegrationsRequest * ListEventIntegrationsResponse::request() const
{
    Q_D(const ListEventIntegrationsResponse);
    return static_cast<const ListEventIntegrationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrations ListEventIntegrations \a response.
 */
void ListEventIntegrationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventIntegrationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::ListEventIntegrationsResponsePrivate
 * \brief The ListEventIntegrationsResponsePrivate class provides private implementation for ListEventIntegrationsResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a ListEventIntegrationsResponsePrivate object with public implementation \a q.
 */
ListEventIntegrationsResponsePrivate::ListEventIntegrationsResponsePrivate(
    ListEventIntegrationsResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations ListEventIntegrations response element from \a xml.
 */
void ListEventIntegrationsResponsePrivate::parseListEventIntegrationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventIntegrationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
