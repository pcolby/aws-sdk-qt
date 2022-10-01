// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettablesrequest.h"
#include "gettablesrequest_p.h"
#include "gettablesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTablesRequest
 * \brief The GetTablesRequest class provides an interface for Glue GetTables requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTables
 */

/*!
 * Constructs a copy of \a other.
 */
GetTablesRequest::GetTablesRequest(const GetTablesRequest &other)
    : GlueRequest(new GetTablesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTablesRequest object.
 */
GetTablesRequest::GetTablesRequest()
    : GlueRequest(new GetTablesRequestPrivate(GlueRequest::GetTablesAction, this))
{

}

/*!
 * \reimp
 */
bool GetTablesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTablesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTablesRequest::response(QNetworkReply * const reply) const
{
    return new GetTablesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTablesRequestPrivate
 * \brief The GetTablesRequestPrivate class provides private implementation for GetTablesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTablesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTablesRequestPrivate::GetTablesRequestPrivate(
    const GlueRequest::Action action, GetTablesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTablesRequest
 * class' copy constructor.
 */
GetTablesRequestPrivate::GetTablesRequestPrivate(
    const GetTablesRequestPrivate &other, GetTablesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
