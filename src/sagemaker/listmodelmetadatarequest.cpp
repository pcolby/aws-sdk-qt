// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelmetadatarequest.h"
#include "listmodelmetadatarequest_p.h"
#include "listmodelmetadataresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelMetadataRequest
 * \brief The ListModelMetadataRequest class provides an interface for SageMaker ListModelMetadata requests.
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
 * \sa SageMakerClient::listModelMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
ListModelMetadataRequest::ListModelMetadataRequest(const ListModelMetadataRequest &other)
    : SageMakerRequest(new ListModelMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListModelMetadataRequest object.
 */
ListModelMetadataRequest::ListModelMetadataRequest()
    : SageMakerRequest(new ListModelMetadataRequestPrivate(SageMakerRequest::ListModelMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool ListModelMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListModelMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListModelMetadataRequest::response(QNetworkReply * const reply) const
{
    return new ListModelMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListModelMetadataRequestPrivate
 * \brief The ListModelMetadataRequestPrivate class provides private implementation for ListModelMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelMetadataRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListModelMetadataRequestPrivate::ListModelMetadataRequestPrivate(
    const SageMakerRequest::Action action, ListModelMetadataRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListModelMetadataRequest
 * class' copy constructor.
 */
ListModelMetadataRequestPrivate::ListModelMetadataRequestPrivate(
    const ListModelMetadataRequestPrivate &other, ListModelMetadataRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
