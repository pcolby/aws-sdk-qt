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

#include "startnotebookinstancerequest.h"
#include "startnotebookinstancerequest_p.h"
#include "startnotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StartNotebookInstanceRequest
 *
 * \brief The StartNotebookInstanceRequest class encapsulates SageMaker StartNotebookInstance requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::startNotebookInstance
 */

/*!
 * @brief  Constructs a new StartNotebookInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartNotebookInstanceRequest::StartNotebookInstanceRequest(const StartNotebookInstanceRequest &other)
    : SageMakerRequest(new StartNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StartNotebookInstanceRequest object.
 */
StartNotebookInstanceRequest::StartNotebookInstanceRequest()
    : SageMakerRequest(new StartNotebookInstanceRequestPrivate(SageMakerRequest::StartNotebookInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool StartNotebookInstanceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StartNotebookInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartNotebookInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * StartNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StartNotebookInstanceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StartNotebookInstanceRequestPrivate
 *
 * @brief  Private implementation for StartNotebookInstanceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartNotebookInstanceRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public StartNotebookInstanceRequest instance.
 */
StartNotebookInstanceRequestPrivate::StartNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, StartNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StartNotebookInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartNotebookInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartNotebookInstanceRequest instance.
 */
StartNotebookInstanceRequestPrivate::StartNotebookInstanceRequestPrivate(
    const StartNotebookInstanceRequestPrivate &other, StartNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
