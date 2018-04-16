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

#include "deletevpcassociationauthorizationrequest.h"
#include "deletevpcassociationauthorizationrequest_p.h"
#include "deletevpcassociationauthorizationresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteVPCAssociationAuthorizationRequest
 *
 * \brief The DeleteVPCAssociationAuthorizationRequest class encapsulates Route53 DeleteVPCAssociationAuthorization requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::deleteVPCAssociationAuthorization
 */

/*!
 * @brief  Constructs a new DeleteVPCAssociationAuthorizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVPCAssociationAuthorizationRequest::DeleteVPCAssociationAuthorizationRequest(const DeleteVPCAssociationAuthorizationRequest &other)
    : Route53Request(new DeleteVPCAssociationAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteVPCAssociationAuthorizationRequest object.
 */
DeleteVPCAssociationAuthorizationRequest::DeleteVPCAssociationAuthorizationRequest()
    : Route53Request(new DeleteVPCAssociationAuthorizationRequestPrivate(Route53Request::DeleteVPCAssociationAuthorizationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVPCAssociationAuthorizationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteVPCAssociationAuthorizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVPCAssociationAuthorizationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVPCAssociationAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVPCAssociationAuthorizationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteVPCAssociationAuthorizationRequestPrivate
 *
 * @brief  Private implementation for DeleteVPCAssociationAuthorizationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteVPCAssociationAuthorizationRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public DeleteVPCAssociationAuthorizationRequest instance.
 */
DeleteVPCAssociationAuthorizationRequestPrivate::DeleteVPCAssociationAuthorizationRequestPrivate(
    const Route53Request::Action action, DeleteVPCAssociationAuthorizationRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteVPCAssociationAuthorizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVPCAssociationAuthorizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVPCAssociationAuthorizationRequest instance.
 */
DeleteVPCAssociationAuthorizationRequestPrivate::DeleteVPCAssociationAuthorizationRequestPrivate(
    const DeleteVPCAssociationAuthorizationRequestPrivate &other, DeleteVPCAssociationAuthorizationRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
