// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrumeventsrequest.h"
#include "putrumeventsrequest_p.h"
#include "putrumeventsresponse.h"
#include "rumrequest_p.h"

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::PutRumEventsRequest
 * \brief The PutRumEventsRequest class provides an interface for Rum PutRumEvents requests.
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
 * \sa RumClient::putRumEvents
 */

/*!
 * Constructs a copy of \a other.
 */
PutRumEventsRequest::PutRumEventsRequest(const PutRumEventsRequest &other)
    : RumRequest(new PutRumEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRumEventsRequest object.
 */
PutRumEventsRequest::PutRumEventsRequest()
    : RumRequest(new PutRumEventsRequestPrivate(RumRequest::PutRumEventsAction, this))
{

}

/*!
 * \reimp
 */
bool PutRumEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRumEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRumEventsRequest::response(QNetworkReply * const reply) const
{
    return new PutRumEventsResponse(*this, reply);
}

/*!
 * \class QtAws::Rum::PutRumEventsRequestPrivate
 * \brief The PutRumEventsRequestPrivate class provides private implementation for PutRumEventsRequest.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a PutRumEventsRequestPrivate object for Rum \a action,
 * with public implementation \a q.
 */
PutRumEventsRequestPrivate::PutRumEventsRequestPrivate(
    const RumRequest::Action action, PutRumEventsRequest * const q)
    : RumRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRumEventsRequest
 * class' copy constructor.
 */
PutRumEventsRequestPrivate::PutRumEventsRequestPrivate(
    const PutRumEventsRequestPrivate &other, PutRumEventsRequest * const q)
    : RumRequestPrivate(other, q)
{

}

} // namespace Rum
} // namespace QtAws
