// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listalgorithmsrequest.h"
#include "listalgorithmsrequest_p.h"
#include "listalgorithmsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAlgorithmsRequest
 * \brief The ListAlgorithmsRequest class provides an interface for SageMaker ListAlgorithms requests.
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
 * \sa SageMakerClient::listAlgorithms
 */

/*!
 * Constructs a copy of \a other.
 */
ListAlgorithmsRequest::ListAlgorithmsRequest(const ListAlgorithmsRequest &other)
    : SageMakerRequest(new ListAlgorithmsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAlgorithmsRequest object.
 */
ListAlgorithmsRequest::ListAlgorithmsRequest()
    : SageMakerRequest(new ListAlgorithmsRequestPrivate(SageMakerRequest::ListAlgorithmsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAlgorithmsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAlgorithmsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAlgorithmsRequest::response(QNetworkReply * const reply) const
{
    return new ListAlgorithmsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListAlgorithmsRequestPrivate
 * \brief The ListAlgorithmsRequestPrivate class provides private implementation for ListAlgorithmsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAlgorithmsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListAlgorithmsRequestPrivate::ListAlgorithmsRequestPrivate(
    const SageMakerRequest::Action action, ListAlgorithmsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAlgorithmsRequest
 * class' copy constructor.
 */
ListAlgorithmsRequestPrivate::ListAlgorithmsRequestPrivate(
    const ListAlgorithmsRequestPrivate &other, ListAlgorithmsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
