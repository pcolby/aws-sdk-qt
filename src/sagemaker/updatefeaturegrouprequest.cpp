// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefeaturegrouprequest.h"
#include "updatefeaturegrouprequest_p.h"
#include "updatefeaturegroupresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateFeatureGroupRequest
 * \brief The UpdateFeatureGroupRequest class provides an interface for SageMaker UpdateFeatureGroup requests.
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
 * \sa SageMakerClient::updateFeatureGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFeatureGroupRequest::UpdateFeatureGroupRequest(const UpdateFeatureGroupRequest &other)
    : SageMakerRequest(new UpdateFeatureGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFeatureGroupRequest object.
 */
UpdateFeatureGroupRequest::UpdateFeatureGroupRequest()
    : SageMakerRequest(new UpdateFeatureGroupRequestPrivate(SageMakerRequest::UpdateFeatureGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFeatureGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFeatureGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFeatureGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFeatureGroupResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateFeatureGroupRequestPrivate
 * \brief The UpdateFeatureGroupRequestPrivate class provides private implementation for UpdateFeatureGroupRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateFeatureGroupRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateFeatureGroupRequestPrivate::UpdateFeatureGroupRequestPrivate(
    const SageMakerRequest::Action action, UpdateFeatureGroupRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFeatureGroupRequest
 * class' copy constructor.
 */
UpdateFeatureGroupRequestPrivate::UpdateFeatureGroupRequestPrivate(
    const UpdateFeatureGroupRequestPrivate &other, UpdateFeatureGroupRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
