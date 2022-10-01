// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccountintegrationsresponse.h"
#include "listaccountintegrationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListAccountIntegrationsResponse
 * \brief The ListAccountIntegrationsResponse class provides an interace for CustomerProfiles ListAccountIntegrations responses.
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
 * \sa CustomerProfilesClient::listAccountIntegrations
 */

/*!
 * Constructs a ListAccountIntegrationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccountIntegrationsResponse::ListAccountIntegrationsResponse(
        const ListAccountIntegrationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new ListAccountIntegrationsResponsePrivate(this), parent)
{
    setRequest(new ListAccountIntegrationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccountIntegrationsRequest * ListAccountIntegrationsResponse::request() const
{
    Q_D(const ListAccountIntegrationsResponse);
    return static_cast<const ListAccountIntegrationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles ListAccountIntegrations \a response.
 */
void ListAccountIntegrationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccountIntegrationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::ListAccountIntegrationsResponsePrivate
 * \brief The ListAccountIntegrationsResponsePrivate class provides private implementation for ListAccountIntegrationsResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListAccountIntegrationsResponsePrivate object with public implementation \a q.
 */
ListAccountIntegrationsResponsePrivate::ListAccountIntegrationsResponsePrivate(
    ListAccountIntegrationsResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles ListAccountIntegrations response element from \a xml.
 */
void ListAccountIntegrationsResponsePrivate::parseListAccountIntegrationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountIntegrationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
