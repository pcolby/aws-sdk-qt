// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserpoolresponse.h"
#include "deleteuserpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolResponse
 * \brief The DeleteUserPoolResponse class provides an interace for CognitoIdentityProvider DeleteUserPool responses.
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
 * \sa CognitoIdentityProviderClient::deleteUserPool
 */

/*!
 * Constructs a DeleteUserPoolResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserPoolResponse::DeleteUserPoolResponse(
        const DeleteUserPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteUserPoolResponsePrivate(this), parent)
{
    setRequest(new DeleteUserPoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserPoolRequest * DeleteUserPoolResponse::request() const
{
    Q_D(const DeleteUserPoolResponse);
    return static_cast<const DeleteUserPoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DeleteUserPool \a response.
 */
void DeleteUserPoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolResponsePrivate
 * \brief The DeleteUserPoolResponsePrivate class provides private implementation for DeleteUserPoolResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteUserPoolResponsePrivate object with public implementation \a q.
 */
DeleteUserPoolResponsePrivate::DeleteUserPoolResponsePrivate(
    DeleteUserPoolResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DeleteUserPool response element from \a xml.
 */
void DeleteUserPoolResponsePrivate::parseDeleteUserPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserPoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
