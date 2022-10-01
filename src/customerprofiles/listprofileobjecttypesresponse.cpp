// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprofileobjecttypesresponse.h"
#include "listprofileobjecttypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListProfileObjectTypesResponse
 * \brief The ListProfileObjectTypesResponse class provides an interace for CustomerProfiles ListProfileObjectTypes responses.
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
 * \sa CustomerProfilesClient::listProfileObjectTypes
 */

/*!
 * Constructs a ListProfileObjectTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListProfileObjectTypesResponse::ListProfileObjectTypesResponse(
        const ListProfileObjectTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new ListProfileObjectTypesResponsePrivate(this), parent)
{
    setRequest(new ListProfileObjectTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProfileObjectTypesRequest * ListProfileObjectTypesResponse::request() const
{
    Q_D(const ListProfileObjectTypesResponse);
    return static_cast<const ListProfileObjectTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles ListProfileObjectTypes \a response.
 */
void ListProfileObjectTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProfileObjectTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::ListProfileObjectTypesResponsePrivate
 * \brief The ListProfileObjectTypesResponsePrivate class provides private implementation for ListProfileObjectTypesResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListProfileObjectTypesResponsePrivate object with public implementation \a q.
 */
ListProfileObjectTypesResponsePrivate::ListProfileObjectTypesResponsePrivate(
    ListProfileObjectTypesResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles ListProfileObjectTypes response element from \a xml.
 */
void ListProfileObjectTypesResponsePrivate::parseListProfileObjectTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProfileObjectTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
