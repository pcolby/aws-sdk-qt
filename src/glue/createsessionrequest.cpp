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

#include "createsessionrequest.h"
#include "createsessionrequest_p.h"
#include "createsessionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateSessionRequest
 * \brief The CreateSessionRequest class provides an interface for Glue CreateSession requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createSession
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSessionRequest::CreateSessionRequest(const CreateSessionRequest &other)
    : GlueRequest(new CreateSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSessionRequest object.
 */
CreateSessionRequest::CreateSessionRequest()
    : GlueRequest(new CreateSessionRequestPrivate(GlueRequest::CreateSessionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSessionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateSessionRequestPrivate
 * \brief The CreateSessionRequestPrivate class provides private implementation for CreateSessionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateSessionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateSessionRequestPrivate::CreateSessionRequestPrivate(
    const GlueRequest::Action action, CreateSessionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSessionRequest
 * class' copy constructor.
 */
CreateSessionRequestPrivate::CreateSessionRequestPrivate(
    const CreateSessionRequestPrivate &other, CreateSessionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
