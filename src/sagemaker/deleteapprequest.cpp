// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapprequest.h"
#include "deleteapprequest_p.h"
#include "deleteappresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteAppRequest
 * \brief The DeleteAppRequest class provides an interface for SageMaker DeleteApp requests.
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
 * \sa SageMakerClient::deleteApp
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppRequest::DeleteAppRequest(const DeleteAppRequest &other)
    : SageMakerRequest(new DeleteAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppRequest object.
 */
DeleteAppRequest::DeleteAppRequest()
    : SageMakerRequest(new DeleteAppRequestPrivate(SageMakerRequest::DeleteAppAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteAppRequestPrivate
 * \brief The DeleteAppRequestPrivate class provides private implementation for DeleteAppRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteAppRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const SageMakerRequest::Action action, DeleteAppRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppRequest
 * class' copy constructor.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const DeleteAppRequestPrivate &other, DeleteAppRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
