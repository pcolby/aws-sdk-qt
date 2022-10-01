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

#include "stopcontactrequest.h"
#include "stopcontactrequest_p.h"
#include "stopcontactresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::StopContactRequest
 * \brief The StopContactRequest class provides an interface for Connect StopContact requests.
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
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::stopContact
 */

/*!
 * Constructs a copy of \a other.
 */
StopContactRequest::StopContactRequest(const StopContactRequest &other)
    : ConnectRequest(new StopContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopContactRequest object.
 */
StopContactRequest::StopContactRequest()
    : ConnectRequest(new StopContactRequestPrivate(ConnectRequest::StopContactAction, this))
{

}

/*!
 * \reimp
 */
bool StopContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopContactRequest::response(QNetworkReply * const reply) const
{
    return new StopContactResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::StopContactRequestPrivate
 * \brief The StopContactRequestPrivate class provides private implementation for StopContactRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a StopContactRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
StopContactRequestPrivate::StopContactRequestPrivate(
    const ConnectRequest::Action action, StopContactRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopContactRequest
 * class' copy constructor.
 */
StopContactRequestPrivate::StopContactRequestPrivate(
    const StopContactRequestPrivate &other, StopContactRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
