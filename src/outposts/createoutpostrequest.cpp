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

#include "createoutpostrequest.h"
#include "createoutpostrequest_p.h"
#include "createoutpostresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::CreateOutpostRequest
 * \brief The CreateOutpostRequest class provides an interface for Outposts CreateOutpost requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::createOutpost
 */

/*!
 * Constructs a copy of \a other.
 */
CreateOutpostRequest::CreateOutpostRequest(const CreateOutpostRequest &other)
    : OutpostsRequest(new CreateOutpostRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateOutpostRequest object.
 */
CreateOutpostRequest::CreateOutpostRequest()
    : OutpostsRequest(new CreateOutpostRequestPrivate(OutpostsRequest::CreateOutpostAction, this))
{

}

/*!
 * \reimp
 */
bool CreateOutpostRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateOutpostResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateOutpostRequest::response(QNetworkReply * const reply) const
{
    return new CreateOutpostResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::CreateOutpostRequestPrivate
 * \brief The CreateOutpostRequestPrivate class provides private implementation for CreateOutpostRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a CreateOutpostRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
CreateOutpostRequestPrivate::CreateOutpostRequestPrivate(
    const OutpostsRequest::Action action, CreateOutpostRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateOutpostRequest
 * class' copy constructor.
 */
CreateOutpostRequestPrivate::CreateOutpostRequestPrivate(
    const CreateOutpostRequestPrivate &other, CreateOutpostRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
