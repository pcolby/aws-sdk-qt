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

#include "createhsmrequest.h"
#include "createhsmrequest_p.h"
#include "createhsmresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::CreateHsmRequest
 *
 * \brief The CreateHsmRequest class encapsulates CloudHSMV2 CreateHsm requests.
 *
 * \ingroup CloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::createHsm
 */

/*!
 * @brief  Constructs a new CreateHsmRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateHsmRequest::CreateHsmRequest(const CreateHsmRequest &other)
    : CloudHSMV2Request(new CreateHsmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateHsmRequest object.
 */
CreateHsmRequest::CreateHsmRequest()
    : CloudHSMV2Request(new CreateHsmRequestPrivate(CloudHSMV2Request::CreateHsmAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHsmRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateHsmResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateHsmResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMV2Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateHsmRequest::response(QNetworkReply * const reply) const
{
    return new CreateHsmResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateHsmRequestPrivate
 *
 * @brief  Private implementation for CreateHsmRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateHsmRequestPrivate object.
 *
 * @param  action  CloudHSMV2 action being performed.
 * @param  q       Pointer to this object's public CreateHsmRequest instance.
 */
CreateHsmRequestPrivate::CreateHsmRequestPrivate(
    const CloudHSMV2Request::Action action, CreateHsmRequest * const q)
    : CloudHSMV2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateHsmRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateHsmRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateHsmRequest instance.
 */
CreateHsmRequestPrivate::CreateHsmRequestPrivate(
    const CreateHsmRequestPrivate &other, CreateHsmRequest * const q)
    : CloudHSMV2RequestPrivate(other, q)
{

}

} // namespace CloudHSMV2
} // namespace QtAws
