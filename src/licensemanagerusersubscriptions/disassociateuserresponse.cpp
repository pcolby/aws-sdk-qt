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

#include "disassociateuserresponse.h"
#include "disassociateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::DisassociateUserResponse
 * \brief The DisassociateUserResponse class provides an interace for LicenseManagerUserSubscriptions DisassociateUser responses.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::disassociateUser
 */

/*!
 * Constructs a DisassociateUserResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateUserResponse::DisassociateUserResponse(
        const DisassociateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerUserSubscriptionsResponse(new DisassociateUserResponsePrivate(this), parent)
{
    setRequest(new DisassociateUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateUserRequest * DisassociateUserResponse::request() const
{
    Q_D(const DisassociateUserResponse);
    return static_cast<const DisassociateUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManagerUserSubscriptions DisassociateUser \a response.
 */
void DisassociateUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::DisassociateUserResponsePrivate
 * \brief The DisassociateUserResponsePrivate class provides private implementation for DisassociateUserResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a DisassociateUserResponsePrivate object with public implementation \a q.
 */
DisassociateUserResponsePrivate::DisassociateUserResponsePrivate(
    DisassociateUserResponse * const q) : LicenseManagerUserSubscriptionsResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManagerUserSubscriptions DisassociateUser response element from \a xml.
 */
void DisassociateUserResponsePrivate::parseDisassociateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
