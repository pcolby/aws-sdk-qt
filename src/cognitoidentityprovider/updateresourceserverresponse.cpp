// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourceserverresponse.h"
#include "updateresourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateResourceServerResponse
 * \brief The UpdateResourceServerResponse class provides an interace for CognitoIdentityProvider UpdateResourceServer responses.
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
 * \sa CognitoIdentityProviderClient::updateResourceServer
 */

/*!
 * Constructs a UpdateResourceServerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourceServerResponse::UpdateResourceServerResponse(
        const UpdateResourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateResourceServerResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourceServerRequest * UpdateResourceServerResponse::request() const
{
    Q_D(const UpdateResourceServerResponse);
    return static_cast<const UpdateResourceServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider UpdateResourceServer \a response.
 */
void UpdateResourceServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourceServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateResourceServerResponsePrivate
 * \brief The UpdateResourceServerResponsePrivate class provides private implementation for UpdateResourceServerResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateResourceServerResponsePrivate object with public implementation \a q.
 */
UpdateResourceServerResponsePrivate::UpdateResourceServerResponsePrivate(
    UpdateResourceServerResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider UpdateResourceServer response element from \a xml.
 */
void UpdateResourceServerResponsePrivate::parseUpdateResourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
