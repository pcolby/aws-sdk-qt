// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdevendpointrequest.h"
#include "createdevendpointrequest_p.h"
#include "createdevendpointresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateDevEndpointRequest
 * \brief The CreateDevEndpointRequest class provides an interface for Glue CreateDevEndpoint requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createDevEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDevEndpointRequest::CreateDevEndpointRequest(const CreateDevEndpointRequest &other)
    : GlueRequest(new CreateDevEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDevEndpointRequest object.
 */
CreateDevEndpointRequest::CreateDevEndpointRequest()
    : GlueRequest(new CreateDevEndpointRequestPrivate(GlueRequest::CreateDevEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDevEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDevEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDevEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateDevEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateDevEndpointRequestPrivate
 * \brief The CreateDevEndpointRequestPrivate class provides private implementation for CreateDevEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateDevEndpointRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateDevEndpointRequestPrivate::CreateDevEndpointRequestPrivate(
    const GlueRequest::Action action, CreateDevEndpointRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDevEndpointRequest
 * class' copy constructor.
 */
CreateDevEndpointRequestPrivate::CreateDevEndpointRequestPrivate(
    const CreateDevEndpointRequestPrivate &other, CreateDevEndpointRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
