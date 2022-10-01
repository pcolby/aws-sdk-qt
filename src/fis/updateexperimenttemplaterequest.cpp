/*
    Copyright 2013-2021 Paul Colby

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

#include "updateexperimenttemplaterequest.h"
#include "updateexperimenttemplaterequest_p.h"
#include "updateexperimenttemplateresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::UpdateExperimentTemplateRequest
 * \brief The UpdateExperimentTemplateRequest class provides an interface for Fis UpdateExperimentTemplate requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::updateExperimentTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateExperimentTemplateRequest::UpdateExperimentTemplateRequest(const UpdateExperimentTemplateRequest &other)
    : FisRequest(new UpdateExperimentTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateExperimentTemplateRequest object.
 */
UpdateExperimentTemplateRequest::UpdateExperimentTemplateRequest()
    : FisRequest(new UpdateExperimentTemplateRequestPrivate(FisRequest::UpdateExperimentTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateExperimentTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateExperimentTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateExperimentTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateExperimentTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::UpdateExperimentTemplateRequestPrivate
 * \brief The UpdateExperimentTemplateRequestPrivate class provides private implementation for UpdateExperimentTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a UpdateExperimentTemplateRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
UpdateExperimentTemplateRequestPrivate::UpdateExperimentTemplateRequestPrivate(
    const FisRequest::Action action, UpdateExperimentTemplateRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateExperimentTemplateRequest
 * class' copy constructor.
 */
UpdateExperimentTemplateRequestPrivate::UpdateExperimentTemplateRequestPrivate(
    const UpdateExperimentTemplateRequestPrivate &other, UpdateExperimentTemplateRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
