// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappimageconfigsrequest.h"
#include "listappimageconfigsrequest_p.h"
#include "listappimageconfigsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAppImageConfigsRequest
 * \brief The ListAppImageConfigsRequest class provides an interface for SageMaker ListAppImageConfigs requests.
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
 * \sa SageMakerClient::listAppImageConfigs
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppImageConfigsRequest::ListAppImageConfigsRequest(const ListAppImageConfigsRequest &other)
    : SageMakerRequest(new ListAppImageConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppImageConfigsRequest object.
 */
ListAppImageConfigsRequest::ListAppImageConfigsRequest()
    : SageMakerRequest(new ListAppImageConfigsRequestPrivate(SageMakerRequest::ListAppImageConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppImageConfigsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppImageConfigsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppImageConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppImageConfigsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListAppImageConfigsRequestPrivate
 * \brief The ListAppImageConfigsRequestPrivate class provides private implementation for ListAppImageConfigsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAppImageConfigsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListAppImageConfigsRequestPrivate::ListAppImageConfigsRequestPrivate(
    const SageMakerRequest::Action action, ListAppImageConfigsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppImageConfigsRequest
 * class' copy constructor.
 */
ListAppImageConfigsRequestPrivate::ListAppImageConfigsRequestPrivate(
    const ListAppImageConfigsRequestPrivate &other, ListAppImageConfigsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
