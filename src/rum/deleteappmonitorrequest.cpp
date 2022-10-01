// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappmonitorrequest.h"
#include "deleteappmonitorrequest_p.h"
#include "deleteappmonitorresponse.h"
#include "rumrequest_p.h"

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::DeleteAppMonitorRequest
 * \brief The DeleteAppMonitorRequest class provides an interface for Rum DeleteAppMonitor requests.
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
 * \sa RumClient::deleteAppMonitor
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppMonitorRequest::DeleteAppMonitorRequest(const DeleteAppMonitorRequest &other)
    : RumRequest(new DeleteAppMonitorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppMonitorRequest object.
 */
DeleteAppMonitorRequest::DeleteAppMonitorRequest()
    : RumRequest(new DeleteAppMonitorRequestPrivate(RumRequest::DeleteAppMonitorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppMonitorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppMonitorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppMonitorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppMonitorResponse(*this, reply);
}

/*!
 * \class QtAws::Rum::DeleteAppMonitorRequestPrivate
 * \brief The DeleteAppMonitorRequestPrivate class provides private implementation for DeleteAppMonitorRequest.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a DeleteAppMonitorRequestPrivate object for Rum \a action,
 * with public implementation \a q.
 */
DeleteAppMonitorRequestPrivate::DeleteAppMonitorRequestPrivate(
    const RumRequest::Action action, DeleteAppMonitorRequest * const q)
    : RumRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppMonitorRequest
 * class' copy constructor.
 */
DeleteAppMonitorRequestPrivate::DeleteAppMonitorRequestPrivate(
    const DeleteAppMonitorRequestPrivate &other, DeleteAppMonitorRequest * const q)
    : RumRequestPrivate(other, q)
{

}

} // namespace Rum
} // namespace QtAws
