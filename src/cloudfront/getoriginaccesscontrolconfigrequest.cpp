// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoriginaccesscontrolconfigrequest.h"
#include "getoriginaccesscontrolconfigrequest_p.h"
#include "getoriginaccesscontrolconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlConfigRequest
 * \brief The GetOriginAccessControlConfigRequest class provides an interface for CloudFront GetOriginAccessControlConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getOriginAccessControlConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetOriginAccessControlConfigRequest::GetOriginAccessControlConfigRequest(const GetOriginAccessControlConfigRequest &other)
    : CloudFrontRequest(new GetOriginAccessControlConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOriginAccessControlConfigRequest object.
 */
GetOriginAccessControlConfigRequest::GetOriginAccessControlConfigRequest()
    : CloudFrontRequest(new GetOriginAccessControlConfigRequestPrivate(CloudFrontRequest::GetOriginAccessControlConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetOriginAccessControlConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOriginAccessControlConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOriginAccessControlConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetOriginAccessControlConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlConfigRequestPrivate
 * \brief The GetOriginAccessControlConfigRequestPrivate class provides private implementation for GetOriginAccessControlConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetOriginAccessControlConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetOriginAccessControlConfigRequestPrivate::GetOriginAccessControlConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetOriginAccessControlConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOriginAccessControlConfigRequest
 * class' copy constructor.
 */
GetOriginAccessControlConfigRequestPrivate::GetOriginAccessControlConfigRequestPrivate(
    const GetOriginAccessControlConfigRequestPrivate &other, GetOriginAccessControlConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
