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

#include "createuploadrequest.h"
#include "createuploadrequest_p.h"
#include "createuploadresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateUploadRequest
 *
 * \brief The CreateUploadRequest class encapsulates DeviceFarm CreateUpload requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createUpload
 */

/*!
 * @brief  Constructs a new CreateUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateUploadRequest::CreateUploadRequest(const CreateUploadRequest &other)
    : DeviceFarmRequest(new CreateUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateUploadRequest object.
 */
CreateUploadRequest::CreateUploadRequest()
    : DeviceFarmRequest(new CreateUploadRequestPrivate(DeviceFarmRequest::CreateUploadAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUploadRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateUploadResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUploadRequest::response(QNetworkReply * const reply) const
{
    return new CreateUploadResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateUploadRequestPrivate
 *
 * @brief  Private implementation for CreateUploadRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateUploadRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public CreateUploadRequest instance.
 */
CreateUploadRequestPrivate::CreateUploadRequestPrivate(
    const DeviceFarmRequest::Action action, CreateUploadRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateUploadRequest instance.
 */
CreateUploadRequestPrivate::CreateUploadRequestPrivate(
    const CreateUploadRequestPrivate &other, CreateUploadRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
