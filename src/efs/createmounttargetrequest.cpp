// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmounttargetrequest.h"
#include "createmounttargetrequest_p.h"
#include "createmounttargetresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::CreateMountTargetRequest
 * \brief The CreateMountTargetRequest class provides an interface for Efs CreateMountTarget requests.
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
 * \sa EfsClient::createMountTarget
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMountTargetRequest::CreateMountTargetRequest(const CreateMountTargetRequest &other)
    : EfsRequest(new CreateMountTargetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMountTargetRequest object.
 */
CreateMountTargetRequest::CreateMountTargetRequest()
    : EfsRequest(new CreateMountTargetRequestPrivate(EfsRequest::CreateMountTargetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMountTargetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMountTargetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMountTargetRequest::response(QNetworkReply * const reply) const
{
    return new CreateMountTargetResponse(*this, reply);
}

/*!
 * \class QtAws::Efs::CreateMountTargetRequestPrivate
 * \brief The CreateMountTargetRequestPrivate class provides private implementation for CreateMountTargetRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a CreateMountTargetRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
CreateMountTargetRequestPrivate::CreateMountTargetRequestPrivate(
    const EfsRequest::Action action, CreateMountTargetRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMountTargetRequest
 * class' copy constructor.
 */
CreateMountTargetRequestPrivate::CreateMountTargetRequestPrivate(
    const CreateMountTargetRequestPrivate &other, CreateMountTargetRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
