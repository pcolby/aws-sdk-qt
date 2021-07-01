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

#include "listintegrationsresponse.h"
#include "listintegrationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListIntegrationsResponse
 * \brief The ListIntegrationsResponse class provides an interace for CustomerProfiles ListIntegrations responses.
 *
 * \inmodule QtAwsCustomerProfiles
 *
 *  <fullname>Amazon Connect Customer Profiles</fullname>
 * 
 *  Welcome to the Amazon Connect Customer Profiles API Reference. This guide provides information about the Amazon Connect
 *  Customer Profiles API, including supported operations, data types, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Connect Customer Profiles is a unified customer profile for your contact center that has pre-built connectors
 *  powered by AppFlow that make it easy to combine customer information from third party applications, such as Salesforce
 *  (CRM), ServiceNow (ITSM), and your enterprise resource planning (ERP), with contact history from your Amazon Connect
 *  contact
 * 
 *  center>
 * 
 *  If you're new to Amazon Connect , you might find it helpful to also review the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/what-is-amazon-connect.html">Amazon Connect Administrator
 *
 * \sa CustomerProfilesClient::listIntegrations
 */

/*!
 * Constructs a ListIntegrationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListIntegrationsResponse::ListIntegrationsResponse(
        const ListIntegrationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new ListIntegrationsResponsePrivate(this), parent)
{
    setRequest(new ListIntegrationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIntegrationsRequest * ListIntegrationsResponse::request() const
{
    Q_D(const ListIntegrationsResponse);
    return static_cast<const ListIntegrationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles ListIntegrations \a response.
 */
void ListIntegrationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIntegrationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::ListIntegrationsResponsePrivate
 * \brief The ListIntegrationsResponsePrivate class provides private implementation for ListIntegrationsResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListIntegrationsResponsePrivate object with public implementation \a q.
 */
ListIntegrationsResponsePrivate::ListIntegrationsResponsePrivate(
    ListIntegrationsResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles ListIntegrations response element from \a xml.
 */
void ListIntegrationsResponsePrivate::parseListIntegrationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIntegrationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
