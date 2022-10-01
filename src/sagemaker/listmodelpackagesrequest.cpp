// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelpackagesrequest.h"
#include "listmodelpackagesrequest_p.h"
#include "listmodelpackagesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelPackagesRequest
 * \brief The ListModelPackagesRequest class provides an interface for SageMaker ListModelPackages requests.
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
 * \sa SageMakerClient::listModelPackages
 */

/*!
 * Constructs a copy of \a other.
 */
ListModelPackagesRequest::ListModelPackagesRequest(const ListModelPackagesRequest &other)
    : SageMakerRequest(new ListModelPackagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListModelPackagesRequest object.
 */
ListModelPackagesRequest::ListModelPackagesRequest()
    : SageMakerRequest(new ListModelPackagesRequestPrivate(SageMakerRequest::ListModelPackagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListModelPackagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListModelPackagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListModelPackagesRequest::response(QNetworkReply * const reply) const
{
    return new ListModelPackagesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListModelPackagesRequestPrivate
 * \brief The ListModelPackagesRequestPrivate class provides private implementation for ListModelPackagesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelPackagesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListModelPackagesRequestPrivate::ListModelPackagesRequestPrivate(
    const SageMakerRequest::Action action, ListModelPackagesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListModelPackagesRequest
 * class' copy constructor.
 */
ListModelPackagesRequestPrivate::ListModelPackagesRequestPrivate(
    const ListModelPackagesRequestPrivate &other, ListModelPackagesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
