// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprofileresponse.h"
#include "updateprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::UpdateProfileResponse
 * \brief The UpdateProfileResponse class provides an interace for CustomerProfiles UpdateProfile responses.
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
 * \sa CustomerProfilesClient::updateProfile
 */

/*!
 * Constructs a UpdateProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateProfileResponse::UpdateProfileResponse(
        const UpdateProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new UpdateProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateProfileRequest * UpdateProfileResponse::request() const
{
    Q_D(const UpdateProfileResponse);
    return static_cast<const UpdateProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles UpdateProfile \a response.
 */
void UpdateProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::UpdateProfileResponsePrivate
 * \brief The UpdateProfileResponsePrivate class provides private implementation for UpdateProfileResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a UpdateProfileResponsePrivate object with public implementation \a q.
 */
UpdateProfileResponsePrivate::UpdateProfileResponsePrivate(
    UpdateProfileResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles UpdateProfile response element from \a xml.
 */
void UpdateProfileResponsePrivate::parseUpdateProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
