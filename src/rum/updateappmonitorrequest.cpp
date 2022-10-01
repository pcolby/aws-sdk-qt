// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappmonitorrequest.h"
#include "updateappmonitorrequest_p.h"
#include "updateappmonitorresponse.h"
#include "rumrequest_p.h"

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::UpdateAppMonitorRequest
 * \brief The UpdateAppMonitorRequest class provides an interface for Rum UpdateAppMonitor requests.
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
 * \sa RumClient::updateAppMonitor
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAppMonitorRequest::UpdateAppMonitorRequest(const UpdateAppMonitorRequest &other)
    : RumRequest(new UpdateAppMonitorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAppMonitorRequest object.
 */
UpdateAppMonitorRequest::UpdateAppMonitorRequest()
    : RumRequest(new UpdateAppMonitorRequestPrivate(RumRequest::UpdateAppMonitorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAppMonitorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAppMonitorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAppMonitorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAppMonitorResponse(*this, reply);
}

/*!
 * \class QtAws::Rum::UpdateAppMonitorRequestPrivate
 * \brief The UpdateAppMonitorRequestPrivate class provides private implementation for UpdateAppMonitorRequest.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a UpdateAppMonitorRequestPrivate object for Rum \a action,
 * with public implementation \a q.
 */
UpdateAppMonitorRequestPrivate::UpdateAppMonitorRequestPrivate(
    const RumRequest::Action action, UpdateAppMonitorRequest * const q)
    : RumRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAppMonitorRequest
 * class' copy constructor.
 */
UpdateAppMonitorRequestPrivate::UpdateAppMonitorRequestPrivate(
    const UpdateAppMonitorRequestPrivate &other, UpdateAppMonitorRequest * const q)
    : RumRequestPrivate(other, q)
{

}

} // namespace Rum
} // namespace QtAws
