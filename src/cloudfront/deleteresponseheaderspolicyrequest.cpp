// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
