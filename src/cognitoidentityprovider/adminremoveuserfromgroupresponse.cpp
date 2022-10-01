// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminremoveuserfromgroupresponse.h"
#include "adminremoveuserfromgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRemoveUserFromGroupResponse
 * \brief The AdminRemoveUserFromGroupResponse class provides an interace for CognitoIdentityProvider AdminRemoveUserFromGroup responses.
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
 * \sa CognitoIdentityProviderClient::adminRemoveUserFromGroup
 */

/*!
 * Constructs a AdminRemoveUserFromGroupResponse object for \a reply to \a request, with parent \a parent.
 */
AdminRemoveUserFromGroupResponse::AdminRemoveUserFromGroupResponse(
        const AdminRemoveUserFromGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminRemoveUserFromGroupResponsePrivate(this), parent)
{
    setRequest(new AdminRemoveUserFromGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminRemoveUserFromGroupRequest * AdminRemoveUserFromGroupResponse::request() const
{
    Q_D(const AdminRemoveUserFromGroupResponse);
    return static_cast<const AdminRemoveUserFromGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminRemoveUserFromGroup \a response.
 */
void AdminRemoveUserFromGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminRemoveUserFromGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRemoveUserFromGroupResponsePrivate
 * \brief The AdminRemoveUserFromGroupResponsePrivate class provides private implementation for AdminRemoveUserFromGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminRemoveUserFromGroupResponsePrivate object with public implementation \a q.
 */
AdminRemoveUserFromGroupResponsePrivate::AdminRemoveUserFromGroupResponsePrivate(
    AdminRemoveUserFromGroupResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminRemoveUserFromGroup response element from \a xml.
 */
void AdminRemoveUserFromGroupResponsePrivate::parseAdminRemoveUserFromGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminRemoveUserFromGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
