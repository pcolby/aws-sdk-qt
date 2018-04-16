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

#include "deletehostedzonerequest.h"
#include "deletehostedzonerequest_p.h"
#include "deletehostedzoneresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteHostedZoneRequest
 *
 * \brief The DeleteHostedZoneRequest class provides an interface for Route53 DeleteHostedZone requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::deleteHostedZone
 */

/*!
 * @brief  Constructs a new DeleteHostedZoneRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteHostedZoneRequest::DeleteHostedZoneRequest(const DeleteHostedZoneRequest &other)
    : Route53Request(new DeleteHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteHostedZoneRequest object.
 */
DeleteHostedZoneRequest::DeleteHostedZoneRequest()
    : Route53Request(new DeleteHostedZoneRequestPrivate(Route53Request::DeleteHostedZoneAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHostedZoneRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteHostedZoneResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteHostedZoneResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHostedZoneResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteHostedZoneRequestPrivate
 *
 * @brief  Private implementation for DeleteHostedZoneRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteHostedZoneRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public DeleteHostedZoneRequest instance.
 */
DeleteHostedZoneRequestPrivate::DeleteHostedZoneRequestPrivate(
    const Route53Request::Action action, DeleteHostedZoneRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteHostedZoneRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteHostedZoneRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteHostedZoneRequest instance.
 */
DeleteHostedZoneRequestPrivate::DeleteHostedZoneRequestPrivate(
    const DeleteHostedZoneRequestPrivate &other, DeleteHostedZoneRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
