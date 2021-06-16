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

#include "associatebotrequest.h"
#include "associatebotrequest_p.h"
#include "associatebotresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::AssociateBotRequest
 * \brief The AssociateBotRequest class provides an interface for Connect AssociateBot requests.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an AWS service by using an endpoint. For a list of Amazon Connect endpoints, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with contact flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::associateBot
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateBotRequest::AssociateBotRequest(const AssociateBotRequest &other)
    : ConnectRequest(new AssociateBotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateBotRequest object.
 */
AssociateBotRequest::AssociateBotRequest()
    : ConnectRequest(new AssociateBotRequestPrivate(ConnectRequest::AssociateBotAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateBotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateBotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateBotRequest::response(QNetworkReply * const reply) const
{
    return new AssociateBotResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::AssociateBotRequestPrivate
 * \brief The AssociateBotRequestPrivate class provides private implementation for AssociateBotRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a AssociateBotRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
AssociateBotRequestPrivate::AssociateBotRequestPrivate(
    const ConnectRequest::Action action, AssociateBotRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateBotRequest
 * class' copy constructor.
 */
AssociateBotRequestPrivate::AssociateBotRequestPrivate(
    const AssociateBotRequestPrivate &other, AssociateBotRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
