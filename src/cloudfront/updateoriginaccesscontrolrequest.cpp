// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateoriginaccesscontrolrequest.h"
#include "updateoriginaccesscontrolrequest_p.h"
#include "updateoriginaccesscontrolresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateOriginAccessControlRequest
 * \brief The UpdateOriginAccessControlRequest class provides an interface for CloudFront UpdateOriginAccessControl requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateOriginAccessControl
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateOriginAccessControlRequest::UpdateOriginAccessControlRequest(const UpdateOriginAccessControlRequest &other)
    : CloudFrontRequest(new UpdateOriginAccessControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateOriginAccessControlRequest object.
 */
UpdateOriginAccessControlRequest::UpdateOriginAccessControlRequest()
    : CloudFrontRequest(new UpdateOriginAccessControlRequestPrivate(CloudFrontRequest::UpdateOriginAccessControlAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateOriginAccessControlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateOriginAccessControlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateOriginAccessControlRequest::response(QNetworkReply * const reply) const
{
    return new UpdateOriginAccessControlResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateOriginAccessControlRequestPrivate
 * \brief The UpdateOriginAccessControlRequestPrivate class provides private implementation for UpdateOriginAccessControlRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateOriginAccessControlRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateOriginAccessControlRequestPrivate::UpdateOriginAccessControlRequestPrivate(
    const CloudFrontRequest::Action action, UpdateOriginAccessControlRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateOriginAccessControlRequest
 * class' copy constructor.
 */
UpdateOriginAccessControlRequestPrivate::UpdateOriginAccessControlRequestPrivate(
    const UpdateOriginAccessControlRequestPrivate &other, UpdateOriginAccessControlRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
