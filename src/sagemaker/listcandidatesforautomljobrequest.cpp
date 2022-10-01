// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcandidatesforautomljobrequest.h"
#include "listcandidatesforautomljobrequest_p.h"
#include "listcandidatesforautomljobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListCandidatesForAutoMLJobRequest
 * \brief The ListCandidatesForAutoMLJobRequest class provides an interface for SageMaker ListCandidatesForAutoMLJob requests.
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
 * \sa SageMakerClient::listCandidatesForAutoMLJob
 */

/*!
 * Constructs a copy of \a other.
 */
ListCandidatesForAutoMLJobRequest::ListCandidatesForAutoMLJobRequest(const ListCandidatesForAutoMLJobRequest &other)
    : SageMakerRequest(new ListCandidatesForAutoMLJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCandidatesForAutoMLJobRequest object.
 */
ListCandidatesForAutoMLJobRequest::ListCandidatesForAutoMLJobRequest()
    : SageMakerRequest(new ListCandidatesForAutoMLJobRequestPrivate(SageMakerRequest::ListCandidatesForAutoMLJobAction, this))
{

}

/*!
 * \reimp
 */
bool ListCandidatesForAutoMLJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCandidatesForAutoMLJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCandidatesForAutoMLJobRequest::response(QNetworkReply * const reply) const
{
    return new ListCandidatesForAutoMLJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListCandidatesForAutoMLJobRequestPrivate
 * \brief The ListCandidatesForAutoMLJobRequestPrivate class provides private implementation for ListCandidatesForAutoMLJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListCandidatesForAutoMLJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListCandidatesForAutoMLJobRequestPrivate::ListCandidatesForAutoMLJobRequestPrivate(
    const SageMakerRequest::Action action, ListCandidatesForAutoMLJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCandidatesForAutoMLJobRequest
 * class' copy constructor.
 */
ListCandidatesForAutoMLJobRequestPrivate::ListCandidatesForAutoMLJobRequestPrivate(
    const ListCandidatesForAutoMLJobRequestPrivate &other, ListCandidatesForAutoMLJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
