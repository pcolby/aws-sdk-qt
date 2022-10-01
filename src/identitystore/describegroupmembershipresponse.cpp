// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegroupmembershipresponse.h"
#include "describegroupmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::DescribeGroupMembershipResponse
 * \brief The DescribeGroupMembershipResponse class provides an interace for IdentityStore DescribeGroupMembership responses.
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
 * \sa IdentityStoreClient::describeGroupMembership
 */

/*!
 * Constructs a DescribeGroupMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGroupMembershipResponse::DescribeGroupMembershipResponse(
        const DescribeGroupMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IdentityStoreResponse(new DescribeGroupMembershipResponsePrivate(this), parent)
{
    setRequest(new DescribeGroupMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGroupMembershipRequest * DescribeGroupMembershipResponse::request() const
{
    Q_D(const DescribeGroupMembershipResponse);
    return static_cast<const DescribeGroupMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IdentityStore DescribeGroupMembership \a response.
 */
void DescribeGroupMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGroupMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IdentityStore::DescribeGroupMembershipResponsePrivate
 * \brief The DescribeGroupMembershipResponsePrivate class provides private implementation for DescribeGroupMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a DescribeGroupMembershipResponsePrivate object with public implementation \a q.
 */
DescribeGroupMembershipResponsePrivate::DescribeGroupMembershipResponsePrivate(
    DescribeGroupMembershipResponse * const q) : IdentityStoreResponsePrivate(q)
{

}

/*!
 * Parses a IdentityStore DescribeGroupMembership response element from \a xml.
 */
void DescribeGroupMembershipResponsePrivate::parseDescribeGroupMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGroupMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IdentityStore
} // namespace QtAws
