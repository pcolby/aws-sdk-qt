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

#include "listrealtimelogconfigsrequest.h"
#include "listrealtimelogconfigsrequest_p.h"
#include "listrealtimelogconfigsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListRealtimeLogConfigsRequest
 * \brief The ListRealtimeLogConfigsRequest class provides an interface for CloudFront ListRealtimeLogConfigs requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listRealtimeLogConfigs
 */

/*!
 * Constructs a copy of \a other.
 */
ListRealtimeLogConfigsRequest::ListRealtimeLogConfigsRequest(const ListRealtimeLogConfigsRequest &other)
    : CloudFrontRequest(new ListRealtimeLogConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRealtimeLogConfigsRequest object.
 */
ListRealtimeLogConfigsRequest::ListRealtimeLogConfigsRequest()
    : CloudFrontRequest(new ListRealtimeLogConfigsRequestPrivate(CloudFrontRequest::ListRealtimeLogConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRealtimeLogConfigsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRealtimeLogConfigsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRealtimeLogConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListRealtimeLogConfigsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListRealtimeLogConfigsRequestPrivate
 * \brief The ListRealtimeLogConfigsRequestPrivate class provides private implementation for ListRealtimeLogConfigsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListRealtimeLogConfigsRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListRealtimeLogConfigsRequestPrivate::ListRealtimeLogConfigsRequestPrivate(
    const CloudFrontRequest::Action action, ListRealtimeLogConfigsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRealtimeLogConfigsRequest
 * class' copy constructor.
 */
ListRealtimeLogConfigsRequestPrivate::ListRealtimeLogConfigsRequestPrivate(
    const ListRealtimeLogConfigsRequestPrivate &other, ListRealtimeLogConfigsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
