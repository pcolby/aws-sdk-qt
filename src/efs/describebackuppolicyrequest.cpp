// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebackuppolicyrequest.h"
#include "describebackuppolicyrequest_p.h"
#include "describebackuppolicyresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeBackupPolicyRequest
 * \brief The DescribeBackupPolicyRequest class provides an interface for Efs DescribeBackupPolicy requests.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::describeBackupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBackupPolicyRequest::DescribeBackupPolicyRequest(const DescribeBackupPolicyRequest &other)
    : EfsRequest(new DescribeBackupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBackupPolicyRequest object.
 */
DescribeBackupPolicyRequest::DescribeBackupPolicyRequest()
    : EfsRequest(new DescribeBackupPolicyRequestPrivate(EfsRequest::DescribeBackupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBackupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBackupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBackupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBackupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Efs::DescribeBackupPolicyRequestPrivate
 * \brief The DescribeBackupPolicyRequestPrivate class provides private implementation for DescribeBackupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeBackupPolicyRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
DescribeBackupPolicyRequestPrivate::DescribeBackupPolicyRequestPrivate(
    const EfsRequest::Action action, DescribeBackupPolicyRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBackupPolicyRequest
 * class' copy constructor.
 */
DescribeBackupPolicyRequestPrivate::DescribeBackupPolicyRequestPrivate(
    const DescribeBackupPolicyRequestPrivate &other, DescribeBackupPolicyRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
