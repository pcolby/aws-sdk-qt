// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappimageconfigrequest.h"
#include "updateappimageconfigrequest_p.h"
#include "updateappimageconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateAppImageConfigRequest
 * \brief The UpdateAppImageConfigRequest class provides an interface for SageMaker UpdateAppImageConfig requests.
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
 * \sa SageMakerClient::updateAppImageConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAppImageConfigRequest::UpdateAppImageConfigRequest(const UpdateAppImageConfigRequest &other)
    : SageMakerRequest(new UpdateAppImageConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAppImageConfigRequest object.
 */
UpdateAppImageConfigRequest::UpdateAppImageConfigRequest()
    : SageMakerRequest(new UpdateAppImageConfigRequestPrivate(SageMakerRequest::UpdateAppImageConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAppImageConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAppImageConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAppImageConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAppImageConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateAppImageConfigRequestPrivate
 * \brief The UpdateAppImageConfigRequestPrivate class provides private implementation for UpdateAppImageConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateAppImageConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateAppImageConfigRequestPrivate::UpdateAppImageConfigRequestPrivate(
    const SageMakerRequest::Action action, UpdateAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAppImageConfigRequest
 * class' copy constructor.
 */
UpdateAppImageConfigRequestPrivate::UpdateAppImageConfigRequestPrivate(
    const UpdateAppImageConfigRequestPrivate &other, UpdateAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
