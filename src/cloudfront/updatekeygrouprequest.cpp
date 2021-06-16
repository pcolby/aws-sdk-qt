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

#include "updatekeygrouprequest.h"
#include "updatekeygrouprequest_p.h"
#include "updatekeygroupresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateKeyGroupRequest
 * \brief The UpdateKeyGroupRequest class provides an interface for CloudFront UpdateKeyGroup requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateKeyGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateKeyGroupRequest::UpdateKeyGroupRequest(const UpdateKeyGroupRequest &other)
    : CloudFrontRequest(new UpdateKeyGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateKeyGroupRequest object.
 */
UpdateKeyGroupRequest::UpdateKeyGroupRequest()
    : CloudFrontRequest(new UpdateKeyGroupRequestPrivate(CloudFrontRequest::UpdateKeyGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateKeyGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateKeyGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateKeyGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateKeyGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateKeyGroupRequestPrivate
 * \brief The UpdateKeyGroupRequestPrivate class provides private implementation for UpdateKeyGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateKeyGroupRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateKeyGroupRequestPrivate::UpdateKeyGroupRequestPrivate(
    const CloudFrontRequest::Action action, UpdateKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateKeyGroupRequest
 * class' copy constructor.
 */
UpdateKeyGroupRequestPrivate::UpdateKeyGroupRequestPrivate(
    const UpdateKeyGroupRequestPrivate &other, UpdateKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
