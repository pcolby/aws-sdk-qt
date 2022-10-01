// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setusermfapreferenceresponse.h"
#include "setusermfapreferenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserMFAPreferenceResponse
 * \brief The SetUserMFAPreferenceResponse class provides an interace for CognitoIdentityProvider SetUserMFAPreference responses.
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
 * \sa CognitoIdentityProviderClient::setUserMFAPreference
 */

/*!
 * Constructs a SetUserMFAPreferenceResponse object for \a reply to \a request, with parent \a parent.
 */
SetUserMFAPreferenceResponse::SetUserMFAPreferenceResponse(
        const SetUserMFAPreferenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SetUserMFAPreferenceResponsePrivate(this), parent)
{
    setRequest(new SetUserMFAPreferenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetUserMFAPreferenceRequest * SetUserMFAPreferenceResponse::request() const
{
    Q_D(const SetUserMFAPreferenceResponse);
    return static_cast<const SetUserMFAPreferenceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider SetUserMFAPreference \a response.
 */
void SetUserMFAPreferenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetUserMFAPreferenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserMFAPreferenceResponsePrivate
 * \brief The SetUserMFAPreferenceResponsePrivate class provides private implementation for SetUserMFAPreferenceResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SetUserMFAPreferenceResponsePrivate object with public implementation \a q.
 */
SetUserMFAPreferenceResponsePrivate::SetUserMFAPreferenceResponsePrivate(
    SetUserMFAPreferenceResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider SetUserMFAPreference response element from \a xml.
 */
void SetUserMFAPreferenceResponsePrivate::parseSetUserMFAPreferenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetUserMFAPreferenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
