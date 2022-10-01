// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefeaturemetadatarequest.h"
#include "updatefeaturemetadatarequest_p.h"
#include "updatefeaturemetadataresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateFeatureMetadataRequest
 * \brief The UpdateFeatureMetadataRequest class provides an interface for SageMaker UpdateFeatureMetadata requests.
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
 * \sa SageMakerClient::updateFeatureMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFeatureMetadataRequest::UpdateFeatureMetadataRequest(const UpdateFeatureMetadataRequest &other)
    : SageMakerRequest(new UpdateFeatureMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFeatureMetadataRequest object.
 */
UpdateFeatureMetadataRequest::UpdateFeatureMetadataRequest()
    : SageMakerRequest(new UpdateFeatureMetadataRequestPrivate(SageMakerRequest::UpdateFeatureMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFeatureMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFeatureMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFeatureMetadataRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFeatureMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateFeatureMetadataRequestPrivate
 * \brief The UpdateFeatureMetadataRequestPrivate class provides private implementation for UpdateFeatureMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateFeatureMetadataRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateFeatureMetadataRequestPrivate::UpdateFeatureMetadataRequestPrivate(
    const SageMakerRequest::Action action, UpdateFeatureMetadataRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFeatureMetadataRequest
 * class' copy constructor.
 */
UpdateFeatureMetadataRequestPrivate::UpdateFeatureMetadataRequestPrivate(
    const UpdateFeatureMetadataRequestPrivate &other, UpdateFeatureMetadataRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
