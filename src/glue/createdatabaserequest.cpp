/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createdatabaserequest.h"
#include "createdatabaserequest_p.h"
#include "createdatabaseresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateDatabaseRequest
 * \brief The CreateDatabaseRequest class provides an interface for Glue CreateDatabase requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createDatabase
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatabaseRequest::CreateDatabaseRequest(const CreateDatabaseRequest &other)
    : GlueRequest(new CreateDatabaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatabaseRequest object.
 */
CreateDatabaseRequest::CreateDatabaseRequest()
    : GlueRequest(new CreateDatabaseRequestPrivate(GlueRequest::CreateDatabaseAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatabaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatabaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatabaseResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateDatabaseRequestPrivate
 * \brief The CreateDatabaseRequestPrivate class provides private implementation for CreateDatabaseRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 *
 * Constructs a CreateDatabaseRequestPrivate object for Glue \a action with,
 * public implementation \a q.
 */
CreateDatabaseRequestPrivate::CreateDatabaseRequestPrivate(
    const GlueRequest::Action action, CreateDatabaseRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatabaseRequest
 * class' copy constructor.
 */
CreateDatabaseRequestPrivate::CreateDatabaseRequestPrivate(
    const CreateDatabaseRequestPrivate &other, CreateDatabaseRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
