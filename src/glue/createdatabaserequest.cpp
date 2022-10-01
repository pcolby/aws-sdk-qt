// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
 * Constructs a CreateDatabaseRequestPrivate object for Glue \a action,
 * with public implementation \a q.
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
