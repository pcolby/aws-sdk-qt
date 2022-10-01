// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainresponse.h"
#include "updatedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::UpdateDomainResponse
 * \brief The UpdateDomainResponse class provides an interace for CustomerProfiles UpdateDomain responses.
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
 * \sa CustomerProfilesClient::updateDomain
 */

/*!
 * Constructs a UpdateDomainResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainResponse::UpdateDomainResponse(
        const UpdateDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new UpdateDomainResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainRequest * UpdateDomainResponse::request() const
{
    Q_D(const UpdateDomainResponse);
    return static_cast<const UpdateDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles UpdateDomain \a response.
 */
void UpdateDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::UpdateDomainResponsePrivate
 * \brief The UpdateDomainResponsePrivate class provides private implementation for UpdateDomainResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a UpdateDomainResponsePrivate object with public implementation \a q.
 */
UpdateDomainResponsePrivate::UpdateDomainResponsePrivate(
    UpdateDomainResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles UpdateDomain response element from \a xml.
 */
void UpdateDomainResponsePrivate::parseUpdateDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
