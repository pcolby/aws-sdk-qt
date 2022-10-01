// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevendpointrequest.h"
#include "getdevendpointrequest_p.h"
#include "getdevendpointresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDevEndpointRequest
 * \brief The GetDevEndpointRequest class provides an interface for Glue GetDevEndpoint requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDevEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevEndpointRequest::GetDevEndpointRequest(const GetDevEndpointRequest &other)
    : GlueRequest(new GetDevEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevEndpointRequest object.
 */
GetDevEndpointRequest::GetDevEndpointRequest()
    : GlueRequest(new GetDevEndpointRequestPrivate(GlueRequest::GetDevEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetDevEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetDevEndpointRequestPrivate
 * \brief The GetDevEndpointRequestPrivate class provides private implementation for GetDevEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDevEndpointRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetDevEndpointRequestPrivate::GetDevEndpointRequestPrivate(
    const GlueRequest::Action action, GetDevEndpointRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevEndpointRequest
 * class' copy constructor.
 */
GetDevEndpointRequestPrivate::GetDevEndpointRequestPrivate(
    const GetDevEndpointRequestPrivate &other, GetDevEndpointRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
