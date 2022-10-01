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

#include "listidentityresolutionjobsresponse.h"
#include "listidentityresolutionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListIdentityResolutionJobsResponse
 * \brief The ListIdentityResolutionJobsResponse class provides an interace for CustomerProfiles ListIdentityResolutionJobs responses.
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
 * \sa CustomerProfilesClient::listIdentityResolutionJobs
 */

/*!
 * Constructs a ListIdentityResolutionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListIdentityResolutionJobsResponse::ListIdentityResolutionJobsResponse(
        const ListIdentityResolutionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new ListIdentityResolutionJobsResponsePrivate(this), parent)
{
    setRequest(new ListIdentityResolutionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIdentityResolutionJobsRequest * ListIdentityResolutionJobsResponse::request() const
{
    Q_D(const ListIdentityResolutionJobsResponse);
    return static_cast<const ListIdentityResolutionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles ListIdentityResolutionJobs \a response.
 */
void ListIdentityResolutionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIdentityResolutionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::ListIdentityResolutionJobsResponsePrivate
 * \brief The ListIdentityResolutionJobsResponsePrivate class provides private implementation for ListIdentityResolutionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListIdentityResolutionJobsResponsePrivate object with public implementation \a q.
 */
ListIdentityResolutionJobsResponsePrivate::ListIdentityResolutionJobsResponsePrivate(
    ListIdentityResolutionJobsResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles ListIdentityResolutionJobs response element from \a xml.
 */
void ListIdentityResolutionJobsResponsePrivate::parseListIdentityResolutionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIdentityResolutionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
