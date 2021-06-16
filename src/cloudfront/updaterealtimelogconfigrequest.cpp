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

#include "updaterealtimelogconfigrequest.h"
#include "updaterealtimelogconfigrequest_p.h"
#include "updaterealtimelogconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateRealtimeLogConfigRequest
 * \brief The UpdateRealtimeLogConfigRequest class provides an interface for CloudFront UpdateRealtimeLogConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateRealtimeLogConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRealtimeLogConfigRequest::UpdateRealtimeLogConfigRequest(const UpdateRealtimeLogConfigRequest &other)
    : CloudFrontRequest(new UpdateRealtimeLogConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRealtimeLogConfigRequest object.
 */
UpdateRealtimeLogConfigRequest::UpdateRealtimeLogConfigRequest()
    : CloudFrontRequest(new UpdateRealtimeLogConfigRequestPrivate(CloudFrontRequest::UpdateRealtimeLogConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRealtimeLogConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRealtimeLogConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRealtimeLogConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRealtimeLogConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateRealtimeLogConfigRequestPrivate
 * \brief The UpdateRealtimeLogConfigRequestPrivate class provides private implementation for UpdateRealtimeLogConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateRealtimeLogConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateRealtimeLogConfigRequestPrivate::UpdateRealtimeLogConfigRequestPrivate(
    const CloudFrontRequest::Action action, UpdateRealtimeLogConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRealtimeLogConfigRequest
 * class' copy constructor.
 */
UpdateRealtimeLogConfigRequestPrivate::UpdateRealtimeLogConfigRequestPrivate(
    const UpdateRealtimeLogConfigRequestPrivate &other, UpdateRealtimeLogConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
