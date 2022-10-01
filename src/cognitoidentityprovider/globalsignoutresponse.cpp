// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "globalsignoutresponse.h"
#include "globalsignoutresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GlobalSignOutResponse
 * \brief The GlobalSignOutResponse class provides an interace for CognitoIdentityProvider GlobalSignOut responses.
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
 * \sa CognitoIdentityProviderClient::globalSignOut
 */

/*!
 * Constructs a GlobalSignOutResponse object for \a reply to \a request, with parent \a parent.
 */
GlobalSignOutResponse::GlobalSignOutResponse(
        const GlobalSignOutRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GlobalSignOutResponsePrivate(this), parent)
{
    setRequest(new GlobalSignOutRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GlobalSignOutRequest * GlobalSignOutResponse::request() const
{
    Q_D(const GlobalSignOutResponse);
    return static_cast<const GlobalSignOutRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider GlobalSignOut \a response.
 */
void GlobalSignOutResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GlobalSignOutResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::GlobalSignOutResponsePrivate
 * \brief The GlobalSignOutResponsePrivate class provides private implementation for GlobalSignOutResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GlobalSignOutResponsePrivate object with public implementation \a q.
 */
GlobalSignOutResponsePrivate::GlobalSignOutResponsePrivate(
    GlobalSignOutResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider GlobalSignOut response element from \a xml.
 */
void GlobalSignOutResponsePrivate::parseGlobalSignOutResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GlobalSignOutResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
