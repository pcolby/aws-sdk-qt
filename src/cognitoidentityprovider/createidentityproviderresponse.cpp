// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createidentityproviderresponse.h"
#include "createidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateIdentityProviderResponse
 * \brief The CreateIdentityProviderResponse class provides an interace for CognitoIdentityProvider CreateIdentityProvider responses.
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
 * \sa CognitoIdentityProviderClient::createIdentityProvider
 */

/*!
 * Constructs a CreateIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIdentityProviderResponse::CreateIdentityProviderResponse(
        const CreateIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new CreateIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIdentityProviderRequest * CreateIdentityProviderResponse::request() const
{
    Q_D(const CreateIdentityProviderResponse);
    return static_cast<const CreateIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider CreateIdentityProvider \a response.
 */
void CreateIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateIdentityProviderResponsePrivate
 * \brief The CreateIdentityProviderResponsePrivate class provides private implementation for CreateIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateIdentityProviderResponsePrivate object with public implementation \a q.
 */
CreateIdentityProviderResponsePrivate::CreateIdentityProviderResponsePrivate(
    CreateIdentityProviderResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider CreateIdentityProvider response element from \a xml.
 */
void CreateIdentityProviderResponsePrivate::parseCreateIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
