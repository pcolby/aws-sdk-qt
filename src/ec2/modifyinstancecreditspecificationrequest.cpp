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

#include "modifyinstancecreditspecificationrequest.h"
#include "modifyinstancecreditspecificationrequest_p.h"
#include "modifyinstancecreditspecificationresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyInstanceCreditSpecificationRequest
 *
 * @brief  Implements EC2 ModifyInstanceCreditSpecification requests.
 *
 * @see    EC2Client::modifyInstanceCreditSpecification
 */

/**
 * @brief  Constructs a new ModifyInstanceCreditSpecificationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyInstanceCreditSpecificationRequest::ModifyInstanceCreditSpecificationRequest(const ModifyInstanceCreditSpecificationRequest &other)
    : EC2Request(new ModifyInstanceCreditSpecificationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyInstanceCreditSpecificationRequest object.
 */
ModifyInstanceCreditSpecificationRequest::ModifyInstanceCreditSpecificationRequest()
    : EC2Request(new ModifyInstanceCreditSpecificationRequestPrivate(EC2Request::ModifyInstanceCreditSpecificationAction, this))
{

}

bool ModifyInstanceCreditSpecificationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyInstanceCreditSpecificationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyInstanceCreditSpecificationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyInstanceCreditSpecificationRequest::response(QNetworkReply * const reply) const
{
    return new ModifyInstanceCreditSpecificationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyInstanceCreditSpecificationRequestPrivate
 *
 * @brief  Private implementation for ModifyInstanceCreditSpecificationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceCreditSpecificationRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyInstanceCreditSpecificationRequest instance.
 */
ModifyInstanceCreditSpecificationRequestPrivate::ModifyInstanceCreditSpecificationRequestPrivate(
    const EC2Request::Action action, ModifyInstanceCreditSpecificationRequest * const q)
    : ModifyInstanceCreditSpecificationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceCreditSpecificationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyInstanceCreditSpecificationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyInstanceCreditSpecificationRequest instance.
 */
ModifyInstanceCreditSpecificationRequestPrivate::ModifyInstanceCreditSpecificationRequestPrivate(
    const ModifyInstanceCreditSpecificationRequestPrivate &other, ModifyInstanceCreditSpecificationRequest * const q)
    : ModifyInstanceCreditSpecificationPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
