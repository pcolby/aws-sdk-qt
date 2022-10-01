/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletemodelqualityjobdefinitionrequest.h"
#include "deletemodelqualityjobdefinitionrequest_p.h"
#include "deletemodelqualityjobdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelQualityJobDefinitionRequest
 * \brief The DeleteModelQualityJobDefinitionRequest class provides an interface for SageMaker DeleteModelQualityJobDefinition requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::deleteModelQualityJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelQualityJobDefinitionRequest::DeleteModelQualityJobDefinitionRequest(const DeleteModelQualityJobDefinitionRequest &other)
    : SageMakerRequest(new DeleteModelQualityJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelQualityJobDefinitionRequest object.
 */
DeleteModelQualityJobDefinitionRequest::DeleteModelQualityJobDefinitionRequest()
    : SageMakerRequest(new DeleteModelQualityJobDefinitionRequestPrivate(SageMakerRequest::DeleteModelQualityJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelQualityJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelQualityJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelQualityJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelQualityJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteModelQualityJobDefinitionRequestPrivate
 * \brief The DeleteModelQualityJobDefinitionRequestPrivate class provides private implementation for DeleteModelQualityJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelQualityJobDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteModelQualityJobDefinitionRequestPrivate::DeleteModelQualityJobDefinitionRequestPrivate(
    const SageMakerRequest::Action action, DeleteModelQualityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelQualityJobDefinitionRequest
 * class' copy constructor.
 */
DeleteModelQualityJobDefinitionRequestPrivate::DeleteModelQualityJobDefinitionRequestPrivate(
    const DeleteModelQualityJobDefinitionRequestPrivate &other, DeleteModelQualityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
