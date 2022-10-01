// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefeaturegrouprequest.h"
#include "deletefeaturegrouprequest_p.h"
#include "deletefeaturegroupresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteFeatureGroupRequest
 * \brief The DeleteFeatureGroupRequest class provides an interface for SageMaker DeleteFeatureGroup requests.
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
 * \sa SageMakerClient::deleteFeatureGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFeatureGroupRequest::DeleteFeatureGroupRequest(const DeleteFeatureGroupRequest &other)
    : SageMakerRequest(new DeleteFeatureGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFeatureGroupRequest object.
 */
DeleteFeatureGroupRequest::DeleteFeatureGroupRequest()
    : SageMakerRequest(new DeleteFeatureGroupRequestPrivate(SageMakerRequest::DeleteFeatureGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFeatureGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFeatureGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFeatureGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFeatureGroupResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteFeatureGroupRequestPrivate
 * \brief The DeleteFeatureGroupRequestPrivate class provides private implementation for DeleteFeatureGroupRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteFeatureGroupRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteFeatureGroupRequestPrivate::DeleteFeatureGroupRequestPrivate(
    const SageMakerRequest::Action action, DeleteFeatureGroupRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFeatureGroupRequest
 * class' copy constructor.
 */
DeleteFeatureGroupRequestPrivate::DeleteFeatureGroupRequestPrivate(
    const DeleteFeatureGroupRequestPrivate &other, DeleteFeatureGroupRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
