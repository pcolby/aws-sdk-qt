/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteservicelinkedrolerequest.h"
#include "deleteservicelinkedrolerequest_p.h"
#include "deleteservicelinkedroleresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteServiceLinkedRoleRequest
 * \brief The DeleteServiceLinkedRoleRequest class provides an interface for CloudFront DeleteServiceLinkedRole requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteServiceLinkedRole
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServiceLinkedRoleRequest::DeleteServiceLinkedRoleRequest(const DeleteServiceLinkedRoleRequest &other)
    : CloudFrontRequest(new DeleteServiceLinkedRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServiceLinkedRoleRequest object.
 */
DeleteServiceLinkedRoleRequest::DeleteServiceLinkedRoleRequest()
    : CloudFrontRequest(new DeleteServiceLinkedRoleRequestPrivate(CloudFrontRequest::DeleteServiceLinkedRoleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServiceLinkedRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServiceLinkedRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServiceLinkedRoleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceLinkedRoleResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteServiceLinkedRoleRequestPrivate
 * \brief The DeleteServiceLinkedRoleRequestPrivate class provides private implementation for DeleteServiceLinkedRoleRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteServiceLinkedRoleRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteServiceLinkedRoleRequestPrivate::DeleteServiceLinkedRoleRequestPrivate(
    const CloudFrontRequest::Action action, DeleteServiceLinkedRoleRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceLinkedRoleRequest
 * class' copy constructor.
 */
DeleteServiceLinkedRoleRequestPrivate::DeleteServiceLinkedRoleRequestPrivate(
    const DeleteServiceLinkedRoleRequestPrivate &other, DeleteServiceLinkedRoleRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
