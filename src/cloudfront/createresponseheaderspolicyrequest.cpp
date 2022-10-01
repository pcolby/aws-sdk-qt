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

#include "createresponseheaderspolicyrequest.h"
#include "createresponseheaderspolicyrequest_p.h"
#include "createresponseheaderspolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateResponseHeadersPolicyRequest
 * \brief The CreateResponseHeadersPolicyRequest class provides an interface for CloudFront CreateResponseHeadersPolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createResponseHeadersPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResponseHeadersPolicyRequest::CreateResponseHeadersPolicyRequest(const CreateResponseHeadersPolicyRequest &other)
    : CloudFrontRequest(new CreateResponseHeadersPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResponseHeadersPolicyRequest object.
 */
CreateResponseHeadersPolicyRequest::CreateResponseHeadersPolicyRequest()
    : CloudFrontRequest(new CreateResponseHeadersPolicyRequestPrivate(CloudFrontRequest::CreateResponseHeadersPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResponseHeadersPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResponseHeadersPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResponseHeadersPolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateResponseHeadersPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateResponseHeadersPolicyRequestPrivate
 * \brief The CreateResponseHeadersPolicyRequestPrivate class provides private implementation for CreateResponseHeadersPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateResponseHeadersPolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateResponseHeadersPolicyRequestPrivate::CreateResponseHeadersPolicyRequestPrivate(
    const CloudFrontRequest::Action action, CreateResponseHeadersPolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResponseHeadersPolicyRequest
 * class' copy constructor.
 */
CreateResponseHeadersPolicyRequestPrivate::CreateResponseHeadersPolicyRequestPrivate(
    const CreateResponseHeadersPolicyRequestPrivate &other, CreateResponseHeadersPolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
