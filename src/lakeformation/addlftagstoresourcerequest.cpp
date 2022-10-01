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

#include "addlftagstoresourcerequest.h"
#include "addlftagstoresourcerequest_p.h"
#include "addlftagstoresourceresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::AddLFTagsToResourceRequest
 * \brief The AddLFTagsToResourceRequest class provides an interface for LakeFormation AddLFTagsToResource requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::addLFTagsToResource
 */

/*!
 * Constructs a copy of \a other.
 */
AddLFTagsToResourceRequest::AddLFTagsToResourceRequest(const AddLFTagsToResourceRequest &other)
    : LakeFormationRequest(new AddLFTagsToResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddLFTagsToResourceRequest object.
 */
AddLFTagsToResourceRequest::AddLFTagsToResourceRequest()
    : LakeFormationRequest(new AddLFTagsToResourceRequestPrivate(LakeFormationRequest::AddLFTagsToResourceAction, this))
{

}

/*!
 * \reimp
 */
bool AddLFTagsToResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddLFTagsToResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddLFTagsToResourceRequest::response(QNetworkReply * const reply) const
{
    return new AddLFTagsToResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::AddLFTagsToResourceRequestPrivate
 * \brief The AddLFTagsToResourceRequestPrivate class provides private implementation for AddLFTagsToResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a AddLFTagsToResourceRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
AddLFTagsToResourceRequestPrivate::AddLFTagsToResourceRequestPrivate(
    const LakeFormationRequest::Action action, AddLFTagsToResourceRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddLFTagsToResourceRequest
 * class' copy constructor.
 */
AddLFTagsToResourceRequestPrivate::AddLFTagsToResourceRequestPrivate(
    const AddLFTagsToResourceRequestPrivate &other, AddLFTagsToResourceRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
