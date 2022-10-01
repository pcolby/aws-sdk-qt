// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminresetuserpasswordresponse.h"
#include "adminresetuserpasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminResetUserPasswordResponse
 * \brief The AdminResetUserPasswordResponse class provides an interace for CognitoIdentityProvider AdminResetUserPassword responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminResetUserPassword
 */

/*!
 * Constructs a AdminResetUserPasswordResponse object for \a reply to \a request, with parent \a parent.
 */
AdminResetUserPasswordResponse::AdminResetUserPasswordResponse(
        const AdminResetUserPasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminResetUserPasswordResponsePrivate(this), parent)
{
    setRequest(new AdminResetUserPasswordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminResetUserPasswordRequest * AdminResetUserPasswordResponse::request() const
{
    Q_D(const AdminResetUserPasswordResponse);
    return static_cast<const AdminResetUserPasswordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminResetUserPassword \a response.
 */
void AdminResetUserPasswordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminResetUserPasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminResetUserPasswordResponsePrivate
 * \brief The AdminResetUserPasswordResponsePrivate class provides private implementation for AdminResetUserPasswordResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminResetUserPasswordResponsePrivate object with public implementation \a q.
 */
AdminResetUserPasswordResponsePrivate::AdminResetUserPasswordResponsePrivate(
    AdminResetUserPasswordResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminResetUserPassword response element from \a xml.
 */
void AdminResetUserPasswordResponsePrivate::parseAdminResetUserPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminResetUserPasswordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
