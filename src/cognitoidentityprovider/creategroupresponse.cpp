// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategroupresponse.h"
#include "creategroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateGroupResponse
 * \brief The CreateGroupResponse class provides an interace for CognitoIdentityProvider CreateGroup responses.
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
 * \sa CognitoIdentityProviderClient::createGroup
 */

/*!
 * Constructs a CreateGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGroupResponse::CreateGroupResponse(
        const CreateGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateGroupResponsePrivate(this), parent)
{
    setRequest(new CreateGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGroupRequest * CreateGroupResponse::request() const
{
    Q_D(const CreateGroupResponse);
    return static_cast<const CreateGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider CreateGroup \a response.
 */
void CreateGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateGroupResponsePrivate
 * \brief The CreateGroupResponsePrivate class provides private implementation for CreateGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateGroupResponsePrivate object with public implementation \a q.
 */
CreateGroupResponsePrivate::CreateGroupResponsePrivate(
    CreateGroupResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider CreateGroup response element from \a xml.
 */
void CreateGroupResponsePrivate::parseCreateGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
