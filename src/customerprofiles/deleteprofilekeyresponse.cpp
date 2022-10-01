// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprofilekeyresponse.h"
#include "deleteprofilekeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileKeyResponse
 * \brief The DeleteProfileKeyResponse class provides an interace for CustomerProfiles DeleteProfileKey responses.
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
 * \sa CustomerProfilesClient::deleteProfileKey
 */

/*!
 * Constructs a DeleteProfileKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProfileKeyResponse::DeleteProfileKeyResponse(
        const DeleteProfileKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new DeleteProfileKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteProfileKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProfileKeyRequest * DeleteProfileKeyResponse::request() const
{
    Q_D(const DeleteProfileKeyResponse);
    return static_cast<const DeleteProfileKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles DeleteProfileKey \a response.
 */
void DeleteProfileKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProfileKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileKeyResponsePrivate
 * \brief The DeleteProfileKeyResponsePrivate class provides private implementation for DeleteProfileKeyResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a DeleteProfileKeyResponsePrivate object with public implementation \a q.
 */
DeleteProfileKeyResponsePrivate::DeleteProfileKeyResponsePrivate(
    DeleteProfileKeyResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles DeleteProfileKey response element from \a xml.
 */
void DeleteProfileKeyResponsePrivate::parseDeleteProfileKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProfileKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
