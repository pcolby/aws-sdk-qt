// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprofileobjecttyperesponse.h"
#include "deleteprofileobjecttyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileObjectTypeResponse
 * \brief The DeleteProfileObjectTypeResponse class provides an interace for CustomerProfiles DeleteProfileObjectType responses.
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
 * \sa CustomerProfilesClient::deleteProfileObjectType
 */

/*!
 * Constructs a DeleteProfileObjectTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProfileObjectTypeResponse::DeleteProfileObjectTypeResponse(
        const DeleteProfileObjectTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new DeleteProfileObjectTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteProfileObjectTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProfileObjectTypeRequest * DeleteProfileObjectTypeResponse::request() const
{
    Q_D(const DeleteProfileObjectTypeResponse);
    return static_cast<const DeleteProfileObjectTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles DeleteProfileObjectType \a response.
 */
void DeleteProfileObjectTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProfileObjectTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileObjectTypeResponsePrivate
 * \brief The DeleteProfileObjectTypeResponsePrivate class provides private implementation for DeleteProfileObjectTypeResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a DeleteProfileObjectTypeResponsePrivate object with public implementation \a q.
 */
DeleteProfileObjectTypeResponsePrivate::DeleteProfileObjectTypeResponsePrivate(
    DeleteProfileObjectTypeResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles DeleteProfileObjectType response element from \a xml.
 */
void DeleteProfileObjectTypeResponsePrivate::parseDeleteProfileObjectTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProfileObjectTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
