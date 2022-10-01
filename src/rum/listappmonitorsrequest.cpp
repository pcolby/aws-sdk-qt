// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappmonitorsrequest.h"
#include "listappmonitorsrequest_p.h"
#include "listappmonitorsresponse.h"
#include "rumrequest_p.h"

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::ListAppMonitorsRequest
 * \brief The ListAppMonitorsRequest class provides an interface for Rum ListAppMonitors requests.
 *
 * \inmodule QtAwsRum
 *
 *  With Amazon CloudWatch RUM, you can perform real-user monitoring to collect client-side data about your web application
 *  performance from actual user sessions in real time. The data collected includes page load times, client-side errors, and
 *  user behavior. When you view this data, you can see it all aggregated together and also see breakdowns by the browsers
 *  and devices that your customers
 * 
 *  use>
 * 
 *  You can use the collected data to quickly identify and debug client-side performance issues. CloudWatch RUM helps you
 *  visualize anomalies in your application performance and find relevant debugging data such as error messages, stack
 *  traces, and user sessions. You can also use RUM to understand the range of end-user impact including the number of
 *  users, geolocations, and browsers
 *
 * \sa RumClient::listAppMonitors
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppMonitorsRequest::ListAppMonitorsRequest(const ListAppMonitorsRequest &other)
    : RumRequest(new ListAppMonitorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppMonitorsRequest object.
 */
ListAppMonitorsRequest::ListAppMonitorsRequest()
    : RumRequest(new ListAppMonitorsRequestPrivate(RumRequest::ListAppMonitorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppMonitorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppMonitorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppMonitorsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppMonitorsResponse(*this, reply);
}

/*!
 * \class QtAws::Rum::ListAppMonitorsRequestPrivate
 * \brief The ListAppMonitorsRequestPrivate class provides private implementation for ListAppMonitorsRequest.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a ListAppMonitorsRequestPrivate object for Rum \a action,
 * with public implementation \a q.
 */
ListAppMonitorsRequestPrivate::ListAppMonitorsRequestPrivate(
    const RumRequest::Action action, ListAppMonitorsRequest * const q)
    : RumRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppMonitorsRequest
 * class' copy constructor.
 */
ListAppMonitorsRequestPrivate::ListAppMonitorsRequestPrivate(
    const ListAppMonitorsRequestPrivate &other, ListAppMonitorsRequest * const q)
    : RumRequestPrivate(other, q)
{

}

} // namespace Rum
} // namespace QtAws
