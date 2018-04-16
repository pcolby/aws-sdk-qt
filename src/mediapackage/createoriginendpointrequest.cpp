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

#include "createoriginendpointrequest.h"
#include "createoriginendpointrequest_p.h"
#include "createoriginendpointresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::CreateOriginEndpointRequest
 *
 * \brief The CreateOriginEndpointRequest class provides an interface for MediaPackage CreateOriginEndpoint requests.
 *
 * \ingroup MediaPackage
 *
 *
 * \sa MediaPackageClient::createOriginEndpoint
 */

/*!
 * @brief  Constructs a new CreateOriginEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateOriginEndpointRequest::CreateOriginEndpointRequest(const CreateOriginEndpointRequest &other)
    : MediaPackageRequest(new CreateOriginEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateOriginEndpointRequest object.
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
 * @brief  Construct an CreateOriginEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateOriginEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaPackageClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateOriginEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateOriginEndpointResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateOriginEndpointRequestPrivate
 *
 * @brief  Private implementation for CreateOriginEndpointRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateOriginEndpointRequestPrivate object.
 *
 * @param  action  MediaPackage action being performed.
 * @param  q       Pointer to this object's public CreateOriginEndpointRequest instance.
 */
CreateOriginEndpointRequestPrivate::CreateOriginEndpointRequestPrivate(
    const MediaPackageRequest::Action action, CreateOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateOriginEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateOriginEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateOriginEndpointRequest instance.
 */
CreateOriginEndpointRequestPrivate::CreateOriginEndpointRequestPrivate(
    const CreateOriginEndpointRequestPrivate &other, CreateOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
