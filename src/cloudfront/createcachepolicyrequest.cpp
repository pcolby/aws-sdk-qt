// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
