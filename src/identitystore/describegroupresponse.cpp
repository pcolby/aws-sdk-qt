// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegroupresponse.h"
#include "describegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::DescribeGroupResponse
 * \brief The DescribeGroupResponse class provides an interace for IdentityStore DescribeGroup responses.
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
 * \sa IdentityStoreClient::describeGroup
 */

/*!
 * Constructs a DescribeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGroupResponse::DescribeGroupResponse(
        const DescribeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IdentityStoreResponse(new DescribeGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGroupRequest * DescribeGroupResponse::request() const
{
    Q_D(const DescribeGroupResponse);
    return static_cast<const DescribeGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IdentityStore DescribeGroup \a response.
 */
void DescribeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IdentityStore::DescribeGroupResponsePrivate
 * \brief The DescribeGroupResponsePrivate class provides private implementation for DescribeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a DescribeGroupResponsePrivate object with public implementation \a q.
 */
DescribeGroupResponsePrivate::DescribeGroupResponsePrivate(
    DescribeGroupResponse * const q) : IdentityStoreResponsePrivate(q)
{

}

/*!
 * Parses a IdentityStore DescribeGroup response element from \a xml.
 */
void DescribeGroupResponsePrivate::parseDescribeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IdentityStore
} // namespace QtAws
