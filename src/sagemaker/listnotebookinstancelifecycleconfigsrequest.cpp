// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnotebookinstancelifecycleconfigsrequest.h"
#include "listnotebookinstancelifecycleconfigsrequest_p.h"
#include "listnotebookinstancelifecycleconfigsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListNotebookInstanceLifecycleConfigsRequest
 * \brief The ListNotebookInstanceLifecycleConfigsRequest class provides an interface for SageMaker ListNotebookInstanceLifecycleConfigs requests.
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
 * \sa SageMakerClient::listNotebookInstanceLifecycleConfigs
 */

/*!
 * Constructs a copy of \a other.
 */
ListNotebookInstanceLifecycleConfigsRequest::ListNotebookInstanceLifecycleConfigsRequest(const ListNotebookInstanceLifecycleConfigsRequest &other)
    : SageMakerRequest(new ListNotebookInstanceLifecycleConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNotebookInstanceLifecycleConfigsRequest object.
 */
ListNotebookInstanceLifecycleConfigsRequest::ListNotebookInstanceLifecycleConfigsRequest()
    : SageMakerRequest(new ListNotebookInstanceLifecycleConfigsRequestPrivate(SageMakerRequest::ListNotebookInstanceLifecycleConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListNotebookInstanceLifecycleConfigsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNotebookInstanceLifecycleConfigsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNotebookInstanceLifecycleConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListNotebookInstanceLifecycleConfigsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListNotebookInstanceLifecycleConfigsRequestPrivate
 * \brief The ListNotebookInstanceLifecycleConfigsRequestPrivate class provides private implementation for ListNotebookInstanceLifecycleConfigsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListNotebookInstanceLifecycleConfigsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListNotebookInstanceLifecycleConfigsRequestPrivate::ListNotebookInstanceLifecycleConfigsRequestPrivate(
    const SageMakerRequest::Action action, ListNotebookInstanceLifecycleConfigsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNotebookInstanceLifecycleConfigsRequest
 * class' copy constructor.
 */
ListNotebookInstanceLifecycleConfigsRequestPrivate::ListNotebookInstanceLifecycleConfigsRequestPrivate(
    const ListNotebookInstanceLifecycleConfigsRequestPrivate &other, ListNotebookInstanceLifecycleConfigsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
