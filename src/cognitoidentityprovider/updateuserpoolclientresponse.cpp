// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserpoolclientresponse.h"
#include "updateuserpoolclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolClientResponse
 * \brief The UpdateUserPoolClientResponse class provides an interace for CognitoIdentityProvider UpdateUserPoolClient responses.
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
 * \sa CognitoIdentityProviderClient::updateUserPoolClient
 */

/*!
 * Constructs a UpdateUserPoolClientResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserPoolClientResponse::UpdateUserPoolClientResponse(
        const UpdateUserPoolClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateUserPoolClientResponsePrivate(this), parent)
{
    setRequest(new UpdateUserPoolClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserPoolClientRequest * UpdateUserPoolClientResponse::request() const
{
    Q_D(const UpdateUserPoolClientResponse);
    return static_cast<const UpdateUserPoolClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider UpdateUserPoolClient \a response.
 */
void UpdateUserPoolClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserPoolClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolClientResponsePrivate
 * \brief The UpdateUserPoolClientResponsePrivate class provides private implementation for UpdateUserPoolClientResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateUserPoolClientResponsePrivate object with public implementation \a q.
 */
UpdateUserPoolClientResponsePrivate::UpdateUserPoolClientResponsePrivate(
    UpdateUserPoolClientResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider UpdateUserPoolClient response element from \a xml.
 */
void UpdateUserPoolClientResponsePrivate::parseUpdateUserPoolClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserPoolClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
