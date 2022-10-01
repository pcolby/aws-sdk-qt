// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourceserverresponse.h"
#include "createresourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateResourceServerResponse
 * \brief The CreateResourceServerResponse class provides an interace for CognitoIdentityProvider CreateResourceServer responses.
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
 * \sa CognitoIdentityProviderClient::createResourceServer
 */

/*!
 * Constructs a CreateResourceServerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourceServerResponse::CreateResourceServerResponse(
        const CreateResourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateResourceServerResponsePrivate(this), parent)
{
    setRequest(new CreateResourceServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourceServerRequest * CreateResourceServerResponse::request() const
{
    Q_D(const CreateResourceServerResponse);
    return static_cast<const CreateResourceServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider CreateResourceServer \a response.
 */
void CreateResourceServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourceServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateResourceServerResponsePrivate
 * \brief The CreateResourceServerResponsePrivate class provides private implementation for CreateResourceServerResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateResourceServerResponsePrivate object with public implementation \a q.
 */
CreateResourceServerResponsePrivate::CreateResourceServerResponsePrivate(
    CreateResourceServerResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider CreateResourceServer response element from \a xml.
 */
void CreateResourceServerResponsePrivate::parseCreateResourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
