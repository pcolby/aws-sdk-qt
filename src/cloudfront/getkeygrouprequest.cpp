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

#include "getkeygrouprequest.h"
#include "getkeygrouprequest_p.h"
#include "getkeygroupresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetKeyGroupRequest
 * \brief The GetKeyGroupRequest class provides an interface for CloudFront GetKeyGroup requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getKeyGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetKeyGroupRequest::GetKeyGroupRequest(const GetKeyGroupRequest &other)
    : CloudFrontRequest(new GetKeyGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetKeyGroupRequest object.
 */
GetKeyGroupRequest::GetKeyGroupRequest()
    : CloudFrontRequest(new GetKeyGroupRequestPrivate(CloudFrontRequest::GetKeyGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetKeyGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetKeyGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetKeyGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetKeyGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetKeyGroupRequestPrivate
 * \brief The GetKeyGroupRequestPrivate class provides private implementation for GetKeyGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetKeyGroupRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetKeyGroupRequestPrivate::GetKeyGroupRequestPrivate(
    const CloudFrontRequest::Action action, GetKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetKeyGroupRequest
 * class' copy constructor.
 */
GetKeyGroupRequestPrivate::GetKeyGroupRequestPrivate(
    const GetKeyGroupRequestPrivate &other, GetKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
