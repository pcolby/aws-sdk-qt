// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listflowdefinitionsrequest.h"
#include "listflowdefinitionsrequest_p.h"
#include "listflowdefinitionsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListFlowDefinitionsRequest
 * \brief The ListFlowDefinitionsRequest class provides an interface for SageMaker ListFlowDefinitions requests.
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
 * \sa SageMakerClient::listFlowDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListFlowDefinitionsRequest::ListFlowDefinitionsRequest(const ListFlowDefinitionsRequest &other)
    : SageMakerRequest(new ListFlowDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFlowDefinitionsRequest object.
 */
ListFlowDefinitionsRequest::ListFlowDefinitionsRequest()
    : SageMakerRequest(new ListFlowDefinitionsRequestPrivate(SageMakerRequest::ListFlowDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFlowDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFlowDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFlowDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListFlowDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListFlowDefinitionsRequestPrivate
 * \brief The ListFlowDefinitionsRequestPrivate class provides private implementation for ListFlowDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListFlowDefinitionsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListFlowDefinitionsRequestPrivate::ListFlowDefinitionsRequestPrivate(
    const SageMakerRequest::Action action, ListFlowDefinitionsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFlowDefinitionsRequest
 * class' copy constructor.
 */
ListFlowDefinitionsRequestPrivate::ListFlowDefinitionsRequestPrivate(
    const ListFlowDefinitionsRequestPrivate &other, ListFlowDefinitionsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
