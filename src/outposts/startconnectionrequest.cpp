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

#include "startconnectionrequest.h"
#include "startconnectionrequest_p.h"
#include "startconnectionresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::StartConnectionRequest
 * \brief The StartConnectionRequest class provides an interface for Outposts StartConnection requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::startConnection
 */

/*!
 * Constructs a copy of \a other.
 */
StartConnectionRequest::StartConnectionRequest(const StartConnectionRequest &other)
    : OutpostsRequest(new StartConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartConnectionRequest object.
 */
StartConnectionRequest::StartConnectionRequest()
    : OutpostsRequest(new StartConnectionRequestPrivate(OutpostsRequest::StartConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool StartConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartConnectionRequest::response(QNetworkReply * const reply) const
{
    return new StartConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::StartConnectionRequestPrivate
 * \brief The StartConnectionRequestPrivate class provides private implementation for StartConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a StartConnectionRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
StartConnectionRequestPrivate::StartConnectionRequestPrivate(
    const OutpostsRequest::Action action, StartConnectionRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartConnectionRequest
 * class' copy constructor.
 */
StartConnectionRequestPrivate::StartConnectionRequestPrivate(
    const StartConnectionRequestPrivate &other, StartConnectionRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
