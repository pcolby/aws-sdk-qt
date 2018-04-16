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

#include "modifyspotfleetrequestrequest.h"
#include "modifyspotfleetrequestrequest_p.h"
#include "modifyspotfleetrequestresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifySpotFleetRequestRequest
 *
 * \brief The ModifySpotFleetRequestRequest class provides an interface for EC2 ModifySpotFleetRequest requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::modifySpotFleetRequest
 */

/*!
 * @brief  Constructs a new ModifySpotFleetRequestRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifySpotFleetRequestRequest::ModifySpotFleetRequestRequest(const ModifySpotFleetRequestRequest &other)
    : EC2Request(new ModifySpotFleetRequestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ModifySpotFleetRequestRequest object.
 */
ModifySpotFleetRequestRequest::ModifySpotFleetRequestRequest()
    : EC2Request(new ModifySpotFleetRequestRequestPrivate(EC2Request::ModifySpotFleetRequestAction, this))
{

}

/*!
 * \reimp
 */
bool ModifySpotFleetRequestRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ModifySpotFleetRequestResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifySpotFleetRequestResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * ModifySpotFleetRequestRequest::response(QNetworkReply * const reply) const
{
    return new ModifySpotFleetRequestResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ModifySpotFleetRequestRequestPrivate
 *
 * @brief  Private implementation for ModifySpotFleetRequestRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifySpotFleetRequestRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifySpotFleetRequestRequest instance.
 */
ModifySpotFleetRequestRequestPrivate::ModifySpotFleetRequestRequestPrivate(
    const EC2Request::Action action, ModifySpotFleetRequestRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ModifySpotFleetRequestRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifySpotFleetRequestRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifySpotFleetRequestRequest instance.
 */
ModifySpotFleetRequestRequestPrivate::ModifySpotFleetRequestRequestPrivate(
    const ModifySpotFleetRequestRequestPrivate &other, ModifySpotFleetRequestRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
