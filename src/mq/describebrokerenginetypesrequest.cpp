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

#include "describebrokerenginetypesrequest.h"
#include "describebrokerenginetypesrequest_p.h"
#include "describebrokerenginetypesresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DescribeBrokerEngineTypesRequest
 * \brief The DescribeBrokerEngineTypesRequest class provides an interface for MQ DescribeBrokerEngineTypes requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::describeBrokerEngineTypes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBrokerEngineTypesRequest::DescribeBrokerEngineTypesRequest(const DescribeBrokerEngineTypesRequest &other)
    : MqRequest(new DescribeBrokerEngineTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBrokerEngineTypesRequest object.
 */
DescribeBrokerEngineTypesRequest::DescribeBrokerEngineTypesRequest()
    : MqRequest(new DescribeBrokerEngineTypesRequestPrivate(MqRequest::DescribeBrokerEngineTypesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBrokerEngineTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBrokerEngineTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBrokerEngineTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBrokerEngineTypesResponse(*this, reply);
}

/*!
 * \class QtAws::MQ::DescribeBrokerEngineTypesRequestPrivate
 * \brief The DescribeBrokerEngineTypesRequestPrivate class provides private implementation for DescribeBrokerEngineTypesRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a DescribeBrokerEngineTypesRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DescribeBrokerEngineTypesRequestPrivate::DescribeBrokerEngineTypesRequestPrivate(
    const MqRequest::Action action, DescribeBrokerEngineTypesRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBrokerEngineTypesRequest
 * class' copy constructor.
 */
DescribeBrokerEngineTypesRequestPrivate::DescribeBrokerEngineTypesRequestPrivate(
    const DescribeBrokerEngineTypesRequestPrivate &other, DescribeBrokerEngineTypesRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
