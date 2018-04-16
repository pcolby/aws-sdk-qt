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

#include "updatenotebookinstancerequest.h"
#include "updatenotebookinstancerequest_p.h"
#include "updatenotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceRequest
 *
 * \brief The UpdateNotebookInstanceRequest class encapsulates SageMaker UpdateNotebookInstance requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::updateNotebookInstance
 */

/*!
 * @brief  Constructs a new UpdateNotebookInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateNotebookInstanceRequest::UpdateNotebookInstanceRequest(const UpdateNotebookInstanceRequest &other)
    : SageMakerRequest(new UpdateNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateNotebookInstanceRequest object.
 */
UpdateNotebookInstanceRequest::UpdateNotebookInstanceRequest()
    : SageMakerRequest(new UpdateNotebookInstanceRequestPrivate(SageMakerRequest::UpdateNotebookInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNotebookInstanceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateNotebookInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateNotebookInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNotebookInstanceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateNotebookInstanceRequestPrivate
 *
 * @brief  Private implementation for UpdateNotebookInstanceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateNotebookInstanceRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public UpdateNotebookInstanceRequest instance.
 */
UpdateNotebookInstanceRequestPrivate::UpdateNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, UpdateNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateNotebookInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateNotebookInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateNotebookInstanceRequest instance.
 */
UpdateNotebookInstanceRequestPrivate::UpdateNotebookInstanceRequestPrivate(
    const UpdateNotebookInstanceRequestPrivate &other, UpdateNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
