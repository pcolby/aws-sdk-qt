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

#include "removelftagsfromresourcerequest.h"
#include "removelftagsfromresourcerequest_p.h"
#include "removelftagsfromresourceresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::RemoveLFTagsFromResourceRequest
 * \brief The RemoveLFTagsFromResourceRequest class provides an interface for LakeFormation RemoveLFTagsFromResource requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::removeLFTagsFromResource
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveLFTagsFromResourceRequest::RemoveLFTagsFromResourceRequest(const RemoveLFTagsFromResourceRequest &other)
    : LakeFormationRequest(new RemoveLFTagsFromResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveLFTagsFromResourceRequest object.
 */
RemoveLFTagsFromResourceRequest::RemoveLFTagsFromResourceRequest()
    : LakeFormationRequest(new RemoveLFTagsFromResourceRequestPrivate(LakeFormationRequest::RemoveLFTagsFromResourceAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveLFTagsFromResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveLFTagsFromResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveLFTagsFromResourceRequest::response(QNetworkReply * const reply) const
{
    return new RemoveLFTagsFromResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::RemoveLFTagsFromResourceRequestPrivate
 * \brief The RemoveLFTagsFromResourceRequestPrivate class provides private implementation for RemoveLFTagsFromResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a RemoveLFTagsFromResourceRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
RemoveLFTagsFromResourceRequestPrivate::RemoveLFTagsFromResourceRequestPrivate(
    const LakeFormationRequest::Action action, RemoveLFTagsFromResourceRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveLFTagsFromResourceRequest
 * class' copy constructor.
 */
RemoveLFTagsFromResourceRequestPrivate::RemoveLFTagsFromResourceRequestPrivate(
    const RemoveLFTagsFromResourceRequestPrivate &other, RemoveLFTagsFromResourceRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
