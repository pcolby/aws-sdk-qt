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

#include "updateresourceserverresponse.h"
#include "updateresourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateResourceServerResponse
 * \brief The UpdateResourceServerResponse class provides an interace for CognitoIdentityProvider UpdateResourceServer responses.
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
 * \sa CognitoIdentityProviderClient::updateResourceServer
 */

/*!
 * Constructs a UpdateResourceServerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourceServerResponse::UpdateResourceServerResponse(
        const UpdateResourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateResourceServerResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourceServerRequest * UpdateResourceServerResponse::request() const
{
    Q_D(const UpdateResourceServerResponse);
    return static_cast<const UpdateResourceServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider UpdateResourceServer \a response.
 */
void UpdateResourceServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourceServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateResourceServerResponsePrivate
 * \brief The UpdateResourceServerResponsePrivate class provides private implementation for UpdateResourceServerResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateResourceServerResponsePrivate object with public implementation \a q.
 */
UpdateResourceServerResponsePrivate::UpdateResourceServerResponsePrivate(
    UpdateResourceServerResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider UpdateResourceServer response element from \a xml.
 */
void UpdateResourceServerResponsePrivate::parseUpdateResourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
