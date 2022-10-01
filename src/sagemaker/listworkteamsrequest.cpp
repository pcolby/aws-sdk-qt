// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkteamsrequest.h"
#include "listworkteamsrequest_p.h"
#include "listworkteamsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListWorkteamsRequest
 * \brief The ListWorkteamsRequest class provides an interface for SageMaker ListWorkteams requests.
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
 * \sa SageMakerClient::listWorkteams
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkteamsRequest::ListWorkteamsRequest(const ListWorkteamsRequest &other)
    : SageMakerRequest(new ListWorkteamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkteamsRequest object.
 */
ListWorkteamsRequest::ListWorkteamsRequest()
    : SageMakerRequest(new ListWorkteamsRequestPrivate(SageMakerRequest::ListWorkteamsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkteamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkteamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkteamsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkteamsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListWorkteamsRequestPrivate
 * \brief The ListWorkteamsRequestPrivate class provides private implementation for ListWorkteamsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListWorkteamsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListWorkteamsRequestPrivate::ListWorkteamsRequestPrivate(
    const SageMakerRequest::Action action, ListWorkteamsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkteamsRequest
 * class' copy constructor.
 */
ListWorkteamsRequestPrivate::ListWorkteamsRequestPrivate(
    const ListWorkteamsRequestPrivate &other, ListWorkteamsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
