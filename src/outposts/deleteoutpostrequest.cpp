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

#include "deleteoutpostrequest.h"
#include "deleteoutpostrequest_p.h"
#include "deleteoutpostresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::DeleteOutpostRequest
 * \brief The DeleteOutpostRequest class provides an interface for Outposts DeleteOutpost requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  AWS Outposts is a fully managed service that extends AWS infrastructure, APIs, and tools to customer premises. By
 *  providing local access to AWS managed infrastructure, AWS Outposts enables customers to build and run applications on
 *  premises using the same programming interfaces as in AWS Regions, while using local compute and storage resources for
 *  lower latency and local data processing
 *
 * \sa OutpostsClient::deleteOutpost
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteOutpostRequest::DeleteOutpostRequest(const DeleteOutpostRequest &other)
    : OutpostsRequest(new DeleteOutpostRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteOutpostRequest object.
 */
DeleteOutpostRequest::DeleteOutpostRequest()
    : OutpostsRequest(new DeleteOutpostRequestPrivate(OutpostsRequest::DeleteOutpostAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteOutpostRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteOutpostResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteOutpostRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOutpostResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::DeleteOutpostRequestPrivate
 * \brief The DeleteOutpostRequestPrivate class provides private implementation for DeleteOutpostRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a DeleteOutpostRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
DeleteOutpostRequestPrivate::DeleteOutpostRequestPrivate(
    const OutpostsRequest::Action action, DeleteOutpostRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteOutpostRequest
 * class' copy constructor.
 */
DeleteOutpostRequestPrivate::DeleteOutpostRequestPrivate(
    const DeleteOutpostRequestPrivate &other, DeleteOutpostRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
