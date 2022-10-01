// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrealtimelogconfigrequest.h"
#include "getrealtimelogconfigrequest_p.h"
#include "getrealtimelogconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetRealtimeLogConfigRequest
 * \brief The GetRealtimeLogConfigRequest class provides an interface for CloudFront GetRealtimeLogConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getRealtimeLogConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetRealtimeLogConfigRequest::GetRealtimeLogConfigRequest(const GetRealtimeLogConfigRequest &other)
    : CloudFrontRequest(new GetRealtimeLogConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRealtimeLogConfigRequest object.
 */
GetRealtimeLogConfigRequest::GetRealtimeLogConfigRequest()
    : CloudFrontRequest(new GetRealtimeLogConfigRequestPrivate(CloudFrontRequest::GetRealtimeLogConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetRealtimeLogConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRealtimeLogConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRealtimeLogConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetRealtimeLogConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetRealtimeLogConfigRequestPrivate
 * \brief The GetRealtimeLogConfigRequestPrivate class provides private implementation for GetRealtimeLogConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetRealtimeLogConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetRealtimeLogConfigRequestPrivate::GetRealtimeLogConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetRealtimeLogConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRealtimeLogConfigRequest
 * class' copy constructor.
 */
GetRealtimeLogConfigRequestPrivate::GetRealtimeLogConfigRequestPrivate(
    const GetRealtimeLogConfigRequestPrivate &other, GetRealtimeLogConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
