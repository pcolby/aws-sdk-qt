// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetableobjectsrequest.h"
#include "updatetableobjectsrequest_p.h"
#include "updatetableobjectsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::UpdateTableObjectsRequest
 * \brief The UpdateTableObjectsRequest class provides an interface for LakeFormation UpdateTableObjects requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::updateTableObjects
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTableObjectsRequest::UpdateTableObjectsRequest(const UpdateTableObjectsRequest &other)
    : LakeFormationRequest(new UpdateTableObjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTableObjectsRequest object.
 */
UpdateTableObjectsRequest::UpdateTableObjectsRequest()
    : LakeFormationRequest(new UpdateTableObjectsRequestPrivate(LakeFormationRequest::UpdateTableObjectsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTableObjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTableObjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTableObjectsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTableObjectsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::UpdateTableObjectsRequestPrivate
 * \brief The UpdateTableObjectsRequestPrivate class provides private implementation for UpdateTableObjectsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a UpdateTableObjectsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
UpdateTableObjectsRequestPrivate::UpdateTableObjectsRequestPrivate(
    const LakeFormationRequest::Action action, UpdateTableObjectsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTableObjectsRequest
 * class' copy constructor.
 */
UpdateTableObjectsRequestPrivate::UpdateTableObjectsRequestPrivate(
    const UpdateTableObjectsRequestPrivate &other, UpdateTableObjectsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
