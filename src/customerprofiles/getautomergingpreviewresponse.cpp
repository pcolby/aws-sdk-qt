// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getautomergingpreviewresponse.h"
#include "getautomergingpreviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetAutoMergingPreviewResponse
 * \brief The GetAutoMergingPreviewResponse class provides an interace for CustomerProfiles GetAutoMergingPreview responses.
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
 * \sa CustomerProfilesClient::getAutoMergingPreview
 */

/*!
 * Constructs a GetAutoMergingPreviewResponse object for \a reply to \a request, with parent \a parent.
 */
GetAutoMergingPreviewResponse::GetAutoMergingPreviewResponse(
        const GetAutoMergingPreviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new GetAutoMergingPreviewResponsePrivate(this), parent)
{
    setRequest(new GetAutoMergingPreviewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAutoMergingPreviewRequest * GetAutoMergingPreviewResponse::request() const
{
    Q_D(const GetAutoMergingPreviewResponse);
    return static_cast<const GetAutoMergingPreviewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles GetAutoMergingPreview \a response.
 */
void GetAutoMergingPreviewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAutoMergingPreviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::GetAutoMergingPreviewResponsePrivate
 * \brief The GetAutoMergingPreviewResponsePrivate class provides private implementation for GetAutoMergingPreviewResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetAutoMergingPreviewResponsePrivate object with public implementation \a q.
 */
GetAutoMergingPreviewResponsePrivate::GetAutoMergingPreviewResponsePrivate(
    GetAutoMergingPreviewResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles GetAutoMergingPreview response element from \a xml.
 */
void GetAutoMergingPreviewResponsePrivate::parseGetAutoMergingPreviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAutoMergingPreviewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
