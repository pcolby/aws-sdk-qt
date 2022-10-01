// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecloudfrontoriginaccessidentityrequest.h"
#include "updatecloudfrontoriginaccessidentityrequest_p.h"
#include "updatecloudfrontoriginaccessidentityresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateCloudFrontOriginAccessIdentityRequest
 * \brief The UpdateCloudFrontOriginAccessIdentityRequest class provides an interface for CloudFront UpdateCloudFrontOriginAccessIdentity requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateCloudFrontOriginAccessIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCloudFrontOriginAccessIdentityRequest::UpdateCloudFrontOriginAccessIdentityRequest(const UpdateCloudFrontOriginAccessIdentityRequest &other)
    : CloudFrontRequest(new UpdateCloudFrontOriginAccessIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCloudFrontOriginAccessIdentityRequest object.
 */
UpdateCloudFrontOriginAccessIdentityRequest::UpdateCloudFrontOriginAccessIdentityRequest()
    : CloudFrontRequest(new UpdateCloudFrontOriginAccessIdentityRequestPrivate(CloudFrontRequest::UpdateCloudFrontOriginAccessIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCloudFrontOriginAccessIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCloudFrontOriginAccessIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCloudFrontOriginAccessIdentityRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCloudFrontOriginAccessIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateCloudFrontOriginAccessIdentityRequestPrivate
 * \brief The UpdateCloudFrontOriginAccessIdentityRequestPrivate class provides private implementation for UpdateCloudFrontOriginAccessIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateCloudFrontOriginAccessIdentityRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateCloudFrontOriginAccessIdentityRequestPrivate::UpdateCloudFrontOriginAccessIdentityRequestPrivate(
    const CloudFrontRequest::Action action, UpdateCloudFrontOriginAccessIdentityRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCloudFrontOriginAccessIdentityRequest
 * class' copy constructor.
 */
UpdateCloudFrontOriginAccessIdentityRequestPrivate::UpdateCloudFrontOriginAccessIdentityRequestPrivate(
    const UpdateCloudFrontOriginAccessIdentityRequestPrivate &other, UpdateCloudFrontOriginAccessIdentityRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
