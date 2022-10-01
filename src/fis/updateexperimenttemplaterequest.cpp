// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
