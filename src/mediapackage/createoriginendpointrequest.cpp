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

#include "createoriginendpointrequest.h"
#include "createoriginendpointrequest_p.h"
#include "createoriginendpointresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::CreateOriginEndpointRequest
 * \brief The CreateOriginEndpointRequest class provides an interface for MediaPackage CreateOriginEndpoint requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::createOriginEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
CreateOriginEndpointRequest::CreateOriginEndpointRequest(const CreateOriginEndpointRequest &other)
    : MediaPackageRequest(new CreateOriginEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateOriginEndpointRequest object.
 */
CreateOriginEndpointRequest::CreateOriginEndpointRequest()
    : MediaPackageRequest(new CreateOriginEndpointRequestPrivate(MediaPackageRequest::CreateOriginEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool CreateOriginEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateOriginEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateOriginEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateOriginEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::CreateOriginEndpointRequestPrivate
 * \brief The CreateOriginEndpointRequestPrivate class provides private implementation for CreateOriginEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a CreateOriginEndpointRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
CreateOriginEndpointRequestPrivate::CreateOriginEndpointRequestPrivate(
    const MediaPackageRequest::Action action, CreateOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateOriginEndpointRequest
 * class' copy constructor.
 */
CreateOriginEndpointRequestPrivate::CreateOriginEndpointRequestPrivate(
    const CreateOriginEndpointRequestPrivate &other, CreateOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
