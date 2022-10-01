// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createappmonitorrequest.h"
#include "createappmonitorrequest_p.h"
#include "createappmonitorresponse.h"
#include "rumrequest_p.h"

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::CreateAppMonitorRequest
 * \brief The CreateAppMonitorRequest class provides an interface for Rum CreateAppMonitor requests.
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
 * \sa RumClient::createAppMonitor
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAppMonitorRequest::CreateAppMonitorRequest(const CreateAppMonitorRequest &other)
    : RumRequest(new CreateAppMonitorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAppMonitorRequest object.
 */
CreateAppMonitorRequest::CreateAppMonitorRequest()
    : RumRequest(new CreateAppMonitorRequestPrivate(RumRequest::CreateAppMonitorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAppMonitorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAppMonitorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAppMonitorRequest::response(QNetworkReply * const reply) const
{
    return new CreateAppMonitorResponse(*this, reply);
}

/*!
 * \class QtAws::Rum::CreateAppMonitorRequestPrivate
 * \brief The CreateAppMonitorRequestPrivate class provides private implementation for CreateAppMonitorRequest.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a CreateAppMonitorRequestPrivate object for Rum \a action,
 * with public implementation \a q.
 */
CreateAppMonitorRequestPrivate::CreateAppMonitorRequestPrivate(
    const RumRequest::Action action, CreateAppMonitorRequest * const q)
    : RumRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAppMonitorRequest
 * class' copy constructor.
 */
CreateAppMonitorRequestPrivate::CreateAppMonitorRequestPrivate(
    const CreateAppMonitorRequestPrivate &other, CreateAppMonitorRequest * const q)
    : RumRequestPrivate(other, q)
{

}

} // namespace Rum
} // namespace QtAws
