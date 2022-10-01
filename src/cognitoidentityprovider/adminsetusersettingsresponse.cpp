// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminsetusersettingsresponse.h"
#include "adminsetusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserSettingsResponse
 * \brief The AdminSetUserSettingsResponse class provides an interace for CognitoIdentityProvider AdminSetUserSettings responses.
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
 * \sa CognitoIdentityProviderClient::adminSetUserSettings
 */

/*!
 * Constructs a AdminSetUserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
AdminSetUserSettingsResponse::AdminSetUserSettingsResponse(
        const AdminSetUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminSetUserSettingsResponsePrivate(this), parent)
{
    setRequest(new AdminSetUserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminSetUserSettingsRequest * AdminSetUserSettingsResponse::request() const
{
    Q_D(const AdminSetUserSettingsResponse);
    return static_cast<const AdminSetUserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminSetUserSettings \a response.
 */
void AdminSetUserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminSetUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserSettingsResponsePrivate
 * \brief The AdminSetUserSettingsResponsePrivate class provides private implementation for AdminSetUserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminSetUserSettingsResponsePrivate object with public implementation \a q.
 */
AdminSetUserSettingsResponsePrivate::AdminSetUserSettingsResponsePrivate(
    AdminSetUserSettingsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminSetUserSettings response element from \a xml.
 */
void AdminSetUserSettingsResponsePrivate::parseAdminSetUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminSetUserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
