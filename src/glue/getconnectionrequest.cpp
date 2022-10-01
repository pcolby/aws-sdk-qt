// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectionrequest.h"
#include "getconnectionrequest_p.h"
#include "getconnectionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetConnectionRequest
 * \brief The GetConnectionRequest class provides an interface for Glue GetConnection requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getConnection
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectionRequest::GetConnectionRequest(const GetConnectionRequest &other)
    : GlueRequest(new GetConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectionRequest object.
 */
GetConnectionRequest::GetConnectionRequest()
    : GlueRequest(new GetConnectionRequestPrivate(GlueRequest::GetConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectionRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetConnectionRequestPrivate
 * \brief The GetConnectionRequestPrivate class provides private implementation for GetConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetConnectionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetConnectionRequestPrivate::GetConnectionRequestPrivate(
    const GlueRequest::Action action, GetConnectionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectionRequest
 * class' copy constructor.
 */
GetConnectionRequestPrivate::GetConnectionRequestPrivate(
    const GetConnectionRequestPrivate &other, GetConnectionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
