/*
    Copyright 2013-2018 Paul Colby

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
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
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
    Q_D(UpdateUserPoolResponse);
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
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
