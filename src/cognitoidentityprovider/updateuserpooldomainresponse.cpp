/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateuserpooldomainresponse.h"
#include "updateuserpooldomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolDomainResponse
 * \brief The UpdateUserPoolDomainResponse class provides an interace for CognitoIdentityProvider UpdateUserPoolDomain responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::updateUserPoolDomain
 */

/*!
 * Constructs a UpdateUserPoolDomainResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserPoolDomainResponse::UpdateUserPoolDomainResponse(
        const UpdateUserPoolDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateUserPoolDomainResponsePrivate(this), parent)
{
    setRequest(new UpdateUserPoolDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserPoolDomainRequest * UpdateUserPoolDomainResponse::request() const
{
    return static_cast<const UpdateUserPoolDomainRequest *>(CognitoIdentityProviderResponse::request());
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider UpdateUserPoolDomain \a response.
 */
void UpdateUserPoolDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserPoolDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolDomainResponsePrivate
 * \brief The UpdateUserPoolDomainResponsePrivate class provides private implementation for UpdateUserPoolDomainResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateUserPoolDomainResponsePrivate object with public implementation \a q.
 */
UpdateUserPoolDomainResponsePrivate::UpdateUserPoolDomainResponsePrivate(
    UpdateUserPoolDomainResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider UpdateUserPoolDomain response element from \a xml.
 */
void UpdateUserPoolDomainResponsePrivate::parseUpdateUserPoolDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserPoolDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
