// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupmembershipsresponse.h"
#include "listgroupmembershipsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::ListGroupMembershipsResponse
 * \brief The ListGroupMembershipsResponse class provides an interace for IdentityStore ListGroupMemberships responses.
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
 * \sa IdentityStoreClient::listGroupMemberships
 */

/*!
 * Constructs a ListGroupMembershipsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupMembershipsResponse::ListGroupMembershipsResponse(
        const ListGroupMembershipsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IdentityStoreResponse(new ListGroupMembershipsResponsePrivate(this), parent)
{
    setRequest(new ListGroupMembershipsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupMembershipsRequest * ListGroupMembershipsResponse::request() const
{
    Q_D(const ListGroupMembershipsResponse);
    return static_cast<const ListGroupMembershipsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IdentityStore ListGroupMemberships \a response.
 */
void ListGroupMembershipsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroupMembershipsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IdentityStore::ListGroupMembershipsResponsePrivate
 * \brief The ListGroupMembershipsResponsePrivate class provides private implementation for ListGroupMembershipsResponse.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a ListGroupMembershipsResponsePrivate object with public implementation \a q.
 */
ListGroupMembershipsResponsePrivate::ListGroupMembershipsResponsePrivate(
    ListGroupMembershipsResponse * const q) : IdentityStoreResponsePrivate(q)
{

}

/*!
 * Parses a IdentityStore ListGroupMemberships response element from \a xml.
 */
void ListGroupMembershipsResponsePrivate::parseListGroupMembershipsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupMembershipsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IdentityStore
} // namespace QtAws
