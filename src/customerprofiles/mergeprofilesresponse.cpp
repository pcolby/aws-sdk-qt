// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mergeprofilesresponse.h"
#include "mergeprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::MergeProfilesResponse
 * \brief The MergeProfilesResponse class provides an interace for CustomerProfiles MergeProfiles responses.
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
 * \sa CustomerProfilesClient::mergeProfiles
 */

/*!
 * Constructs a MergeProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
MergeProfilesResponse::MergeProfilesResponse(
        const MergeProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new MergeProfilesResponsePrivate(this), parent)
{
    setRequest(new MergeProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const MergeProfilesRequest * MergeProfilesResponse::request() const
{
    Q_D(const MergeProfilesResponse);
    return static_cast<const MergeProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles MergeProfiles \a response.
 */
void MergeProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(MergeProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::MergeProfilesResponsePrivate
 * \brief The MergeProfilesResponsePrivate class provides private implementation for MergeProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a MergeProfilesResponsePrivate object with public implementation \a q.
 */
MergeProfilesResponsePrivate::MergeProfilesResponsePrivate(
    MergeProfilesResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles MergeProfiles response element from \a xml.
 */
void MergeProfilesResponsePrivate::parseMergeProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MergeProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
