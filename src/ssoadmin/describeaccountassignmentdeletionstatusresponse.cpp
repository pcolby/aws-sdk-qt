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

#include "describeaccountassignmentdeletionstatusresponse.h"
#include "describeaccountassignmentdeletionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsoAdmin {

/*!
 * \class QtAws::SsoAdmin::DescribeAccountAssignmentDeletionStatusResponse
 * \brief The DescribeAccountAssignmentDeletionStatusResponse class provides an interace for SsoAdmin DescribeAccountAssignmentDeletionStatus responses.
 *
 * \inmodule QtAwsSsoAdmin
 *
 *  AWS IAM Identity Center (successor to AWS Single Sign-On) helps you securely create, or connect, your workforce
 *  identities and manage their access centrally across AWS accounts and applications. IAM Identity Center is the
 *  recommended approach for workforce authentication and authorization in AWS, for organizations of any size and
 * 
 *  type> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide provides information on single sign-on operations which could be used for access management of AWS
 *  accounts. For information about IAM Identity Center features, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM Identity Center User
 * 
 *  Guide</a>>
 * 
 *  Many operations in the IAM Identity Center APIs rely on identifiers for users and groups, known as principals. For more
 *  information about how to work with principals and principal IDs in IAM Identity Center, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/welcome.html">Identity Store API
 * 
 *  Reference</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, and more). The SDKs provide a convenient way to create programmatic access to IAM Identity Center
 *  and other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa SsoAdminClient::describeAccountAssignmentDeletionStatus
 */

/*!
 * Constructs a DescribeAccountAssignmentDeletionStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountAssignmentDeletionStatusResponse::DescribeAccountAssignmentDeletionStatusResponse(
        const DescribeAccountAssignmentDeletionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsoAdminResponse(new DescribeAccountAssignmentDeletionStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountAssignmentDeletionStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountAssignmentDeletionStatusRequest * DescribeAccountAssignmentDeletionStatusResponse::request() const
{
    Q_D(const DescribeAccountAssignmentDeletionStatusResponse);
    return static_cast<const DescribeAccountAssignmentDeletionStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsoAdmin DescribeAccountAssignmentDeletionStatus \a response.
 */
void DescribeAccountAssignmentDeletionStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountAssignmentDeletionStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsoAdmin::DescribeAccountAssignmentDeletionStatusResponsePrivate
 * \brief The DescribeAccountAssignmentDeletionStatusResponsePrivate class provides private implementation for DescribeAccountAssignmentDeletionStatusResponse.
 * \internal
 *
 * \inmodule QtAwsSsoAdmin
 */

/*!
 * Constructs a DescribeAccountAssignmentDeletionStatusResponsePrivate object with public implementation \a q.
 */
DescribeAccountAssignmentDeletionStatusResponsePrivate::DescribeAccountAssignmentDeletionStatusResponsePrivate(
    DescribeAccountAssignmentDeletionStatusResponse * const q) : SsoAdminResponsePrivate(q)
{

}

/*!
 * Parses a SsoAdmin DescribeAccountAssignmentDeletionStatus response element from \a xml.
 */
void DescribeAccountAssignmentDeletionStatusResponsePrivate::parseDescribeAccountAssignmentDeletionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountAssignmentDeletionStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsoAdmin
} // namespace QtAws
