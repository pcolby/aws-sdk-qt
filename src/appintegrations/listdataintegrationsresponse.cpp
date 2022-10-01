/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
