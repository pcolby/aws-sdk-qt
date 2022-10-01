// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatetrialcomponentrequest.h"
#include "disassociatetrialcomponentrequest_p.h"
#include "disassociatetrialcomponentresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DisassociateTrialComponentRequest
 * \brief The DisassociateTrialComponentRequest class provides an interface for SageMaker DisassociateTrialComponent requests.
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
 * \sa SageMakerClient::disassociateTrialComponent
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateTrialComponentRequest::DisassociateTrialComponentRequest(const DisassociateTrialComponentRequest &other)
    : SageMakerRequest(new DisassociateTrialComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateTrialComponentRequest object.
 */
DisassociateTrialComponentRequest::DisassociateTrialComponentRequest()
    : SageMakerRequest(new DisassociateTrialComponentRequestPrivate(SageMakerRequest::DisassociateTrialComponentAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateTrialComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateTrialComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateTrialComponentRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateTrialComponentResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DisassociateTrialComponentRequestPrivate
 * \brief The DisassociateTrialComponentRequestPrivate class provides private implementation for DisassociateTrialComponentRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DisassociateTrialComponentRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DisassociateTrialComponentRequestPrivate::DisassociateTrialComponentRequestPrivate(
    const SageMakerRequest::Action action, DisassociateTrialComponentRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateTrialComponentRequest
 * class' copy constructor.
 */
DisassociateTrialComponentRequestPrivate::DisassociateTrialComponentRequestPrivate(
    const DisassociateTrialComponentRequestPrivate &other, DisassociateTrialComponentRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
