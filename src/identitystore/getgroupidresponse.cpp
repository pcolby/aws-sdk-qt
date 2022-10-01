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

#include "getgroupidresponse.h"
#include "getgroupidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::GetGroupIdResponse
 * \brief The GetGroupIdResponse class provides an interace for IdentityStore GetGroupId responses.
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
 * \sa IdentityStoreClient::getGroupId
 */

/*!
 * Constructs a GetGroupIdResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupIdResponse::GetGroupIdResponse(
        const GetGroupIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IdentityStoreResponse(new GetGroupIdResponsePrivate(this), parent)
{
    setRequest(new GetGroupIdRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupIdRequest * GetGroupIdResponse::request() const
{
    Q_D(const GetGroupIdResponse);
    return static_cast<const GetGroupIdRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IdentityStore GetGroupId \a response.
 */
void GetGroupIdResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGroupIdResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IdentityStore::GetGroupIdResponsePrivate
 * \brief The GetGroupIdResponsePrivate class provides private implementation for GetGroupIdResponse.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a GetGroupIdResponsePrivate object with public implementation \a q.
 */
GetGroupIdResponsePrivate::GetGroupIdResponsePrivate(
    GetGroupIdResponse * const q) : IdentityStoreResponsePrivate(q)
{

}

/*!
 * Parses a IdentityStore GetGroupId response element from \a xml.
 */
void GetGroupIdResponsePrivate::parseGetGroupIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupIdResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IdentityStore
} // namespace QtAws
