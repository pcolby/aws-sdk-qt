// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectionsrequest.h"
#include "getconnectionsrequest_p.h"
#include "getconnectionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetConnectionsRequest
 * \brief The GetConnectionsRequest class provides an interface for Glue GetConnections requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getConnections
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectionsRequest::GetConnectionsRequest(const GetConnectionsRequest &other)
    : GlueRequest(new GetConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectionsRequest object.
 */
GetConnectionsRequest::GetConnectionsRequest()
    : GlueRequest(new GetConnectionsRequestPrivate(GlueRequest::GetConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetConnectionsRequestPrivate
 * \brief The GetConnectionsRequestPrivate class provides private implementation for GetConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetConnectionsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetConnectionsRequestPrivate::GetConnectionsRequestPrivate(
    const GlueRequest::Action action, GetConnectionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectionsRequest
 * class' copy constructor.
 */
GetConnectionsRequestPrivate::GetConnectionsRequestPrivate(
    const GetConnectionsRequestPrivate &other, GetConnectionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
