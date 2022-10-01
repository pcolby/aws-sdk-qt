// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmatchesresponse.h"
#include "getmatchesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetMatchesResponse
 * \brief The GetMatchesResponse class provides an interace for CustomerProfiles GetMatches responses.
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
 * \sa CustomerProfilesClient::getMatches
 */

/*!
 * Constructs a GetMatchesResponse object for \a reply to \a request, with parent \a parent.
 */
GetMatchesResponse::GetMatchesResponse(
        const GetMatchesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new GetMatchesResponsePrivate(this), parent)
{
    setRequest(new GetMatchesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMatchesRequest * GetMatchesResponse::request() const
{
    Q_D(const GetMatchesResponse);
    return static_cast<const GetMatchesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles GetMatches \a response.
 */
void GetMatchesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMatchesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::GetMatchesResponsePrivate
 * \brief The GetMatchesResponsePrivate class provides private implementation for GetMatchesResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetMatchesResponsePrivate object with public implementation \a q.
 */
GetMatchesResponsePrivate::GetMatchesResponsePrivate(
    GetMatchesResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles GetMatches response element from \a xml.
 */
void GetMatchesResponsePrivate::parseGetMatchesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMatchesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
