// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatabasesrequest.h"
#include "getdatabasesrequest_p.h"
#include "getdatabasesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDatabasesRequest
 * \brief The GetDatabasesRequest class provides an interface for Glue GetDatabases requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDatabases
 */

/*!
 * Constructs a copy of \a other.
 */
GetDatabasesRequest::GetDatabasesRequest(const GetDatabasesRequest &other)
    : GlueRequest(new GetDatabasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDatabasesRequest object.
 */
GetDatabasesRequest::GetDatabasesRequest()
    : GlueRequest(new GetDatabasesRequestPrivate(GlueRequest::GetDatabasesAction, this))
{

}

/*!
 * \reimp
 */
bool GetDatabasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDatabasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDatabasesRequest::response(QNetworkReply * const reply) const
{
    return new GetDatabasesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetDatabasesRequestPrivate
 * \brief The GetDatabasesRequestPrivate class provides private implementation for GetDatabasesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDatabasesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetDatabasesRequestPrivate::GetDatabasesRequestPrivate(
    const GlueRequest::Action action, GetDatabasesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDatabasesRequest
 * class' copy constructor.
 */
GetDatabasesRequestPrivate::GetDatabasesRequestPrivate(
    const GetDatabasesRequestPrivate &other, GetDatabasesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
