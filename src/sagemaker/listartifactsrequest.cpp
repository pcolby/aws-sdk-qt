// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listartifactsrequest.h"
#include "listartifactsrequest_p.h"
#include "listartifactsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListArtifactsRequest
 * \brief The ListArtifactsRequest class provides an interface for SageMaker ListArtifacts requests.
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
 * \sa SageMakerClient::listArtifacts
 */

/*!
 * Constructs a copy of \a other.
 */
ListArtifactsRequest::ListArtifactsRequest(const ListArtifactsRequest &other)
    : SageMakerRequest(new ListArtifactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListArtifactsRequest object.
 */
ListArtifactsRequest::ListArtifactsRequest()
    : SageMakerRequest(new ListArtifactsRequestPrivate(SageMakerRequest::ListArtifactsAction, this))
{

}

/*!
 * \reimp
 */
bool ListArtifactsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListArtifactsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListArtifactsRequest::response(QNetworkReply * const reply) const
{
    return new ListArtifactsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListArtifactsRequestPrivate
 * \brief The ListArtifactsRequestPrivate class provides private implementation for ListArtifactsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListArtifactsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListArtifactsRequestPrivate::ListArtifactsRequestPrivate(
    const SageMakerRequest::Action action, ListArtifactsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListArtifactsRequest
 * class' copy constructor.
 */
ListArtifactsRequestPrivate::ListArtifactsRequestPrivate(
    const ListArtifactsRequestPrivate &other, ListArtifactsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
