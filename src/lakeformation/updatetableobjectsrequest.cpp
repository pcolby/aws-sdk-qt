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
