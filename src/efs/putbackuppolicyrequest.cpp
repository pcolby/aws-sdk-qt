// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbackuppolicyrequest.h"
#include "putbackuppolicyrequest_p.h"
#include "putbackuppolicyresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::PutBackupPolicyRequest
 * \brief The PutBackupPolicyRequest class provides an interface for Efs PutBackupPolicy requests.
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
 * \sa EfsClient::putBackupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutBackupPolicyRequest::PutBackupPolicyRequest(const PutBackupPolicyRequest &other)
    : EfsRequest(new PutBackupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBackupPolicyRequest object.
 */
PutBackupPolicyRequest::PutBackupPolicyRequest()
    : EfsRequest(new PutBackupPolicyRequestPrivate(EfsRequest::PutBackupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutBackupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBackupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBackupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutBackupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Efs::PutBackupPolicyRequestPrivate
 * \brief The PutBackupPolicyRequestPrivate class provides private implementation for PutBackupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a PutBackupPolicyRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
PutBackupPolicyRequestPrivate::PutBackupPolicyRequestPrivate(
    const EfsRequest::Action action, PutBackupPolicyRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBackupPolicyRequest
 * class' copy constructor.
 */
PutBackupPolicyRequestPrivate::PutBackupPolicyRequestPrivate(
    const PutBackupPolicyRequestPrivate &other, PutBackupPolicyRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
