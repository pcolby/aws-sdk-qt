// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrialcomponentsrequest.h"
#include "listtrialcomponentsrequest_p.h"
#include "listtrialcomponentsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTrialComponentsRequest
 * \brief The ListTrialComponentsRequest class provides an interface for SageMaker ListTrialComponents requests.
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
 * \sa SageMakerClient::listTrialComponents
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrialComponentsRequest::ListTrialComponentsRequest(const ListTrialComponentsRequest &other)
    : SageMakerRequest(new ListTrialComponentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrialComponentsRequest object.
 */
ListTrialComponentsRequest::ListTrialComponentsRequest()
    : SageMakerRequest(new ListTrialComponentsRequestPrivate(SageMakerRequest::ListTrialComponentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrialComponentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrialComponentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrialComponentsRequest::response(QNetworkReply * const reply) const
{
    return new ListTrialComponentsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListTrialComponentsRequestPrivate
 * \brief The ListTrialComponentsRequestPrivate class provides private implementation for ListTrialComponentsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTrialComponentsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListTrialComponentsRequestPrivate::ListTrialComponentsRequestPrivate(
    const SageMakerRequest::Action action, ListTrialComponentsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrialComponentsRequest
 * class' copy constructor.
 */
ListTrialComponentsRequestPrivate::ListTrialComponentsRequestPrivate(
    const ListTrialComponentsRequestPrivate &other, ListTrialComponentsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
