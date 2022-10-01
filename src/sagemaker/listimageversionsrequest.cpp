// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimageversionsrequest.h"
#include "listimageversionsrequest_p.h"
#include "listimageversionsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListImageVersionsRequest
 * \brief The ListImageVersionsRequest class provides an interface for SageMaker ListImageVersions requests.
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
 * \sa SageMakerClient::listImageVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListImageVersionsRequest::ListImageVersionsRequest(const ListImageVersionsRequest &other)
    : SageMakerRequest(new ListImageVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImageVersionsRequest object.
 */
ListImageVersionsRequest::ListImageVersionsRequest()
    : SageMakerRequest(new ListImageVersionsRequestPrivate(SageMakerRequest::ListImageVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListImageVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImageVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImageVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListImageVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListImageVersionsRequestPrivate
 * \brief The ListImageVersionsRequestPrivate class provides private implementation for ListImageVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListImageVersionsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListImageVersionsRequestPrivate::ListImageVersionsRequestPrivate(
    const SageMakerRequest::Action action, ListImageVersionsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImageVersionsRequest
 * class' copy constructor.
 */
ListImageVersionsRequestPrivate::ListImageVersionsRequestPrivate(
    const ListImageVersionsRequestPrivate &other, ListImageVersionsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
