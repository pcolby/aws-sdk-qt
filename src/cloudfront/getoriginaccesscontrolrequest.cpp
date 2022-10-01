// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoriginaccesscontrolrequest.h"
#include "getoriginaccesscontrolrequest_p.h"
#include "getoriginaccesscontrolresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlRequest
 * \brief The GetOriginAccessControlRequest class provides an interface for CloudFront GetOriginAccessControl requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getOriginAccessControl
 */

/*!
 * Constructs a copy of \a other.
 */
GetOriginAccessControlRequest::GetOriginAccessControlRequest(const GetOriginAccessControlRequest &other)
    : CloudFrontRequest(new GetOriginAccessControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOriginAccessControlRequest object.
 */
GetOriginAccessControlRequest::GetOriginAccessControlRequest()
    : CloudFrontRequest(new GetOriginAccessControlRequestPrivate(CloudFrontRequest::GetOriginAccessControlAction, this))
{

}

/*!
 * \reimp
 */
bool GetOriginAccessControlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOriginAccessControlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOriginAccessControlRequest::response(QNetworkReply * const reply) const
{
    return new GetOriginAccessControlResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlRequestPrivate
 * \brief The GetOriginAccessControlRequestPrivate class provides private implementation for GetOriginAccessControlRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetOriginAccessControlRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetOriginAccessControlRequestPrivate::GetOriginAccessControlRequestPrivate(
    const CloudFrontRequest::Action action, GetOriginAccessControlRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOriginAccessControlRequest
 * class' copy constructor.
 */
GetOriginAccessControlRequestPrivate::GetOriginAccessControlRequestPrivate(
    const GetOriginAccessControlRequestPrivate &other, GetOriginAccessControlRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
