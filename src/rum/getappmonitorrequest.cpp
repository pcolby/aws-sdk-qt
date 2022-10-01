// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappmonitorrequest.h"
#include "getappmonitorrequest_p.h"
#include "getappmonitorresponse.h"
#include "rumrequest_p.h"

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::GetAppMonitorRequest
 * \brief The GetAppMonitorRequest class provides an interface for Rum GetAppMonitor requests.
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
 * \sa RumClient::getAppMonitor
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppMonitorRequest::GetAppMonitorRequest(const GetAppMonitorRequest &other)
    : RumRequest(new GetAppMonitorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppMonitorRequest object.
 */
GetAppMonitorRequest::GetAppMonitorRequest()
    : RumRequest(new GetAppMonitorRequestPrivate(RumRequest::GetAppMonitorAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppMonitorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppMonitorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppMonitorRequest::response(QNetworkReply * const reply) const
{
    return new GetAppMonitorResponse(*this, reply);
}

/*!
 * \class QtAws::Rum::GetAppMonitorRequestPrivate
 * \brief The GetAppMonitorRequestPrivate class provides private implementation for GetAppMonitorRequest.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a GetAppMonitorRequestPrivate object for Rum \a action,
 * with public implementation \a q.
 */
GetAppMonitorRequestPrivate::GetAppMonitorRequestPrivate(
    const RumRequest::Action action, GetAppMonitorRequest * const q)
    : RumRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppMonitorRequest
 * class' copy constructor.
 */
GetAppMonitorRequestPrivate::GetAppMonitorRequestPrivate(
    const GetAppMonitorRequestPrivate &other, GetAppMonitorRequest * const q)
    : RumRequestPrivate(other, q)
{

}

} // namespace Rum
} // namespace QtAws
