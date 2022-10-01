// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnotebookinstancesrequest.h"
#include "listnotebookinstancesrequest_p.h"
#include "listnotebookinstancesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListNotebookInstancesRequest
 * \brief The ListNotebookInstancesRequest class provides an interface for SageMaker ListNotebookInstances requests.
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
 * \sa SageMakerClient::listNotebookInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListNotebookInstancesRequest::ListNotebookInstancesRequest(const ListNotebookInstancesRequest &other)
    : SageMakerRequest(new ListNotebookInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNotebookInstancesRequest object.
 */
ListNotebookInstancesRequest::ListNotebookInstancesRequest()
    : SageMakerRequest(new ListNotebookInstancesRequestPrivate(SageMakerRequest::ListNotebookInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNotebookInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNotebookInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNotebookInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListNotebookInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListNotebookInstancesRequestPrivate
 * \brief The ListNotebookInstancesRequestPrivate class provides private implementation for ListNotebookInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListNotebookInstancesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListNotebookInstancesRequestPrivate::ListNotebookInstancesRequestPrivate(
    const SageMakerRequest::Action action, ListNotebookInstancesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNotebookInstancesRequest
 * class' copy constructor.
 */
ListNotebookInstancesRequestPrivate::ListNotebookInstancesRequestPrivate(
    const ListNotebookInstancesRequestPrivate &other, ListNotebookInstancesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
