// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexperimenttemplaterequest.h"
#include "deleteexperimenttemplaterequest_p.h"
#include "deleteexperimenttemplateresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::DeleteExperimentTemplateRequest
 * \brief The DeleteExperimentTemplateRequest class provides an interface for Fis DeleteExperimentTemplate requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::deleteExperimentTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteExperimentTemplateRequest::DeleteExperimentTemplateRequest(const DeleteExperimentTemplateRequest &other)
    : FisRequest(new DeleteExperimentTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteExperimentTemplateRequest object.
 */
DeleteExperimentTemplateRequest::DeleteExperimentTemplateRequest()
    : FisRequest(new DeleteExperimentTemplateRequestPrivate(FisRequest::DeleteExperimentTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteExperimentTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteExperimentTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteExperimentTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExperimentTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::DeleteExperimentTemplateRequestPrivate
 * \brief The DeleteExperimentTemplateRequestPrivate class provides private implementation for DeleteExperimentTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a DeleteExperimentTemplateRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
DeleteExperimentTemplateRequestPrivate::DeleteExperimentTemplateRequestPrivate(
    const FisRequest::Action action, DeleteExperimentTemplateRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteExperimentTemplateRequest
 * class' copy constructor.
 */
DeleteExperimentTemplateRequestPrivate::DeleteExperimentTemplateRequestPrivate(
    const DeleteExperimentTemplateRequestPrivate &other, DeleteExperimentTemplateRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
