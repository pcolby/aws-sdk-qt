// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegroupmembershipresponse.h"
#include "deletegroupmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::DeleteGroupMembershipResponse
 * \brief The DeleteGroupMembershipResponse class provides an interace for IdentityStore DeleteGroupMembership responses.
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
 * \sa IdentityStoreClient::deleteGroupMembership
 */

/*!
 * Constructs a DeleteGroupMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGroupMembershipResponse::DeleteGroupMembershipResponse(
        const DeleteGroupMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IdentityStoreResponse(new DeleteGroupMembershipResponsePrivate(this), parent)
{
    setRequest(new DeleteGroupMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGroupMembershipRequest * DeleteGroupMembershipResponse::request() const
{
    Q_D(const DeleteGroupMembershipResponse);
    return static_cast<const DeleteGroupMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IdentityStore DeleteGroupMembership \a response.
 */
void DeleteGroupMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGroupMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IdentityStore::DeleteGroupMembershipResponsePrivate
 * \brief The DeleteGroupMembershipResponsePrivate class provides private implementation for DeleteGroupMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a DeleteGroupMembershipResponsePrivate object with public implementation \a q.
 */
DeleteGroupMembershipResponsePrivate::DeleteGroupMembershipResponsePrivate(
    DeleteGroupMembershipResponse * const q) : IdentityStoreResponsePrivate(q)
{

}

/*!
 * Parses a IdentityStore DeleteGroupMembership response element from \a xml.
 */
void DeleteGroupMembershipResponsePrivate::parseDeleteGroupMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGroupMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IdentityStore
} // namespace QtAws
