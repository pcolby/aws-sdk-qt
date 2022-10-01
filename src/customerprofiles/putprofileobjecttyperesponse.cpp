// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putprofileobjecttyperesponse.h"
#include "putprofileobjecttyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::PutProfileObjectTypeResponse
 * \brief The PutProfileObjectTypeResponse class provides an interace for CustomerProfiles PutProfileObjectType responses.
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
 * \sa CustomerProfilesClient::putProfileObjectType
 */

/*!
 * Constructs a PutProfileObjectTypeResponse object for \a reply to \a request, with parent \a parent.
 */
PutProfileObjectTypeResponse::PutProfileObjectTypeResponse(
        const PutProfileObjectTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new PutProfileObjectTypeResponsePrivate(this), parent)
{
    setRequest(new PutProfileObjectTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutProfileObjectTypeRequest * PutProfileObjectTypeResponse::request() const
{
    Q_D(const PutProfileObjectTypeResponse);
    return static_cast<const PutProfileObjectTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles PutProfileObjectType \a response.
 */
void PutProfileObjectTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutProfileObjectTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::PutProfileObjectTypeResponsePrivate
 * \brief The PutProfileObjectTypeResponsePrivate class provides private implementation for PutProfileObjectTypeResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a PutProfileObjectTypeResponsePrivate object with public implementation \a q.
 */
PutProfileObjectTypeResponsePrivate::PutProfileObjectTypeResponsePrivate(
    PutProfileObjectTypeResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles PutProfileObjectType response element from \a xml.
 */
void PutProfileObjectTypeResponsePrivate::parsePutProfileObjectTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutProfileObjectTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
