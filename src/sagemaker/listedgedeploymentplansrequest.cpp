// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listedgedeploymentplansrequest.h"
#include "listedgedeploymentplansrequest_p.h"
#include "listedgedeploymentplansresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListEdgeDeploymentPlansRequest
 * \brief The ListEdgeDeploymentPlansRequest class provides an interface for SageMaker ListEdgeDeploymentPlans requests.
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
 * \sa SageMakerClient::listEdgeDeploymentPlans
 */

/*!
 * Constructs a copy of \a other.
 */
ListEdgeDeploymentPlansRequest::ListEdgeDeploymentPlansRequest(const ListEdgeDeploymentPlansRequest &other)
    : SageMakerRequest(new ListEdgeDeploymentPlansRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEdgeDeploymentPlansRequest object.
 */
ListEdgeDeploymentPlansRequest::ListEdgeDeploymentPlansRequest()
    : SageMakerRequest(new ListEdgeDeploymentPlansRequestPrivate(SageMakerRequest::ListEdgeDeploymentPlansAction, this))
{

}

/*!
 * \reimp
 */
bool ListEdgeDeploymentPlansRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEdgeDeploymentPlansResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEdgeDeploymentPlansRequest::response(QNetworkReply * const reply) const
{
    return new ListEdgeDeploymentPlansResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListEdgeDeploymentPlansRequestPrivate
 * \brief The ListEdgeDeploymentPlansRequestPrivate class provides private implementation for ListEdgeDeploymentPlansRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListEdgeDeploymentPlansRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListEdgeDeploymentPlansRequestPrivate::ListEdgeDeploymentPlansRequestPrivate(
    const SageMakerRequest::Action action, ListEdgeDeploymentPlansRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEdgeDeploymentPlansRequest
 * class' copy constructor.
 */
ListEdgeDeploymentPlansRequestPrivate::ListEdgeDeploymentPlansRequestPrivate(
    const ListEdgeDeploymentPlansRequestPrivate &other, ListEdgeDeploymentPlansRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
