// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjectsoncancelrequest.h"
#include "deleteobjectsoncancelrequest_p.h"
#include "deleteobjectsoncancelresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeleteObjectsOnCancelRequest
 * \brief The DeleteObjectsOnCancelRequest class provides an interface for LakeFormation DeleteObjectsOnCancel requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::deleteObjectsOnCancel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteObjectsOnCancelRequest::DeleteObjectsOnCancelRequest(const DeleteObjectsOnCancelRequest &other)
    : LakeFormationRequest(new DeleteObjectsOnCancelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteObjectsOnCancelRequest object.
 */
DeleteObjectsOnCancelRequest::DeleteObjectsOnCancelRequest()
    : LakeFormationRequest(new DeleteObjectsOnCancelRequestPrivate(LakeFormationRequest::DeleteObjectsOnCancelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteObjectsOnCancelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteObjectsOnCancelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteObjectsOnCancelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectsOnCancelResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::DeleteObjectsOnCancelRequestPrivate
 * \brief The DeleteObjectsOnCancelRequestPrivate class provides private implementation for DeleteObjectsOnCancelRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeleteObjectsOnCancelRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
DeleteObjectsOnCancelRequestPrivate::DeleteObjectsOnCancelRequestPrivate(
    const LakeFormationRequest::Action action, DeleteObjectsOnCancelRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectsOnCancelRequest
 * class' copy constructor.
 */
DeleteObjectsOnCancelRequestPrivate::DeleteObjectsOnCancelRequestPrivate(
    const DeleteObjectsOnCancelRequestPrivate &other, DeleteObjectsOnCancelRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
