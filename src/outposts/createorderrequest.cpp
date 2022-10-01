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

#include "createorderrequest.h"
#include "createorderrequest_p.h"
#include "createorderresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::CreateOrderRequest
 * \brief The CreateOrderRequest class provides an interface for Outposts CreateOrder requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::createOrder
 */

/*!
 * Constructs a copy of \a other.
 */
CreateOrderRequest::CreateOrderRequest(const CreateOrderRequest &other)
    : OutpostsRequest(new CreateOrderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateOrderRequest object.
 */
CreateOrderRequest::CreateOrderRequest()
    : OutpostsRequest(new CreateOrderRequestPrivate(OutpostsRequest::CreateOrderAction, this))
{

}

/*!
 * \reimp
 */
bool CreateOrderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateOrderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateOrderRequest::response(QNetworkReply * const reply) const
{
    return new CreateOrderResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::CreateOrderRequestPrivate
 * \brief The CreateOrderRequestPrivate class provides private implementation for CreateOrderRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a CreateOrderRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
CreateOrderRequestPrivate::CreateOrderRequestPrivate(
    const OutpostsRequest::Action action, CreateOrderRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateOrderRequest
 * class' copy constructor.
 */
CreateOrderRequestPrivate::CreateOrderRequestPrivate(
    const CreateOrderRequestPrivate &other, CreateOrderRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
