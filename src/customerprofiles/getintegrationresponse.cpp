// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationresponse.h"
#include "getintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetIntegrationResponse
 * \brief The GetIntegrationResponse class provides an interace for CustomerProfiles GetIntegration responses.
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
 * \sa CustomerProfilesClient::getIntegration
 */

/*!
 * Constructs a GetIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntegrationResponse::GetIntegrationResponse(
        const GetIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new GetIntegrationResponsePrivate(this), parent)
{
    setRequest(new GetIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntegrationRequest * GetIntegrationResponse::request() const
{
    Q_D(const GetIntegrationResponse);
    return static_cast<const GetIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles GetIntegration \a response.
 */
void GetIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::GetIntegrationResponsePrivate
 * \brief The GetIntegrationResponsePrivate class provides private implementation for GetIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetIntegrationResponsePrivate object with public implementation \a q.
 */
GetIntegrationResponsePrivate::GetIntegrationResponsePrivate(
    GetIntegrationResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles GetIntegration response element from \a xml.
 */
void GetIntegrationResponsePrivate::parseGetIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
