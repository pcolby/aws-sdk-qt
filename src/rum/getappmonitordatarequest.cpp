// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappmonitordatarequest.h"
#include "getappmonitordatarequest_p.h"
#include "getappmonitordataresponse.h"
#include "rumrequest_p.h"

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::GetAppMonitorDataRequest
 * \brief The GetAppMonitorDataRequest class provides an interface for Rum GetAppMonitorData requests.
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
 * \sa RumClient::getAppMonitorData
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppMonitorDataRequest::GetAppMonitorDataRequest(const GetAppMonitorDataRequest &other)
    : RumRequest(new GetAppMonitorDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppMonitorDataRequest object.
 */
GetAppMonitorDataRequest::GetAppMonitorDataRequest()
    : RumRequest(new GetAppMonitorDataRequestPrivate(RumRequest::GetAppMonitorDataAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppMonitorDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppMonitorDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppMonitorDataRequest::response(QNetworkReply * const reply) const
{
    return new GetAppMonitorDataResponse(*this, reply);
}

/*!
 * \class QtAws::Rum::GetAppMonitorDataRequestPrivate
 * \brief The GetAppMonitorDataRequestPrivate class provides private implementation for GetAppMonitorDataRequest.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a GetAppMonitorDataRequestPrivate object for Rum \a action,
 * with public implementation \a q.
 */
GetAppMonitorDataRequestPrivate::GetAppMonitorDataRequestPrivate(
    const RumRequest::Action action, GetAppMonitorDataRequest * const q)
    : RumRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppMonitorDataRequest
 * class' copy constructor.
 */
GetAppMonitorDataRequestPrivate::GetAppMonitorDataRequestPrivate(
    const GetAppMonitorDataRequestPrivate &other, GetAppMonitorDataRequest * const q)
    : RumRequestPrivate(other, q)
{

}

} // namespace Rum
} // namespace QtAws
