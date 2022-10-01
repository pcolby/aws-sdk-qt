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

#include "listmodelbiasjobdefinitionsrequest.h"
#include "listmodelbiasjobdefinitionsrequest_p.h"
#include "listmodelbiasjobdefinitionsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelBiasJobDefinitionsRequest
 * \brief The ListModelBiasJobDefinitionsRequest class provides an interface for SageMaker ListModelBiasJobDefinitions requests.
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
 * \sa SageMakerClient::listModelBiasJobDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListModelBiasJobDefinitionsRequest::ListModelBiasJobDefinitionsRequest(const ListModelBiasJobDefinitionsRequest &other)
    : SageMakerRequest(new ListModelBiasJobDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListModelBiasJobDefinitionsRequest object.
 */
ListModelBiasJobDefinitionsRequest::ListModelBiasJobDefinitionsRequest()
    : SageMakerRequest(new ListModelBiasJobDefinitionsRequestPrivate(SageMakerRequest::ListModelBiasJobDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListModelBiasJobDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListModelBiasJobDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListModelBiasJobDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListModelBiasJobDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListModelBiasJobDefinitionsRequestPrivate
 * \brief The ListModelBiasJobDefinitionsRequestPrivate class provides private implementation for ListModelBiasJobDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelBiasJobDefinitionsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListModelBiasJobDefinitionsRequestPrivate::ListModelBiasJobDefinitionsRequestPrivate(
    const SageMakerRequest::Action action, ListModelBiasJobDefinitionsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListModelBiasJobDefinitionsRequest
 * class' copy constructor.
 */
ListModelBiasJobDefinitionsRequestPrivate::ListModelBiasJobDefinitionsRequestPrivate(
    const ListModelBiasJobDefinitionsRequestPrivate &other, ListModelBiasJobDefinitionsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
