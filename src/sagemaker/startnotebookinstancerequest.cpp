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

#include "startnotebookinstancerequest.h"
#include "startnotebookinstancerequest_p.h"
#include "startnotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StartNotebookInstanceRequest
 * \brief The StartNotebookInstanceRequest class provides an interface for SageMaker StartNotebookInstance requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::startNotebookInstance
 */

/*!
 * Constructs a copy of \a other.
 */
StartNotebookInstanceRequest::StartNotebookInstanceRequest(const StartNotebookInstanceRequest &other)
    : SageMakerRequest(new StartNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartNotebookInstanceRequest object.
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
 * Returns a StartNotebookInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StartNotebookInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StartNotebookInstanceRequestPrivate
 * \brief The StartNotebookInstanceRequestPrivate class provides private implementation for StartNotebookInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StartNotebookInstanceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StartNotebookInstanceRequestPrivate::StartNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, StartNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartNotebookInstanceRequest
 * class' copy constructor.
 */
StartNotebookInstanceRequestPrivate::StartNotebookInstanceRequestPrivate(
    const StartNotebookInstanceRequestPrivate &other, StartNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
