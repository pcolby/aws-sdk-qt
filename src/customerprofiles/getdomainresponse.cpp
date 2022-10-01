// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainresponse.h"
#include "getdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetDomainResponse
 * \brief The GetDomainResponse class provides an interace for CustomerProfiles GetDomain responses.
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
 * \sa CustomerProfilesClient::getDomain
 */

/*!
 * Constructs a GetDomainResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainResponse::GetDomainResponse(
        const GetDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new GetDomainResponsePrivate(this), parent)
{
    setRequest(new GetDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainRequest * GetDomainResponse::request() const
{
    Q_D(const GetDomainResponse);
    return static_cast<const GetDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles GetDomain \a response.
 */
void GetDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::GetDomainResponsePrivate
 * \brief The GetDomainResponsePrivate class provides private implementation for GetDomainResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetDomainResponsePrivate object with public implementation \a q.
 */
GetDomainResponsePrivate::GetDomainResponsePrivate(
    GetDomainResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles GetDomain response element from \a xml.
 */
void GetDomainResponsePrivate::parseGetDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
