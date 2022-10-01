// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategroupmembershipresponse.h"
#include "creategroupmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::CreateGroupMembershipResponse
 * \brief The CreateGroupMembershipResponse class provides an interace for IdentityStore CreateGroupMembership responses.
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
 * \sa IdentityStoreClient::createGroupMembership
 */

/*!
 * Constructs a CreateGroupMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGroupMembershipResponse::CreateGroupMembershipResponse(
        const CreateGroupMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IdentityStoreResponse(new CreateGroupMembershipResponsePrivate(this), parent)
{
    setRequest(new CreateGroupMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGroupMembershipRequest * CreateGroupMembershipResponse::request() const
{
    Q_D(const CreateGroupMembershipResponse);
    return static_cast<const CreateGroupMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IdentityStore CreateGroupMembership \a response.
 */
void CreateGroupMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGroupMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IdentityStore::CreateGroupMembershipResponsePrivate
 * \brief The CreateGroupMembershipResponsePrivate class provides private implementation for CreateGroupMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a CreateGroupMembershipResponsePrivate object with public implementation \a q.
 */
CreateGroupMembershipResponsePrivate::CreateGroupMembershipResponsePrivate(
    CreateGroupMembershipResponse * const q) : IdentityStoreResponsePrivate(q)
{

}

/*!
 * Parses a IdentityStore CreateGroupMembership response element from \a xml.
 */
void CreateGroupMembershipResponsePrivate::parseCreateGroupMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGroupMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IdentityStore
} // namespace QtAws
