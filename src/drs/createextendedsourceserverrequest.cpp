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

#include "createextendedsourceserverrequest.h"
#include "createextendedsourceserverrequest_p.h"
#include "createextendedsourceserverresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::CreateExtendedSourceServerRequest
 * \brief The CreateExtendedSourceServerRequest class provides an interface for Drs CreateExtendedSourceServer requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::createExtendedSourceServer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExtendedSourceServerRequest::CreateExtendedSourceServerRequest(const CreateExtendedSourceServerRequest &other)
    : DrsRequest(new CreateExtendedSourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExtendedSourceServerRequest object.
 */
CreateExtendedSourceServerRequest::CreateExtendedSourceServerRequest()
    : DrsRequest(new CreateExtendedSourceServerRequestPrivate(DrsRequest::CreateExtendedSourceServerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExtendedSourceServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExtendedSourceServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExtendedSourceServerRequest::response(QNetworkReply * const reply) const
{
    return new CreateExtendedSourceServerResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::CreateExtendedSourceServerRequestPrivate
 * \brief The CreateExtendedSourceServerRequestPrivate class provides private implementation for CreateExtendedSourceServerRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a CreateExtendedSourceServerRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
CreateExtendedSourceServerRequestPrivate::CreateExtendedSourceServerRequestPrivate(
    const DrsRequest::Action action, CreateExtendedSourceServerRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExtendedSourceServerRequest
 * class' copy constructor.
 */
CreateExtendedSourceServerRequestPrivate::CreateExtendedSourceServerRequestPrivate(
    const CreateExtendedSourceServerRequestPrivate &other, CreateExtendedSourceServerRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
