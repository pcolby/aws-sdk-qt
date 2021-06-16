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

#include "deregisterresourcerequest.h"
#include "deregisterresourcerequest_p.h"
#include "deregisterresourceresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeregisterResourceRequest
 * \brief The DeregisterResourceRequest class provides an interface for LakeFormation DeregisterResource requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::deregisterResource
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterResourceRequest::DeregisterResourceRequest(const DeregisterResourceRequest &other)
    : LakeFormationRequest(new DeregisterResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterResourceRequest object.
 */
DeregisterResourceRequest::DeregisterResourceRequest()
    : LakeFormationRequest(new DeregisterResourceRequestPrivate(LakeFormationRequest::DeregisterResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterResourceRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::DeregisterResourceRequestPrivate
 * \brief The DeregisterResourceRequestPrivate class provides private implementation for DeregisterResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeregisterResourceRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
DeregisterResourceRequestPrivate::DeregisterResourceRequestPrivate(
    const LakeFormationRequest::Action action, DeregisterResourceRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterResourceRequest
 * class' copy constructor.
 */
DeregisterResourceRequestPrivate::DeregisterResourceRequestPrivate(
    const DeregisterResourceRequestPrivate &other, DeregisterResourceRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
