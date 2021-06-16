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
