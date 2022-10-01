// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusersingroupresponse.h"
#include "listusersingroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListUsersInGroupResponse
 * \brief The ListUsersInGroupResponse class provides an interace for CognitoIdentityProvider ListUsersInGroup responses.
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
 * \sa CognitoIdentityProviderClient::listUsersInGroup
 */

/*!
 * Constructs a ListUsersInGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ListUsersInGroupResponse::ListUsersInGroupResponse(
        const ListUsersInGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListUsersInGroupResponsePrivate(this), parent)
{
    setRequest(new ListUsersInGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUsersInGroupRequest * ListUsersInGroupResponse::request() const
{
    Q_D(const ListUsersInGroupResponse);
    return static_cast<const ListUsersInGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ListUsersInGroup \a response.
 */
void ListUsersInGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUsersInGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListUsersInGroupResponsePrivate
 * \brief The ListUsersInGroupResponsePrivate class provides private implementation for ListUsersInGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListUsersInGroupResponsePrivate object with public implementation \a q.
 */
ListUsersInGroupResponsePrivate::ListUsersInGroupResponsePrivate(
    ListUsersInGroupResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ListUsersInGroup response element from \a xml.
 */
void ListUsersInGroupResponsePrivate::parseListUsersInGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsersInGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
