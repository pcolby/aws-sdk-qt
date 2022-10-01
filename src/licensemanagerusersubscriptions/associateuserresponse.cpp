/*
    Copyright 2013-2021 Paul Colby

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

#include "associateuserresponse.h"
#include "associateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::AssociateUserResponse
 * \brief The AssociateUserResponse class provides an interace for LicenseManagerUserSubscriptions AssociateUser responses.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::associateUser
 */

/*!
 * Constructs a AssociateUserResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateUserResponse::AssociateUserResponse(
        const AssociateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerUserSubscriptionsResponse(new AssociateUserResponsePrivate(this), parent)
{
    setRequest(new AssociateUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateUserRequest * AssociateUserResponse::request() const
{
    Q_D(const AssociateUserResponse);
    return static_cast<const AssociateUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManagerUserSubscriptions AssociateUser \a response.
 */
void AssociateUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::AssociateUserResponsePrivate
 * \brief The AssociateUserResponsePrivate class provides private implementation for AssociateUserResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a AssociateUserResponsePrivate object with public implementation \a q.
 */
AssociateUserResponsePrivate::AssociateUserResponsePrivate(
    AssociateUserResponse * const q) : LicenseManagerUserSubscriptionsResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManagerUserSubscriptions AssociateUser response element from \a xml.
 */
void AssociateUserResponsePrivate::parseAssociateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
