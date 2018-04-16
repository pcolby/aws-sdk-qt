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

#include "getservicegraphrequest.h"
#include "getservicegraphrequest_p.h"
#include "getservicegraphresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetServiceGraphRequest
 *
 * \brief The GetServiceGraphRequest class provides an interface for XRay GetServiceGraph requests.
 *
 * \ingroup XRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getServiceGraph
 */

/*!
 * @brief  Constructs a new GetServiceGraphRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetServiceGraphRequest::GetServiceGraphRequest(const GetServiceGraphRequest &other)
    : XRayRequest(new GetServiceGraphRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetServiceGraphRequest object.
 */
GetServiceGraphRequest::GetServiceGraphRequest()
    : XRayRequest(new GetServiceGraphRequestPrivate(XRayRequest::GetServiceGraphAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceGraphRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetServiceGraphResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetServiceGraphResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  XRayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceGraphRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceGraphResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetServiceGraphRequestPrivate
 *
 * @brief  Private implementation for GetServiceGraphRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetServiceGraphRequestPrivate object.
 *
 * @param  action  XRay action being performed.
 * @param  q       Pointer to this object's public GetServiceGraphRequest instance.
 */
GetServiceGraphRequestPrivate::GetServiceGraphRequestPrivate(
    const XRayRequest::Action action, GetServiceGraphRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetServiceGraphRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetServiceGraphRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetServiceGraphRequest instance.
 */
GetServiceGraphRequestPrivate::GetServiceGraphRequestPrivate(
    const GetServiceGraphRequestPrivate &other, GetServiceGraphRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
