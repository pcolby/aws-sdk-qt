// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserpooldomainresponse.h"
#include "createuserpooldomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolDomainResponse
 * \brief The CreateUserPoolDomainResponse class provides an interace for CognitoIdentityProvider CreateUserPoolDomain responses.
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
 * \sa CognitoIdentityProviderClient::createUserPoolDomain
 */

/*!
 * Constructs a CreateUserPoolDomainResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserPoolDomainResponse::CreateUserPoolDomainResponse(
        const CreateUserPoolDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateUserPoolDomainResponsePrivate(this), parent)
{
    setRequest(new CreateUserPoolDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserPoolDomainRequest * CreateUserPoolDomainResponse::request() const
{
    Q_D(const CreateUserPoolDomainResponse);
    return static_cast<const CreateUserPoolDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider CreateUserPoolDomain \a response.
 */
void CreateUserPoolDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserPoolDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolDomainResponsePrivate
 * \brief The CreateUserPoolDomainResponsePrivate class provides private implementation for CreateUserPoolDomainResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateUserPoolDomainResponsePrivate object with public implementation \a q.
 */
CreateUserPoolDomainResponsePrivate::CreateUserPoolDomainResponsePrivate(
    CreateUserPoolDomainResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider CreateUserPoolDomain response element from \a xml.
 */
void CreateUserPoolDomainResponsePrivate::parseCreateUserPoolDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserPoolDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
