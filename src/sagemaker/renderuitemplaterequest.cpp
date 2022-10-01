// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "renderuitemplaterequest.h"
#include "renderuitemplaterequest_p.h"
#include "renderuitemplateresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::RenderUiTemplateRequest
 * \brief The RenderUiTemplateRequest class provides an interface for SageMaker RenderUiTemplate requests.
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
 * \sa SageMakerClient::renderUiTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
RenderUiTemplateRequest::RenderUiTemplateRequest(const RenderUiTemplateRequest &other)
    : SageMakerRequest(new RenderUiTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RenderUiTemplateRequest object.
 */
RenderUiTemplateRequest::RenderUiTemplateRequest()
    : SageMakerRequest(new RenderUiTemplateRequestPrivate(SageMakerRequest::RenderUiTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool RenderUiTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RenderUiTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RenderUiTemplateRequest::response(QNetworkReply * const reply) const
{
    return new RenderUiTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::RenderUiTemplateRequestPrivate
 * \brief The RenderUiTemplateRequestPrivate class provides private implementation for RenderUiTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a RenderUiTemplateRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
RenderUiTemplateRequestPrivate::RenderUiTemplateRequestPrivate(
    const SageMakerRequest::Action action, RenderUiTemplateRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RenderUiTemplateRequest
 * class' copy constructor.
 */
RenderUiTemplateRequestPrivate::RenderUiTemplateRequestPrivate(
    const RenderUiTemplateRequestPrivate &other, RenderUiTemplateRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
