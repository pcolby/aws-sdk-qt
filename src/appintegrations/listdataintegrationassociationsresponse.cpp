// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdataintegrationassociationsresponse.h"
#include "listdataintegrationassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::ListDataIntegrationAssociationsResponse
 * \brief The ListDataIntegrationAssociationsResponse class provides an interace for AppIntegrations ListDataIntegrationAssociations responses.
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
 * \sa AppIntegrationsClient::listDataIntegrationAssociations
 */

/*!
 * Constructs a ListDataIntegrationAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataIntegrationAssociationsResponse::ListDataIntegrationAssociationsResponse(
        const ListDataIntegrationAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsResponse(new ListDataIntegrationAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListDataIntegrationAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataIntegrationAssociationsRequest * ListDataIntegrationAssociationsResponse::request() const
{
    Q_D(const ListDataIntegrationAssociationsResponse);
    return static_cast<const ListDataIntegrationAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrations ListDataIntegrationAssociations \a response.
 */
void ListDataIntegrationAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataIntegrationAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrations::ListDataIntegrationAssociationsResponsePrivate
 * \brief The ListDataIntegrationAssociationsResponsePrivate class provides private implementation for ListDataIntegrationAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a ListDataIntegrationAssociationsResponsePrivate object with public implementation \a q.
 */
ListDataIntegrationAssociationsResponsePrivate::ListDataIntegrationAssociationsResponsePrivate(
    ListDataIntegrationAssociationsResponse * const q) : AppIntegrationsResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrations ListDataIntegrationAssociations response element from \a xml.
 */
void ListDataIntegrationAssociationsResponsePrivate::parseListDataIntegrationAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataIntegrationAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrations
} // namespace QtAws
