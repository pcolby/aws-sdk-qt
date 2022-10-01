// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listactionsrequest.h"
#include "listactionsrequest_p.h"
#include "listactionsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListActionsRequest
 * \brief The ListActionsRequest class provides an interface for SageMaker ListActions requests.
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
 * \sa SageMakerClient::listActions
 */

/*!
 * Constructs a copy of \a other.
 */
ListActionsRequest::ListActionsRequest(const ListActionsRequest &other)
    : SageMakerRequest(new ListActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListActionsRequest object.
 */
ListActionsRequest::ListActionsRequest()
    : SageMakerRequest(new ListActionsRequestPrivate(SageMakerRequest::ListActionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListActionsRequest::response(QNetworkReply * const reply) const
{
    return new ListActionsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListActionsRequestPrivate
 * \brief The ListActionsRequestPrivate class provides private implementation for ListActionsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListActionsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListActionsRequestPrivate::ListActionsRequestPrivate(
    const SageMakerRequest::Action action, ListActionsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListActionsRequest
 * class' copy constructor.
 */
ListActionsRequestPrivate::ListActionsRequestPrivate(
    const ListActionsRequestPrivate &other, ListActionsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
