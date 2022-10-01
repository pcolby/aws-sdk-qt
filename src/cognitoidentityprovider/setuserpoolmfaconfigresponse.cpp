// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setuserpoolmfaconfigresponse.h"
#include "setuserpoolmfaconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserPoolMfaConfigResponse
 * \brief The SetUserPoolMfaConfigResponse class provides an interace for CognitoIdentityProvider SetUserPoolMfaConfig responses.
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
 * \sa CognitoIdentityProviderClient::setUserPoolMfaConfig
 */

/*!
 * Constructs a SetUserPoolMfaConfigResponse object for \a reply to \a request, with parent \a parent.
 */
SetUserPoolMfaConfigResponse::SetUserPoolMfaConfigResponse(
        const SetUserPoolMfaConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SetUserPoolMfaConfigResponsePrivate(this), parent)
{
    setRequest(new SetUserPoolMfaConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetUserPoolMfaConfigRequest * SetUserPoolMfaConfigResponse::request() const
{
    Q_D(const SetUserPoolMfaConfigResponse);
    return static_cast<const SetUserPoolMfaConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider SetUserPoolMfaConfig \a response.
 */
void SetUserPoolMfaConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetUserPoolMfaConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserPoolMfaConfigResponsePrivate
 * \brief The SetUserPoolMfaConfigResponsePrivate class provides private implementation for SetUserPoolMfaConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SetUserPoolMfaConfigResponsePrivate object with public implementation \a q.
 */
SetUserPoolMfaConfigResponsePrivate::SetUserPoolMfaConfigResponsePrivate(
    SetUserPoolMfaConfigResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider SetUserPoolMfaConfig response element from \a xml.
 */
void SetUserPoolMfaConfigResponsePrivate::parseSetUserPoolMfaConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetUserPoolMfaConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
