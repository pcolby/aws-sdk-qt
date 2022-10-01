// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappimageconfigrequest.h"
#include "deleteappimageconfigrequest_p.h"
#include "deleteappimageconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteAppImageConfigRequest
 * \brief The DeleteAppImageConfigRequest class provides an interface for SageMaker DeleteAppImageConfig requests.
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
 * \sa SageMakerClient::deleteAppImageConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppImageConfigRequest::DeleteAppImageConfigRequest(const DeleteAppImageConfigRequest &other)
    : SageMakerRequest(new DeleteAppImageConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppImageConfigRequest object.
 */
DeleteAppImageConfigRequest::DeleteAppImageConfigRequest()
    : SageMakerRequest(new DeleteAppImageConfigRequestPrivate(SageMakerRequest::DeleteAppImageConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppImageConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppImageConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppImageConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppImageConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteAppImageConfigRequestPrivate
 * \brief The DeleteAppImageConfigRequestPrivate class provides private implementation for DeleteAppImageConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteAppImageConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteAppImageConfigRequestPrivate::DeleteAppImageConfigRequestPrivate(
    const SageMakerRequest::Action action, DeleteAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppImageConfigRequest
 * class' copy constructor.
 */
DeleteAppImageConfigRequestPrivate::DeleteAppImageConfigRequestPrivate(
    const DeleteAppImageConfigRequestPrivate &other, DeleteAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
