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

#include "createclusterrequest.h"
#include "createclusterrequest_p.h"
#include "createclusterresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::CreateClusterRequest
 *
 * \brief The CreateClusterRequest class provides an interface for CloudHSMV2 CreateCluster requests.
 *
 * \ingroup CloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::createCluster
 */

/*!
 * @brief  Constructs a new CreateClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateClusterRequest::CreateClusterRequest(const CreateClusterRequest &other)
    : CloudHSMV2Request(new CreateClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateClusterRequest object.
 */
CreateClusterRequest::CreateClusterRequest()
    : CloudHSMV2Request(new CreateClusterRequestPrivate(CloudHSMV2Request::CreateClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateClusterRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateClusterResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMV2Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateClusterResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateClusterRequestPrivate
 *
 * @brief  Private implementation for CreateClusterRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateClusterRequestPrivate object.
 *
 * @param  action  CloudHSMV2 action being performed.
 * @param  q       Pointer to this object's public CreateClusterRequest instance.
 */
CreateClusterRequestPrivate::CreateClusterRequestPrivate(
    const CloudHSMV2Request::Action action, CreateClusterRequest * const q)
    : CloudHSMV2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateClusterRequest instance.
 */
CreateClusterRequestPrivate::CreateClusterRequestPrivate(
    const CreateClusterRequestPrivate &other, CreateClusterRequest * const q)
    : CloudHSMV2RequestPrivate(other, q)
{

}

} // namespace CloudHSMV2
} // namespace QtAws
