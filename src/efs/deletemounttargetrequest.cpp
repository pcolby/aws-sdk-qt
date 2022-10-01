// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemounttargetrequest.h"
#include "deletemounttargetrequest_p.h"
#include "deletemounttargetresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DeleteMountTargetRequest
 * \brief The DeleteMountTargetRequest class provides an interface for Efs DeleteMountTarget requests.
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
 * \sa EfsClient::deleteMountTarget
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMountTargetRequest::DeleteMountTargetRequest(const DeleteMountTargetRequest &other)
    : EfsRequest(new DeleteMountTargetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMountTargetRequest object.
 */
DeleteMountTargetRequest::DeleteMountTargetRequest()
    : EfsRequest(new DeleteMountTargetRequestPrivate(EfsRequest::DeleteMountTargetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMountTargetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMountTargetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMountTargetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMountTargetResponse(*this, reply);
}

/*!
 * \class QtAws::Efs::DeleteMountTargetRequestPrivate
 * \brief The DeleteMountTargetRequestPrivate class provides private implementation for DeleteMountTargetRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DeleteMountTargetRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
DeleteMountTargetRequestPrivate::DeleteMountTargetRequestPrivate(
    const EfsRequest::Action action, DeleteMountTargetRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMountTargetRequest
 * class' copy constructor.
 */
DeleteMountTargetRequestPrivate::DeleteMountTargetRequestPrivate(
    const DeleteMountTargetRequestPrivate &other, DeleteMountTargetRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
