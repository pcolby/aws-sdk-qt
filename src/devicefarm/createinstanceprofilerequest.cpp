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

#include "createinstanceprofilerequest.h"
#include "createinstanceprofilerequest_p.h"
#include "createinstanceprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateInstanceProfileRequest
 *
 * \brief The CreateInstanceProfileRequest class provides an interface for DeviceFarm CreateInstanceProfile requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createInstanceProfile
 */

/*!
 * @brief  Constructs a new CreateInstanceProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateInstanceProfileRequest::CreateInstanceProfileRequest(const CreateInstanceProfileRequest &other)
    : DeviceFarmRequest(new CreateInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateInstanceProfileRequest object.
 */
CreateInstanceProfileRequest::CreateInstanceProfileRequest()
    : DeviceFarmRequest(new CreateInstanceProfileRequestPrivate(DeviceFarmRequest::CreateInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateInstanceProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateInstanceProfileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateInstanceProfileResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateInstanceProfileRequestPrivate
 *
 * @brief  Private implementation for CreateInstanceProfileRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateInstanceProfileRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public CreateInstanceProfileRequest instance.
 */
CreateInstanceProfileRequestPrivate::CreateInstanceProfileRequestPrivate(
    const DeviceFarmRequest::Action action, CreateInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateInstanceProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateInstanceProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateInstanceProfileRequest instance.
 */
CreateInstanceProfileRequestPrivate::CreateInstanceProfileRequestPrivate(
    const CreateInstanceProfileRequestPrivate &other, CreateInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
