// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserpooldomainresponse.h"
#include "deleteuserpooldomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolDomainResponse
 * \brief The DeleteUserPoolDomainResponse class provides an interace for CognitoIdentityProvider DeleteUserPoolDomain responses.
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
 * \sa CognitoIdentityProviderClient::deleteUserPoolDomain
 */

/*!
 * Constructs a DeleteUserPoolDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserPoolDomainResponse::DeleteUserPoolDomainResponse(
        const DeleteUserPoolDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteUserPoolDomainResponsePrivate(this), parent)
{
    setRequest(new DeleteUserPoolDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserPoolDomainRequest * DeleteUserPoolDomainResponse::request() const
{
    Q_D(const DeleteUserPoolDomainResponse);
    return static_cast<const DeleteUserPoolDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DeleteUserPoolDomain \a response.
 */
void DeleteUserPoolDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserPoolDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolDomainResponsePrivate
 * \brief The DeleteUserPoolDomainResponsePrivate class provides private implementation for DeleteUserPoolDomainResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteUserPoolDomainResponsePrivate object with public implementation \a q.
 */
DeleteUserPoolDomainResponsePrivate::DeleteUserPoolDomainResponsePrivate(
    DeleteUserPoolDomainResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DeleteUserPoolDomain response element from \a xml.
 */
void DeleteUserPoolDomainResponsePrivate::parseDeleteUserPoolDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserPoolDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
