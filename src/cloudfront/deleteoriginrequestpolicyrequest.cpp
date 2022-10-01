// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoriginrequestpolicyrequest.h"
#include "deleteoriginrequestpolicyrequest_p.h"
#include "deleteoriginrequestpolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteOriginRequestPolicyRequest
 * \brief The DeleteOriginRequestPolicyRequest class provides an interface for CloudFront DeleteOriginRequestPolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteOriginRequestPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteOriginRequestPolicyRequest::DeleteOriginRequestPolicyRequest(const DeleteOriginRequestPolicyRequest &other)
    : CloudFrontRequest(new DeleteOriginRequestPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteOriginRequestPolicyRequest object.
 */
DeleteOriginRequestPolicyRequest::DeleteOriginRequestPolicyRequest()
    : CloudFrontRequest(new DeleteOriginRequestPolicyRequestPrivate(CloudFrontRequest::DeleteOriginRequestPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteOriginRequestPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteOriginRequestPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteOriginRequestPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOriginRequestPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteOriginRequestPolicyRequestPrivate
 * \brief The DeleteOriginRequestPolicyRequestPrivate class provides private implementation for DeleteOriginRequestPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteOriginRequestPolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteOriginRequestPolicyRequestPrivate::DeleteOriginRequestPolicyRequestPrivate(
    const CloudFrontRequest::Action action, DeleteOriginRequestPolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteOriginRequestPolicyRequest
 * class' copy constructor.
 */
DeleteOriginRequestPolicyRequestPrivate::DeleteOriginRequestPolicyRequestPrivate(
    const DeleteOriginRequestPolicyRequestPrivate &other, DeleteOriginRequestPolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
