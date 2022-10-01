// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setusersettingsresponse.h"
#include "setusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserSettingsResponse
 * \brief The SetUserSettingsResponse class provides an interace for CognitoIdentityProvider SetUserSettings responses.
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
 * \sa CognitoIdentityProviderClient::setUserSettings
 */

/*!
 * Constructs a SetUserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
SetUserSettingsResponse::SetUserSettingsResponse(
        const SetUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SetUserSettingsResponsePrivate(this), parent)
{
    setRequest(new SetUserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetUserSettingsRequest * SetUserSettingsResponse::request() const
{
    Q_D(const SetUserSettingsResponse);
    return static_cast<const SetUserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider SetUserSettings \a response.
 */
void SetUserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserSettingsResponsePrivate
 * \brief The SetUserSettingsResponsePrivate class provides private implementation for SetUserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SetUserSettingsResponsePrivate object with public implementation \a q.
 */
SetUserSettingsResponsePrivate::SetUserSettingsResponsePrivate(
    SetUserSettingsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider SetUserSettings response element from \a xml.
 */
void SetUserSettingsResponsePrivate::parseSetUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetUserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
