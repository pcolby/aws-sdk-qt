// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehumantaskuirequest.h"
#include "deletehumantaskuirequest_p.h"
#include "deletehumantaskuiresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteHumanTaskUiRequest
 * \brief The DeleteHumanTaskUiRequest class provides an interface for SageMaker DeleteHumanTaskUi requests.
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
 * \sa SageMakerClient::deleteHumanTaskUi
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteHumanTaskUiRequest::DeleteHumanTaskUiRequest(const DeleteHumanTaskUiRequest &other)
    : SageMakerRequest(new DeleteHumanTaskUiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteHumanTaskUiRequest object.
 */
DeleteHumanTaskUiRequest::DeleteHumanTaskUiRequest()
    : SageMakerRequest(new DeleteHumanTaskUiRequestPrivate(SageMakerRequest::DeleteHumanTaskUiAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHumanTaskUiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteHumanTaskUiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHumanTaskUiRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHumanTaskUiResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteHumanTaskUiRequestPrivate
 * \brief The DeleteHumanTaskUiRequestPrivate class provides private implementation for DeleteHumanTaskUiRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteHumanTaskUiRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteHumanTaskUiRequestPrivate::DeleteHumanTaskUiRequestPrivate(
    const SageMakerRequest::Action action, DeleteHumanTaskUiRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteHumanTaskUiRequest
 * class' copy constructor.
 */
DeleteHumanTaskUiRequestPrivate::DeleteHumanTaskUiRequestPrivate(
    const DeleteHumanTaskUiRequestPrivate &other, DeleteHumanTaskUiRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
