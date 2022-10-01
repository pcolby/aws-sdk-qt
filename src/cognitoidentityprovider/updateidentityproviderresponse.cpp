// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateidentityproviderresponse.h"
#include "updateidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateIdentityProviderResponse
 * \brief The UpdateIdentityProviderResponse class provides an interace for CognitoIdentityProvider UpdateIdentityProvider responses.
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
 * \sa CognitoIdentityProviderClient::updateIdentityProvider
 */

/*!
 * Constructs a UpdateIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIdentityProviderResponse::UpdateIdentityProviderResponse(
        const UpdateIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new UpdateIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIdentityProviderRequest * UpdateIdentityProviderResponse::request() const
{
    Q_D(const UpdateIdentityProviderResponse);
    return static_cast<const UpdateIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider UpdateIdentityProvider \a response.
 */
void UpdateIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateIdentityProviderResponsePrivate
 * \brief The UpdateIdentityProviderResponsePrivate class provides private implementation for UpdateIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateIdentityProviderResponsePrivate object with public implementation \a q.
 */
UpdateIdentityProviderResponsePrivate::UpdateIdentityProviderResponsePrivate(
    UpdateIdentityProviderResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider UpdateIdentityProvider response element from \a xml.
 */
void UpdateIdentityProviderResponsePrivate::parseUpdateIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
