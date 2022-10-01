// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedevendpointrequest.h"
#include "deletedevendpointrequest_p.h"
#include "deletedevendpointresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteDevEndpointRequest
 * \brief The DeleteDevEndpointRequest class provides an interface for Glue DeleteDevEndpoint requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteDevEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDevEndpointRequest::DeleteDevEndpointRequest(const DeleteDevEndpointRequest &other)
    : GlueRequest(new DeleteDevEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDevEndpointRequest object.
 */
DeleteDevEndpointRequest::DeleteDevEndpointRequest()
    : GlueRequest(new DeleteDevEndpointRequestPrivate(GlueRequest::DeleteDevEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDevEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDevEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDevEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDevEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteDevEndpointRequestPrivate
 * \brief The DeleteDevEndpointRequestPrivate class provides private implementation for DeleteDevEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteDevEndpointRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteDevEndpointRequestPrivate::DeleteDevEndpointRequestPrivate(
    const GlueRequest::Action action, DeleteDevEndpointRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDevEndpointRequest
 * class' copy constructor.
 */
DeleteDevEndpointRequestPrivate::DeleteDevEndpointRequestPrivate(
    const DeleteDevEndpointRequestPrivate &other, DeleteDevEndpointRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
