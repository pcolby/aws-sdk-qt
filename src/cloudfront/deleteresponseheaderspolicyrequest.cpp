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

#include "deleteresponseheaderspolicyrequest.h"
#include "deleteresponseheaderspolicyrequest_p.h"
#include "deleteresponseheaderspolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteResponseHeadersPolicyRequest
 * \brief The DeleteResponseHeadersPolicyRequest class provides an interface for CloudFront DeleteResponseHeadersPolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteResponseHeadersPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResponseHeadersPolicyRequest::DeleteResponseHeadersPolicyRequest(const DeleteResponseHeadersPolicyRequest &other)
    : CloudFrontRequest(new DeleteResponseHeadersPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResponseHeadersPolicyRequest object.
 */
DeleteResponseHeadersPolicyRequest::DeleteResponseHeadersPolicyRequest()
    : CloudFrontRequest(new DeleteResponseHeadersPolicyRequestPrivate(CloudFrontRequest::DeleteResponseHeadersPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResponseHeadersPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResponseHeadersPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResponseHeadersPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResponseHeadersPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteResponseHeadersPolicyRequestPrivate
 * \brief The DeleteResponseHeadersPolicyRequestPrivate class provides private implementation for DeleteResponseHeadersPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteResponseHeadersPolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteResponseHeadersPolicyRequestPrivate::DeleteResponseHeadersPolicyRequestPrivate(
    const CloudFrontRequest::Action action, DeleteResponseHeadersPolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResponseHeadersPolicyRequest
 * class' copy constructor.
 */
DeleteResponseHeadersPolicyRequestPrivate::DeleteResponseHeadersPolicyRequestPrivate(
    const DeleteResponseHeadersPolicyRequestPrivate &other, DeleteResponseHeadersPolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
