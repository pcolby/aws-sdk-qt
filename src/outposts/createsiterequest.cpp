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

#include "createsiterequest.h"
#include "createsiterequest_p.h"
#include "createsiteresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::CreateSiteRequest
 * \brief The CreateSiteRequest class provides an interface for Outposts CreateSite requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::createSite
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSiteRequest::CreateSiteRequest(const CreateSiteRequest &other)
    : OutpostsRequest(new CreateSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSiteRequest object.
 */
CreateSiteRequest::CreateSiteRequest()
    : OutpostsRequest(new CreateSiteRequestPrivate(OutpostsRequest::CreateSiteAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSiteRequest::response(QNetworkReply * const reply) const
{
    return new CreateSiteResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::CreateSiteRequestPrivate
 * \brief The CreateSiteRequestPrivate class provides private implementation for CreateSiteRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a CreateSiteRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
CreateSiteRequestPrivate::CreateSiteRequestPrivate(
    const OutpostsRequest::Action action, CreateSiteRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSiteRequest
 * class' copy constructor.
 */
CreateSiteRequestPrivate::CreateSiteRequestPrivate(
    const CreateSiteRequestPrivate &other, CreateSiteRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
