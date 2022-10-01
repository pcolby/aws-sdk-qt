// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassociationsrequest.h"
#include "listassociationsrequest_p.h"
#include "listassociationsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAssociationsRequest
 * \brief The ListAssociationsRequest class provides an interface for SageMaker ListAssociations requests.
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
 * \sa SageMakerClient::listAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssociationsRequest::ListAssociationsRequest(const ListAssociationsRequest &other)
    : SageMakerRequest(new ListAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssociationsRequest object.
 */
ListAssociationsRequest::ListAssociationsRequest()
    : SageMakerRequest(new ListAssociationsRequestPrivate(SageMakerRequest::ListAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListAssociationsRequestPrivate
 * \brief The ListAssociationsRequestPrivate class provides private implementation for ListAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAssociationsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListAssociationsRequestPrivate::ListAssociationsRequestPrivate(
    const SageMakerRequest::Action action, ListAssociationsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssociationsRequest
 * class' copy constructor.
 */
ListAssociationsRequestPrivate::ListAssociationsRequestPrivate(
    const ListAssociationsRequestPrivate &other, ListAssociationsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
