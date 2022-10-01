// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putintegrationresponse.h"
#include "putintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::PutIntegrationResponse
 * \brief The PutIntegrationResponse class provides an interace for CustomerProfiles PutIntegration responses.
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
 * \sa CustomerProfilesClient::putIntegration
 */

/*!
 * Constructs a PutIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
PutIntegrationResponse::PutIntegrationResponse(
        const PutIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new PutIntegrationResponsePrivate(this), parent)
{
    setRequest(new PutIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutIntegrationRequest * PutIntegrationResponse::request() const
{
    Q_D(const PutIntegrationResponse);
    return static_cast<const PutIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles PutIntegration \a response.
 */
void PutIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::PutIntegrationResponsePrivate
 * \brief The PutIntegrationResponsePrivate class provides private implementation for PutIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a PutIntegrationResponsePrivate object with public implementation \a q.
 */
PutIntegrationResponsePrivate::PutIntegrationResponsePrivate(
    PutIntegrationResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles PutIntegration response element from \a xml.
 */
void PutIntegrationResponsePrivate::parsePutIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
