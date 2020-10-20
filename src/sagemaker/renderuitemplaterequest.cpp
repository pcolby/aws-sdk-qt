/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker
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
