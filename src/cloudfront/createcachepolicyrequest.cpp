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

#include "createcachepolicyrequest.h"
#include "createcachepolicyrequest_p.h"
#include "createcachepolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateCachePolicyRequest
 * \brief The CreateCachePolicyRequest class provides an interface for CloudFront CreateCachePolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createCachePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCachePolicyRequest::CreateCachePolicyRequest(const CreateCachePolicyRequest &other)
    : CloudFrontRequest(new CreateCachePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCachePolicyRequest object.
 */
CreateCachePolicyRequest::CreateCachePolicyRequest()
    : CloudFrontRequest(new CreateCachePolicyRequestPrivate(CloudFrontRequest::CreateCachePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCachePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCachePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCachePolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateCachePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateCachePolicyRequestPrivate
 * \brief The CreateCachePolicyRequestPrivate class provides private implementation for CreateCachePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateCachePolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateCachePolicyRequestPrivate::CreateCachePolicyRequestPrivate(
    const CloudFrontRequest::Action action, CreateCachePolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCachePolicyRequest
 * class' copy constructor.
 */
CreateCachePolicyRequestPrivate::CreateCachePolicyRequestPrivate(
    const CreateCachePolicyRequestPrivate &other, CreateCachePolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
