// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimagesrequest.h"
#include "listimagesrequest_p.h"
#include "listimagesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListImagesRequest
 * \brief The ListImagesRequest class provides an interface for SageMaker ListImages requests.
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
 * \sa SageMakerClient::listImages
 */

/*!
 * Constructs a copy of \a other.
 */
ListImagesRequest::ListImagesRequest(const ListImagesRequest &other)
    : SageMakerRequest(new ListImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImagesRequest object.
 */
ListImagesRequest::ListImagesRequest()
    : SageMakerRequest(new ListImagesRequestPrivate(SageMakerRequest::ListImagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListImagesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListImagesRequestPrivate
 * \brief The ListImagesRequestPrivate class provides private implementation for ListImagesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListImagesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListImagesRequestPrivate::ListImagesRequestPrivate(
    const SageMakerRequest::Action action, ListImagesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImagesRequest
 * class' copy constructor.
 */
ListImagesRequestPrivate::ListImagesRequestPrivate(
    const ListImagesRequestPrivate &other, ListImagesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
