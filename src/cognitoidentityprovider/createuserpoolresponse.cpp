// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserpoolresponse.h"
#include "createuserpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolResponse
 * \brief The CreateUserPoolResponse class provides an interace for CognitoIdentityProvider CreateUserPool responses.
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
 * \sa CognitoIdentityProviderClient::createUserPool
 */

/*!
 * Constructs a CreateUserPoolResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserPoolResponse::CreateUserPoolResponse(
        const CreateUserPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateUserPoolResponsePrivate(this), parent)
{
    setRequest(new CreateUserPoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserPoolRequest * CreateUserPoolResponse::request() const
{
    Q_D(const CreateUserPoolResponse);
    return static_cast<const CreateUserPoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider CreateUserPool \a response.
 */
void CreateUserPoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolResponsePrivate
 * \brief The CreateUserPoolResponsePrivate class provides private implementation for CreateUserPoolResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateUserPoolResponsePrivate object with public implementation \a q.
 */
CreateUserPoolResponsePrivate::CreateUserPoolResponsePrivate(
    CreateUserPoolResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider CreateUserPool response element from \a xml.
 */
void CreateUserPoolResponsePrivate::parseCreateUserPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserPoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
