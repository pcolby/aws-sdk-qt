// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdataintegrationsresponse.h"
#include "listdataintegrationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::ListDataIntegrationsResponse
 * \brief The ListDataIntegrationsResponse class provides an interace for AppIntegrations ListDataIntegrations responses.
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
 * \sa AppIntegrationsClient::listDataIntegrations
 */

/*!
 * Constructs a ListDataIntegrationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataIntegrationsResponse::ListDataIntegrationsResponse(
        const ListDataIntegrationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new ListDataIntegrationsResponsePrivate(this), parent)
{
    setRequest(new ListDataIntegrationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataIntegrationsRequest * ListDataIntegrationsResponse::request() const
{
    Q_D(const ListDataIntegrationsResponse);
    return static_cast<const ListDataIntegrationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrations ListDataIntegrations \a response.
 */
void ListDataIntegrationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataIntegrationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::ListDataIntegrationsResponsePrivate
 * \brief The ListDataIntegrationsResponsePrivate class provides private implementation for ListDataIntegrationsResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a ListDataIntegrationsResponsePrivate object with public implementation \a q.
 */
ListDataIntegrationsResponsePrivate::ListDataIntegrationsResponsePrivate(
    ListDataIntegrationsResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations ListDataIntegrations response element from \a xml.
 */
void ListDataIntegrationsResponsePrivate::parseListDataIntegrationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataIntegrationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
