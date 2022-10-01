// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsubscribedworkteamsrequest.h"
#include "listsubscribedworkteamsrequest_p.h"
#include "listsubscribedworkteamsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListSubscribedWorkteamsRequest
 * \brief The ListSubscribedWorkteamsRequest class provides an interface for SageMaker ListSubscribedWorkteams requests.
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
 * \sa SageMakerClient::listSubscribedWorkteams
 */

/*!
 * Constructs a copy of \a other.
 */
ListSubscribedWorkteamsRequest::ListSubscribedWorkteamsRequest(const ListSubscribedWorkteamsRequest &other)
    : SageMakerRequest(new ListSubscribedWorkteamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSubscribedWorkteamsRequest object.
 */
ListSubscribedWorkteamsRequest::ListSubscribedWorkteamsRequest()
    : SageMakerRequest(new ListSubscribedWorkteamsRequestPrivate(SageMakerRequest::ListSubscribedWorkteamsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSubscribedWorkteamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSubscribedWorkteamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSubscribedWorkteamsRequest::response(QNetworkReply * const reply) const
{
    return new ListSubscribedWorkteamsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListSubscribedWorkteamsRequestPrivate
 * \brief The ListSubscribedWorkteamsRequestPrivate class provides private implementation for ListSubscribedWorkteamsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListSubscribedWorkteamsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListSubscribedWorkteamsRequestPrivate::ListSubscribedWorkteamsRequestPrivate(
    const SageMakerRequest::Action action, ListSubscribedWorkteamsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSubscribedWorkteamsRequest
 * class' copy constructor.
 */
ListSubscribedWorkteamsRequestPrivate::ListSubscribedWorkteamsRequestPrivate(
    const ListSubscribedWorkteamsRequestPrivate &other, ListSubscribedWorkteamsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
