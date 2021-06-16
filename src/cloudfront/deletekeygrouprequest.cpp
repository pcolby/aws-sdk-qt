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

#include "deletekeygrouprequest.h"
#include "deletekeygrouprequest_p.h"
#include "deletekeygroupresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteKeyGroupRequest
 * \brief The DeleteKeyGroupRequest class provides an interface for CloudFront DeleteKeyGroup requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteKeyGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteKeyGroupRequest::DeleteKeyGroupRequest(const DeleteKeyGroupRequest &other)
    : CloudFrontRequest(new DeleteKeyGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteKeyGroupRequest object.
 */
DeleteKeyGroupRequest::DeleteKeyGroupRequest()
    : CloudFrontRequest(new DeleteKeyGroupRequestPrivate(CloudFrontRequest::DeleteKeyGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteKeyGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteKeyGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteKeyGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteKeyGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteKeyGroupRequestPrivate
 * \brief The DeleteKeyGroupRequestPrivate class provides private implementation for DeleteKeyGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteKeyGroupRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteKeyGroupRequestPrivate::DeleteKeyGroupRequestPrivate(
    const CloudFrontRequest::Action action, DeleteKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteKeyGroupRequest
 * class' copy constructor.
 */
DeleteKeyGroupRequestPrivate::DeleteKeyGroupRequestPrivate(
    const DeleteKeyGroupRequestPrivate &other, DeleteKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
