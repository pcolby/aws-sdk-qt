// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addtagsrequest.h"
#include "addtagsrequest_p.h"
#include "addtagsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::AddTagsRequest
 * \brief The AddTagsRequest class provides an interface for SageMaker AddTags requests.
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
 * \sa SageMakerClient::addTags
 */

/*!
 * Constructs a copy of \a other.
 */
AddTagsRequest::AddTagsRequest(const AddTagsRequest &other)
    : SageMakerRequest(new AddTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddTagsRequest object.
 */
AddTagsRequest::AddTagsRequest()
    : SageMakerRequest(new AddTagsRequestPrivate(SageMakerRequest::AddTagsAction, this))
{

}

/*!
 * \reimp
 */
bool AddTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::AddTagsRequestPrivate
 * \brief The AddTagsRequestPrivate class provides private implementation for AddTagsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a AddTagsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
AddTagsRequestPrivate::AddTagsRequestPrivate(
    const SageMakerRequest::Action action, AddTagsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddTagsRequest
 * class' copy constructor.
 */
AddTagsRequestPrivate::AddTagsRequestPrivate(
    const AddTagsRequestPrivate &other, AddTagsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
