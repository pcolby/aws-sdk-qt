// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserpoolresponse.h"
#include "updateuserpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolResponse
 * \brief The UpdateUserPoolResponse class provides an interace for CognitoIdentityProvider UpdateUserPool responses.
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
 * \sa CognitoIdentityProviderClient::updateUserPool
 */

/*!
 * Constructs a UpdateUserPoolResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserPoolResponse::UpdateUserPoolResponse(
        const UpdateUserPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateUserPoolResponsePrivate(this), parent)
{
    setRequest(new UpdateUserPoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserPoolRequest * UpdateUserPoolResponse::request() const
{
    Q_D(const UpdateUserPoolResponse);
    return static_cast<const UpdateUserPoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider UpdateUserPool \a response.
 */
void UpdateUserPoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolResponsePrivate
 * \brief The UpdateUserPoolResponsePrivate class provides private implementation for UpdateUserPoolResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateUserPoolResponsePrivate object with public implementation \a q.
 */
UpdateUserPoolResponsePrivate::UpdateUserPoolResponsePrivate(
    UpdateUserPoolResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider UpdateUserPool response element from \a xml.
 */
void UpdateUserPoolResponsePrivate::parseUpdateUserPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserPoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
