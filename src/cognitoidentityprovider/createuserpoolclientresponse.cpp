// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserpoolclientresponse.h"
#include "createuserpoolclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolClientResponse
 * \brief The CreateUserPoolClientResponse class provides an interace for CognitoIdentityProvider CreateUserPoolClient responses.
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
 * \sa CognitoIdentityProviderClient::createUserPoolClient
 */

/*!
 * Constructs a CreateUserPoolClientResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserPoolClientResponse::CreateUserPoolClientResponse(
        const CreateUserPoolClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateUserPoolClientResponsePrivate(this), parent)
{
    setRequest(new CreateUserPoolClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserPoolClientRequest * CreateUserPoolClientResponse::request() const
{
    Q_D(const CreateUserPoolClientResponse);
    return static_cast<const CreateUserPoolClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider CreateUserPoolClient \a response.
 */
void CreateUserPoolClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserPoolClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolClientResponsePrivate
 * \brief The CreateUserPoolClientResponsePrivate class provides private implementation for CreateUserPoolClientResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateUserPoolClientResponsePrivate object with public implementation \a q.
 */
CreateUserPoolClientResponsePrivate::CreateUserPoolClientResponsePrivate(
    CreateUserPoolClientResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider CreateUserPoolClient response element from \a xml.
 */
void CreateUserPoolClientResponsePrivate::parseCreateUserPoolClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserPoolClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
