// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatabaserequest.h"
#include "updatedatabaserequest_p.h"
#include "updatedatabaseresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateDatabaseRequest
 * \brief The UpdateDatabaseRequest class provides an interface for Glue UpdateDatabase requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateDatabase
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDatabaseRequest::UpdateDatabaseRequest(const UpdateDatabaseRequest &other)
    : GlueRequest(new UpdateDatabaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDatabaseRequest object.
 */
UpdateDatabaseRequest::UpdateDatabaseRequest()
    : GlueRequest(new UpdateDatabaseRequestPrivate(GlueRequest::UpdateDatabaseAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDatabaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDatabaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDatabaseResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateDatabaseRequestPrivate
 * \brief The UpdateDatabaseRequestPrivate class provides private implementation for UpdateDatabaseRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateDatabaseRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateDatabaseRequestPrivate::UpdateDatabaseRequestPrivate(
    const GlueRequest::Action action, UpdateDatabaseRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDatabaseRequest
 * class' copy constructor.
 */
UpdateDatabaseRequestPrivate::UpdateDatabaseRequestPrivate(
    const UpdateDatabaseRequestPrivate &other, UpdateDatabaseRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
