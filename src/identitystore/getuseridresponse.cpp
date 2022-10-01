/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getuseridresponse.h"
#include "getuseridresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::GetUserIdResponse
 * \brief The GetUserIdResponse class provides an interace for IdentityStore GetUserId responses.
 *
 * \inmodule QtAwsIdentityStore
 *
 *  The Identity Store service used by AWS IAM Identity Center (successor to AWS Single Sign-On) provides a single place to
 *  retrieve all of your identities (users and groups). For more information, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM Identity Center User
 * 
 *  Guide</a>> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide describes the identity store operations that you can call programatically and includes detailed
 *  information on data types and
 *
 * \sa IdentityStoreClient::getUserId
 */

/*!
 * Constructs a GetUserIdResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserIdResponse::GetUserIdResponse(
        const GetUserIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IdentityStoreResponse(new GetUserIdResponsePrivate(this), parent)
{
    setRequest(new GetUserIdRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserIdRequest * GetUserIdResponse::request() const
{
    Q_D(const GetUserIdResponse);
    return static_cast<const GetUserIdRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IdentityStore GetUserId \a response.
 */
void GetUserIdResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserIdResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IdentityStore::GetUserIdResponsePrivate
 * \brief The GetUserIdResponsePrivate class provides private implementation for GetUserIdResponse.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a GetUserIdResponsePrivate object with public implementation \a q.
 */
GetUserIdResponsePrivate::GetUserIdResponsePrivate(
    GetUserIdResponse * const q) : IdentityStoreResponsePrivate(q)
{

}

/*!
 * Parses a IdentityStore GetUserId response element from \a xml.
 */
void GetUserIdResponsePrivate::parseGetUserIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserIdResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IdentityStore
} // namespace QtAws
