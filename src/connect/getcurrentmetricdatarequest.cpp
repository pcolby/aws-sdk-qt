/*
    Copyright 2013-2019 Paul Colby

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

#include "getcurrentmetricdatarequest.h"
#include "getcurrentmetricdatarequest_p.h"
#include "getcurrentmetricdataresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::GetCurrentMetricDataRequest
 * \brief The GetCurrentMetricDataRequest class provides an interface for Connect GetCurrentMetricData requests.
 *
 * \inmodule QtAwsConnect
 *
 *  The Amazon Connect API Reference provides descriptions, syntax, and usage examples for each of the Amazon Connect
 *  actions, data types, parameters, and errors. Amazon Connect is a cloud-based contact center solution that makes it easy
 *  to set up and manage a customer contact center and provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Throttling limits for the Amazon Connect API
 * 
 *  operations>
 * 
 *  For the <code>GetMetricData</code> and <code>GetCurrentMetricData</code> operations, a RateLimit of 5 per second, and a
 *  BurstLimit of 8 per
 * 
 *  second>
 * 
 *  For all other operations, a RateLimit of 2 per second, and a BurstLimit of 5 per
 * 
 *  second>
 * 
 *  You can request an increase to the throttling limits by submitting a <a
 *  href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase">Amazon Connect service
 *  limits increase form</a>. You must be signed in to your AWS account to access the
 *
 * \sa ConnectClient::getCurrentMetricData
 */

/*!
 * Constructs a copy of \a other.
 */
GetCurrentMetricDataRequest::GetCurrentMetricDataRequest(const GetCurrentMetricDataRequest &other)
    : ConnectRequest(new GetCurrentMetricDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCurrentMetricDataRequest object.
 */
GetCurrentMetricDataRequest::GetCurrentMetricDataRequest()
    : ConnectRequest(new GetCurrentMetricDataRequestPrivate(ConnectRequest::GetCurrentMetricDataAction, this))
{

}

/*!
 * \reimp
 */
bool GetCurrentMetricDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCurrentMetricDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCurrentMetricDataRequest::response(QNetworkReply * const reply) const
{
    return new GetCurrentMetricDataResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::GetCurrentMetricDataRequestPrivate
 * \brief The GetCurrentMetricDataRequestPrivate class provides private implementation for GetCurrentMetricDataRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a GetCurrentMetricDataRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
GetCurrentMetricDataRequestPrivate::GetCurrentMetricDataRequestPrivate(
    const ConnectRequest::Action action, GetCurrentMetricDataRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCurrentMetricDataRequest
 * class' copy constructor.
 */
GetCurrentMetricDataRequestPrivate::GetCurrentMetricDataRequestPrivate(
    const GetCurrentMetricDataRequestPrivate &other, GetCurrentMetricDataRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
