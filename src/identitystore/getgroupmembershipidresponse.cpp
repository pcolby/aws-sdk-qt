// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgroupmembershipidresponse.h"
#include "getgroupmembershipidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::GetGroupMembershipIdResponse
 * \brief The GetGroupMembershipIdResponse class provides an interace for IdentityStore GetGroupMembershipId responses.
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
 * \sa IdentityStoreClient::getGroupMembershipId
 */

/*!
 * Constructs a GetGroupMembershipIdResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupMembershipIdResponse::GetGroupMembershipIdResponse(
        const GetGroupMembershipIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IdentityStoreResponse(new GetGroupMembershipIdResponsePrivate(this), parent)
{
    setRequest(new GetGroupMembershipIdRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupMembershipIdRequest * GetGroupMembershipIdResponse::request() const
{
    Q_D(const GetGroupMembershipIdResponse);
    return static_cast<const GetGroupMembershipIdRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IdentityStore GetGroupMembershipId \a response.
 */
void GetGroupMembershipIdResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGroupMembershipIdResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IdentityStore::GetGroupMembershipIdResponsePrivate
 * \brief The GetGroupMembershipIdResponsePrivate class provides private implementation for GetGroupMembershipIdResponse.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a GetGroupMembershipIdResponsePrivate object with public implementation \a q.
 */
GetGroupMembershipIdResponsePrivate::GetGroupMembershipIdResponsePrivate(
    GetGroupMembershipIdResponse * const q) : IdentityStoreResponsePrivate(q)
{

}

/*!
 * Parses a IdentityStore GetGroupMembershipId response element from \a xml.
 */
void GetGroupMembershipIdResponsePrivate::parseGetGroupMembershipIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupMembershipIdResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IdentityStore
} // namespace QtAws
