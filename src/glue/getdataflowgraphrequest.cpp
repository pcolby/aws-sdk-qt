// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdataflowgraphrequest.h"
#include "getdataflowgraphrequest_p.h"
#include "getdataflowgraphresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDataflowGraphRequest
 * \brief The GetDataflowGraphRequest class provides an interface for Glue GetDataflowGraph requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDataflowGraph
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataflowGraphRequest::GetDataflowGraphRequest(const GetDataflowGraphRequest &other)
    : GlueRequest(new GetDataflowGraphRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataflowGraphRequest object.
 */
GetDataflowGraphRequest::GetDataflowGraphRequest()
    : GlueRequest(new GetDataflowGraphRequestPrivate(GlueRequest::GetDataflowGraphAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataflowGraphRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataflowGraphResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataflowGraphRequest::response(QNetworkReply * const reply) const
{
    return new GetDataflowGraphResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetDataflowGraphRequestPrivate
 * \brief The GetDataflowGraphRequestPrivate class provides private implementation for GetDataflowGraphRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDataflowGraphRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetDataflowGraphRequestPrivate::GetDataflowGraphRequestPrivate(
    const GlueRequest::Action action, GetDataflowGraphRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataflowGraphRequest
 * class' copy constructor.
 */
GetDataflowGraphRequestPrivate::GetDataflowGraphRequestPrivate(
    const GetDataflowGraphRequestPrivate &other, GetDataflowGraphRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
