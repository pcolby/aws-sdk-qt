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

#include "deletesiterequest.h"
#include "deletesiterequest_p.h"
#include "deletesiteresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::DeleteSiteRequest
 * \brief The DeleteSiteRequest class provides an interface for Outposts DeleteSite requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  AWS Outposts is a fully managed service that extends AWS infrastructure, APIs, and tools to customer premises. By
 *  providing local access to AWS managed infrastructure, AWS Outposts enables customers to build and run applications on
 *  premises using the same programming interfaces as in AWS Regions, while using local compute and storage resources for
 *  lower latency and local data processing
 *
 * \sa OutpostsClient::deleteSite
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSiteRequest::DeleteSiteRequest(const DeleteSiteRequest &other)
    : OutpostsRequest(new DeleteSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSiteRequest object.
 */
DeleteSiteRequest::DeleteSiteRequest()
    : OutpostsRequest(new DeleteSiteRequestPrivate(OutpostsRequest::DeleteSiteAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSiteRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSiteResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::DeleteSiteRequestPrivate
 * \brief The DeleteSiteRequestPrivate class provides private implementation for DeleteSiteRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a DeleteSiteRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
DeleteSiteRequestPrivate::DeleteSiteRequestPrivate(
    const OutpostsRequest::Action action, DeleteSiteRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSiteRequest
 * class' copy constructor.
 */
DeleteSiteRequestPrivate::DeleteSiteRequestPrivate(
    const DeleteSiteRequestPrivate &other, DeleteSiteRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
