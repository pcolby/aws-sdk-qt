// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterealtimelogconfigrequest.h"
#include "deleterealtimelogconfigrequest_p.h"
#include "deleterealtimelogconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteRealtimeLogConfigRequest
 * \brief The DeleteRealtimeLogConfigRequest class provides an interface for CloudFront DeleteRealtimeLogConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteRealtimeLogConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRealtimeLogConfigRequest::DeleteRealtimeLogConfigRequest(const DeleteRealtimeLogConfigRequest &other)
    : CloudFrontRequest(new DeleteRealtimeLogConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRealtimeLogConfigRequest object.
 */
DeleteRealtimeLogConfigRequest::DeleteRealtimeLogConfigRequest()
    : CloudFrontRequest(new DeleteRealtimeLogConfigRequestPrivate(CloudFrontRequest::DeleteRealtimeLogConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRealtimeLogConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRealtimeLogConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRealtimeLogConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRealtimeLogConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteRealtimeLogConfigRequestPrivate
 * \brief The DeleteRealtimeLogConfigRequestPrivate class provides private implementation for DeleteRealtimeLogConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteRealtimeLogConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteRealtimeLogConfigRequestPrivate::DeleteRealtimeLogConfigRequestPrivate(
    const CloudFrontRequest::Action action, DeleteRealtimeLogConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRealtimeLogConfigRequest
 * class' copy constructor.
 */
DeleteRealtimeLogConfigRequestPrivate::DeleteRealtimeLogConfigRequestPrivate(
    const DeleteRealtimeLogConfigRequestPrivate &other, DeleteRealtimeLogConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
