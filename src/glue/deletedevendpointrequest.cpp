/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
