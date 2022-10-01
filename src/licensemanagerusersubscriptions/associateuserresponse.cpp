// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
