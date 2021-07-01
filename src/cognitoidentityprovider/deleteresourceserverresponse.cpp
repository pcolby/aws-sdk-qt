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

#include "deleteresourceserverresponse.h"
#include "deleteresourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteResourceServerResponse
 * \brief The DeleteResourceServerResponse class provides an interace for CognitoIdentityProvider DeleteResourceServer responses.
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
 * \sa CognitoIdentityProviderClient::deleteResourceServer
 */

/*!
 * Constructs a DeleteResourceServerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourceServerResponse::DeleteResourceServerResponse(
        const DeleteResourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteResourceServerResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourceServerRequest * DeleteResourceServerResponse::request() const
{
    Q_D(const DeleteResourceServerResponse);
    return static_cast<const DeleteResourceServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DeleteResourceServer \a response.
 */
void DeleteResourceServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourceServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteResourceServerResponsePrivate
 * \brief The DeleteResourceServerResponsePrivate class provides private implementation for DeleteResourceServerResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteResourceServerResponsePrivate object with public implementation \a q.
 */
DeleteResourceServerResponsePrivate::DeleteResourceServerResponsePrivate(
    DeleteResourceServerResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DeleteResourceServer response element from \a xml.
 */
void DeleteResourceServerResponsePrivate::parseDeleteResourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
