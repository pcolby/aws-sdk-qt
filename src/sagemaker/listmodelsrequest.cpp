// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelsrequest.h"
#include "listmodelsrequest_p.h"
#include "listmodelsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelsRequest
 * \brief The ListModelsRequest class provides an interface for SageMaker ListModels requests.
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
 * \sa SageMakerClient::listModels
 */

/*!
 * Constructs a copy of \a other.
 */
ListModelsRequest::ListModelsRequest(const ListModelsRequest &other)
    : SageMakerRequest(new ListModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListModelsRequest object.
 */
ListModelsRequest::ListModelsRequest()
    : SageMakerRequest(new ListModelsRequestPrivate(SageMakerRequest::ListModelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListModelsRequest::response(QNetworkReply * const reply) const
{
    return new ListModelsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListModelsRequestPrivate
 * \brief The ListModelsRequestPrivate class provides private implementation for ListModelsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListModelsRequestPrivate::ListModelsRequestPrivate(
    const SageMakerRequest::Action action, ListModelsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListModelsRequest
 * class' copy constructor.
 */
ListModelsRequestPrivate::ListModelsRequestPrivate(
    const ListModelsRequestPrivate &other, ListModelsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
