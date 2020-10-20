/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateusersecurityprofilesresponse.h"
#include "updateusersecurityprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::UpdateUserSecurityProfilesResponse
 * \brief The UpdateUserSecurityProfilesResponse class provides an interace for Connect UpdateUserSecurityProfiles responses.
 *
 * \inmodule QtAwsConnect
 *
 *  The Amazon Connect API Reference provides descriptions, syntax, and usage examples for each of the Amazon Connect
 *  actions, data types, parameters, and errors. Amazon Connect is a cloud-based contact center solution that makes it easy
 *  to set up and manage a customer contact center and provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Throttling limits for the Amazon Connect API
 * 
 *  operations>
 * 
 *  For the <code>GetMetricData</code> and <code>GetCurrentMetricData</code> operations, a RateLimit of 5 per second, and a
 *  BurstLimit of 8 per
 * 
 *  second>
 * 
 *  For all other operations, a RateLimit of 2 per second, and a BurstLimit of 5 per
 * 
 *  second>
 * 
 *  You can request an increase to the throttling limits by submitting a <a
 *  href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase">Amazon Connect service
 *  limits increase form</a>. You must be signed in to your AWS account to access the
 *
 * \sa ConnectClient::updateUserSecurityProfiles
 */

/*!
 * Constructs a UpdateUserSecurityProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserSecurityProfilesResponse::UpdateUserSecurityProfilesResponse(
        const UpdateUserSecurityProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new UpdateUserSecurityProfilesResponsePrivate(this), parent)
{
    setRequest(new UpdateUserSecurityProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserSecurityProfilesRequest * UpdateUserSecurityProfilesResponse::request() const
{
    Q_D(const UpdateUserSecurityProfilesResponse);
    return static_cast<const UpdateUserSecurityProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect UpdateUserSecurityProfiles \a response.
 */
void UpdateUserSecurityProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserSecurityProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::UpdateUserSecurityProfilesResponsePrivate
 * \brief The UpdateUserSecurityProfilesResponsePrivate class provides private implementation for UpdateUserSecurityProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a UpdateUserSecurityProfilesResponsePrivate object with public implementation \a q.
 */
UpdateUserSecurityProfilesResponsePrivate::UpdateUserSecurityProfilesResponsePrivate(
    UpdateUserSecurityProfilesResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect UpdateUserSecurityProfiles response element from \a xml.
 */
void UpdateUserSecurityProfilesResponsePrivate::parseUpdateUserSecurityProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserSecurityProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
