// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteidentityproviderresponse.h"
#include "deleteidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteIdentityProviderResponse
 * \brief The DeleteIdentityProviderResponse class provides an interace for CognitoIdentityProvider DeleteIdentityProvider responses.
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
 * \sa CognitoIdentityProviderClient::deleteIdentityProvider
 */

/*!
 * Constructs a DeleteIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIdentityProviderResponse::DeleteIdentityProviderResponse(
        const DeleteIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIdentityProviderRequest * DeleteIdentityProviderResponse::request() const
{
    Q_D(const DeleteIdentityProviderResponse);
    return static_cast<const DeleteIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DeleteIdentityProvider \a response.
 */
void DeleteIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteIdentityProviderResponsePrivate
 * \brief The DeleteIdentityProviderResponsePrivate class provides private implementation for DeleteIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteIdentityProviderResponsePrivate object with public implementation \a q.
 */
DeleteIdentityProviderResponsePrivate::DeleteIdentityProviderResponsePrivate(
    DeleteIdentityProviderResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DeleteIdentityProvider response element from \a xml.
 */
void DeleteIdentityProviderResponsePrivate::parseDeleteIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
