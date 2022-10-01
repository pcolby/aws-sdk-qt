// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevendpointsrequest.h"
#include "getdevendpointsrequest_p.h"
#include "getdevendpointsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDevEndpointsRequest
 * \brief The GetDevEndpointsRequest class provides an interface for Glue GetDevEndpoints requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDevEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevEndpointsRequest::GetDevEndpointsRequest(const GetDevEndpointsRequest &other)
    : GlueRequest(new GetDevEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevEndpointsRequest object.
 */
GetDevEndpointsRequest::GetDevEndpointsRequest()
    : GlueRequest(new GetDevEndpointsRequestPrivate(GlueRequest::GetDevEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new GetDevEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetDevEndpointsRequestPrivate
 * \brief The GetDevEndpointsRequestPrivate class provides private implementation for GetDevEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDevEndpointsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetDevEndpointsRequestPrivate::GetDevEndpointsRequestPrivate(
    const GlueRequest::Action action, GetDevEndpointsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevEndpointsRequest
 * class' copy constructor.
 */
GetDevEndpointsRequestPrivate::GetDevEndpointsRequestPrivate(
    const GetDevEndpointsRequestPrivate &other, GetDevEndpointsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
