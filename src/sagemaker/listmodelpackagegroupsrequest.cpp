// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelpackagegroupsrequest.h"
#include "listmodelpackagegroupsrequest_p.h"
#include "listmodelpackagegroupsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelPackageGroupsRequest
 * \brief The ListModelPackageGroupsRequest class provides an interface for SageMaker ListModelPackageGroups requests.
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
 * \sa SageMakerClient::listModelPackageGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListModelPackageGroupsRequest::ListModelPackageGroupsRequest(const ListModelPackageGroupsRequest &other)
    : SageMakerRequest(new ListModelPackageGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListModelPackageGroupsRequest object.
 */
ListModelPackageGroupsRequest::ListModelPackageGroupsRequest()
    : SageMakerRequest(new ListModelPackageGroupsRequestPrivate(SageMakerRequest::ListModelPackageGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListModelPackageGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListModelPackageGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListModelPackageGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListModelPackageGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListModelPackageGroupsRequestPrivate
 * \brief The ListModelPackageGroupsRequestPrivate class provides private implementation for ListModelPackageGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelPackageGroupsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListModelPackageGroupsRequestPrivate::ListModelPackageGroupsRequestPrivate(
    const SageMakerRequest::Action action, ListModelPackageGroupsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListModelPackageGroupsRequest
 * class' copy constructor.
 */
ListModelPackageGroupsRequestPrivate::ListModelPackageGroupsRequestPrivate(
    const ListModelPackageGroupsRequestPrivate &other, ListModelPackageGroupsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
