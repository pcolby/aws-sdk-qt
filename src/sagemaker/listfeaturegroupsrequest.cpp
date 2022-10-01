// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfeaturegroupsrequest.h"
#include "listfeaturegroupsrequest_p.h"
#include "listfeaturegroupsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListFeatureGroupsRequest
 * \brief The ListFeatureGroupsRequest class provides an interface for SageMaker ListFeatureGroups requests.
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
 * \sa SageMakerClient::listFeatureGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListFeatureGroupsRequest::ListFeatureGroupsRequest(const ListFeatureGroupsRequest &other)
    : SageMakerRequest(new ListFeatureGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFeatureGroupsRequest object.
 */
ListFeatureGroupsRequest::ListFeatureGroupsRequest()
    : SageMakerRequest(new ListFeatureGroupsRequestPrivate(SageMakerRequest::ListFeatureGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFeatureGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFeatureGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFeatureGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListFeatureGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListFeatureGroupsRequestPrivate
 * \brief The ListFeatureGroupsRequestPrivate class provides private implementation for ListFeatureGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListFeatureGroupsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListFeatureGroupsRequestPrivate::ListFeatureGroupsRequestPrivate(
    const SageMakerRequest::Action action, ListFeatureGroupsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFeatureGroupsRequest
 * class' copy constructor.
 */
ListFeatureGroupsRequestPrivate::ListFeatureGroupsRequestPrivate(
    const ListFeatureGroupsRequestPrivate &other, ListFeatureGroupsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
