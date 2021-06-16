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

#include "createpresignednotebookinstanceurlrequest.h"
#include "createpresignednotebookinstanceurlrequest_p.h"
#include "createpresignednotebookinstanceurlresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreatePresignedNotebookInstanceUrlRequest
 * \brief The CreatePresignedNotebookInstanceUrlRequest class provides an interface for SageMaker CreatePresignedNotebookInstanceUrl requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createPresignedNotebookInstanceUrl
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePresignedNotebookInstanceUrlRequest::CreatePresignedNotebookInstanceUrlRequest(const CreatePresignedNotebookInstanceUrlRequest &other)
    : SageMakerRequest(new CreatePresignedNotebookInstanceUrlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePresignedNotebookInstanceUrlRequest object.
 */
CreatePresignedNotebookInstanceUrlRequest::CreatePresignedNotebookInstanceUrlRequest()
    : SageMakerRequest(new CreatePresignedNotebookInstanceUrlRequestPrivate(SageMakerRequest::CreatePresignedNotebookInstanceUrlAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePresignedNotebookInstanceUrlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePresignedNotebookInstanceUrlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePresignedNotebookInstanceUrlRequest::response(QNetworkReply * const reply) const
{
    return new CreatePresignedNotebookInstanceUrlResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreatePresignedNotebookInstanceUrlRequestPrivate
 * \brief The CreatePresignedNotebookInstanceUrlRequestPrivate class provides private implementation for CreatePresignedNotebookInstanceUrlRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreatePresignedNotebookInstanceUrlRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreatePresignedNotebookInstanceUrlRequestPrivate::CreatePresignedNotebookInstanceUrlRequestPrivate(
    const SageMakerRequest::Action action, CreatePresignedNotebookInstanceUrlRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePresignedNotebookInstanceUrlRequest
 * class' copy constructor.
 */
CreatePresignedNotebookInstanceUrlRequestPrivate::CreatePresignedNotebookInstanceUrlRequestPrivate(
    const CreatePresignedNotebookInstanceUrlRequestPrivate &other, CreatePresignedNotebookInstanceUrlRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
