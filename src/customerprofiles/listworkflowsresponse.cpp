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

#include "listworkflowsresponse.h"
#include "listworkflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListWorkflowsResponse
 * \brief The ListWorkflowsResponse class provides an interace for CustomerProfiles ListWorkflows responses.
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
 * \sa CustomerProfilesClient::listWorkflows
 */

/*!
 * Constructs a ListWorkflowsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkflowsResponse::ListWorkflowsResponse(
        const ListWorkflowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new ListWorkflowsResponsePrivate(this), parent)
{
    setRequest(new ListWorkflowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkflowsRequest * ListWorkflowsResponse::request() const
{
    Q_D(const ListWorkflowsResponse);
    return static_cast<const ListWorkflowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles ListWorkflows \a response.
 */
void ListWorkflowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkflowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::ListWorkflowsResponsePrivate
 * \brief The ListWorkflowsResponsePrivate class provides private implementation for ListWorkflowsResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListWorkflowsResponsePrivate object with public implementation \a q.
 */
ListWorkflowsResponsePrivate::ListWorkflowsResponsePrivate(
    ListWorkflowsResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles ListWorkflows response element from \a xml.
 */
void ListWorkflowsResponsePrivate::parseListWorkflowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkflowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
