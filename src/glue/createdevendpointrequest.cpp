/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
