// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatabaserequest.h"
#include "getdatabaserequest_p.h"
#include "getdatabaseresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDatabaseRequest
 * \brief The GetDatabaseRequest class provides an interface for Glue GetDatabase requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDatabase
 */

/*!
 * Constructs a copy of \a other.
 */
GetDatabaseRequest::GetDatabaseRequest(const GetDatabaseRequest &other)
    : GlueRequest(new GetDatabaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDatabaseRequest object.
 */
GetDatabaseRequest::GetDatabaseRequest()
    : GlueRequest(new GetDatabaseRequestPrivate(GlueRequest::GetDatabaseAction, this))
{

}

/*!
 * \reimp
 */
bool GetDatabaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDatabaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new GetDatabaseResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetDatabaseRequestPrivate
 * \brief The GetDatabaseRequestPrivate class provides private implementation for GetDatabaseRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDatabaseRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetDatabaseRequestPrivate::GetDatabaseRequestPrivate(
    const GlueRequest::Action action, GetDatabaseRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDatabaseRequest
 * class' copy constructor.
 */
GetDatabaseRequestPrivate::GetDatabaseRequestPrivate(
    const GetDatabaseRequestPrivate &other, GetDatabaseRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
