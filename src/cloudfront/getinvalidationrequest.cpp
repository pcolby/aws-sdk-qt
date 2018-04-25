/*
    Copyright 2013-2018 Paul Colby

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

#include "getinvalidationrequest.h"
#include "getinvalidationrequest_p.h"
#include "getinvalidationresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetInvalidationRequest
 * \brief The GetInvalidationRequest class provides an interface for CloudFront GetInvalidation requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getInvalidation
 */

/*!
 * Constructs a copy of \a other.
 */
GetInvalidationRequest::GetInvalidationRequest(const GetInvalidationRequest &other)
    : CloudFrontRequest(new GetInvalidationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInvalidationRequest object.
 */
GetInvalidationRequest::GetInvalidationRequest()
    : CloudFrontRequest(new GetInvalidationRequestPrivate(CloudFrontRequest::GetInvalidationAction, this))
{

}

/*!
 * \reimp
 */
bool GetInvalidationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInvalidationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInvalidationRequest::response(QNetworkReply * const reply) const
{
    return new GetInvalidationResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetInvalidationRequestPrivate
 * \brief The GetInvalidationRequestPrivate class provides private implementation for GetInvalidationRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetInvalidationRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetInvalidationRequestPrivate::GetInvalidationRequestPrivate(
    const CloudFrontRequest::Action action, GetInvalidationRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInvalidationRequest
 * class' copy constructor.
 */
GetInvalidationRequestPrivate::GetInvalidationRequestPrivate(
    const GetInvalidationRequestPrivate &other, GetInvalidationRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
