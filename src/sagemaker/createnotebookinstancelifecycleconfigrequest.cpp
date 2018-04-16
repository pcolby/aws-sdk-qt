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

#include "createnotebookinstancelifecycleconfigrequest.h"
#include "createnotebookinstancelifecycleconfigrequest_p.h"
#include "createnotebookinstancelifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceLifecycleConfigRequest
 *
 * \brief The CreateNotebookInstanceLifecycleConfigRequest class provides an interface for SageMaker CreateNotebookInstanceLifecycleConfig requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::createNotebookInstanceLifecycleConfig
 */

/*!
 * @brief  Constructs a new CreateNotebookInstanceLifecycleConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateNotebookInstanceLifecycleConfigRequest::CreateNotebookInstanceLifecycleConfigRequest(const CreateNotebookInstanceLifecycleConfigRequest &other)
    : SageMakerRequest(new CreateNotebookInstanceLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateNotebookInstanceLifecycleConfigRequest object.
 */
CreateNotebookInstanceLifecycleConfigRequest::CreateNotebookInstanceLifecycleConfigRequest()
    : SageMakerRequest(new CreateNotebookInstanceLifecycleConfigRequestPrivate(SageMakerRequest::CreateNotebookInstanceLifecycleConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNotebookInstanceLifecycleConfigRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateNotebookInstanceLifecycleConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateNotebookInstanceLifecycleConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNotebookInstanceLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateNotebookInstanceLifecycleConfigResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateNotebookInstanceLifecycleConfigRequestPrivate
 *
 * @brief  Private implementation for CreateNotebookInstanceLifecycleConfigRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateNotebookInstanceLifecycleConfigRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public CreateNotebookInstanceLifecycleConfigRequest instance.
 */
CreateNotebookInstanceLifecycleConfigRequestPrivate::CreateNotebookInstanceLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, CreateNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateNotebookInstanceLifecycleConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateNotebookInstanceLifecycleConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateNotebookInstanceLifecycleConfigRequest instance.
 */
CreateNotebookInstanceLifecycleConfigRequestPrivate::CreateNotebookInstanceLifecycleConfigRequestPrivate(
    const CreateNotebookInstanceLifecycleConfigRequestPrivate &other, CreateNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
