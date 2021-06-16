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

#include "registerresourcerequest.h"
#include "registerresourcerequest_p.h"
#include "registerresourceresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::RegisterResourceRequest
 * \brief The RegisterResourceRequest class provides an interface for LakeFormation RegisterResource requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::registerResource
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterResourceRequest::RegisterResourceRequest(const RegisterResourceRequest &other)
    : LakeFormationRequest(new RegisterResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterResourceRequest object.
 */
RegisterResourceRequest::RegisterResourceRequest()
    : LakeFormationRequest(new RegisterResourceRequestPrivate(LakeFormationRequest::RegisterResourceAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterResourceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::RegisterResourceRequestPrivate
 * \brief The RegisterResourceRequestPrivate class provides private implementation for RegisterResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a RegisterResourceRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
RegisterResourceRequestPrivate::RegisterResourceRequestPrivate(
    const LakeFormationRequest::Action action, RegisterResourceRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterResourceRequest
 * class' copy constructor.
 */
RegisterResourceRequestPrivate::RegisterResourceRequestPrivate(
    const RegisterResourceRequestPrivate &other, RegisterResourceRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
