// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
