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

#include "describeresourcerequest.h"
#include "describeresourcerequest_p.h"
#include "describeresourceresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DescribeResourceRequest
 * \brief The DescribeResourceRequest class provides an interface for LakeFormation DescribeResource requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::describeResource
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeResourceRequest::DescribeResourceRequest(const DescribeResourceRequest &other)
    : LakeFormationRequest(new DescribeResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeResourceRequest object.
 */
DescribeResourceRequest::DescribeResourceRequest()
    : LakeFormationRequest(new DescribeResourceRequestPrivate(LakeFormationRequest::DescribeResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeResourceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::DescribeResourceRequestPrivate
 * \brief The DescribeResourceRequestPrivate class provides private implementation for DescribeResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DescribeResourceRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
DescribeResourceRequestPrivate::DescribeResourceRequestPrivate(
    const LakeFormationRequest::Action action, DescribeResourceRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeResourceRequest
 * class' copy constructor.
 */
DescribeResourceRequestPrivate::DescribeResourceRequestPrivate(
    const DescribeResourceRequestPrivate &other, DescribeResourceRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
