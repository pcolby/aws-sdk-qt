// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststudiolifecycleconfigsrequest.h"
#include "liststudiolifecycleconfigsrequest_p.h"
#include "liststudiolifecycleconfigsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListStudioLifecycleConfigsRequest
 * \brief The ListStudioLifecycleConfigsRequest class provides an interface for SageMaker ListStudioLifecycleConfigs requests.
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
 * \sa SageMakerClient::listStudioLifecycleConfigs
 */

/*!
 * Constructs a copy of \a other.
 */
ListStudioLifecycleConfigsRequest::ListStudioLifecycleConfigsRequest(const ListStudioLifecycleConfigsRequest &other)
    : SageMakerRequest(new ListStudioLifecycleConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStudioLifecycleConfigsRequest object.
 */
ListStudioLifecycleConfigsRequest::ListStudioLifecycleConfigsRequest()
    : SageMakerRequest(new ListStudioLifecycleConfigsRequestPrivate(SageMakerRequest::ListStudioLifecycleConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStudioLifecycleConfigsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStudioLifecycleConfigsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStudioLifecycleConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListStudioLifecycleConfigsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListStudioLifecycleConfigsRequestPrivate
 * \brief The ListStudioLifecycleConfigsRequestPrivate class provides private implementation for ListStudioLifecycleConfigsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListStudioLifecycleConfigsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListStudioLifecycleConfigsRequestPrivate::ListStudioLifecycleConfigsRequestPrivate(
    const SageMakerRequest::Action action, ListStudioLifecycleConfigsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStudioLifecycleConfigsRequest
 * class' copy constructor.
 */
ListStudioLifecycleConfigsRequestPrivate::ListStudioLifecycleConfigsRequestPrivate(
    const ListStudioLifecycleConfigsRequestPrivate &other, ListStudioLifecycleConfigsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
