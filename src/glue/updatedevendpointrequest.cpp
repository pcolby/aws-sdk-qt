// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevendpointrequest.h"
#include "updatedevendpointrequest_p.h"
#include "updatedevendpointresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateDevEndpointRequest
 * \brief The UpdateDevEndpointRequest class provides an interface for Glue UpdateDevEndpoint requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateDevEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDevEndpointRequest::UpdateDevEndpointRequest(const UpdateDevEndpointRequest &other)
    : GlueRequest(new UpdateDevEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDevEndpointRequest object.
 */
UpdateDevEndpointRequest::UpdateDevEndpointRequest()
    : GlueRequest(new UpdateDevEndpointRequestPrivate(GlueRequest::UpdateDevEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDevEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDevEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDevEndpointRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDevEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateDevEndpointRequestPrivate
 * \brief The UpdateDevEndpointRequestPrivate class provides private implementation for UpdateDevEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateDevEndpointRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateDevEndpointRequestPrivate::UpdateDevEndpointRequestPrivate(
    const GlueRequest::Action action, UpdateDevEndpointRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDevEndpointRequest
 * class' copy constructor.
 */
UpdateDevEndpointRequestPrivate::UpdateDevEndpointRequestPrivate(
    const UpdateDevEndpointRequestPrivate &other, UpdateDevEndpointRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
