// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexperimenttemplaterequest.h"
#include "getexperimenttemplaterequest_p.h"
#include "getexperimenttemplateresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetExperimentTemplateRequest
 * \brief The GetExperimentTemplateRequest class provides an interface for Fis GetExperimentTemplate requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::getExperimentTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetExperimentTemplateRequest::GetExperimentTemplateRequest(const GetExperimentTemplateRequest &other)
    : FisRequest(new GetExperimentTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExperimentTemplateRequest object.
 */
GetExperimentTemplateRequest::GetExperimentTemplateRequest()
    : FisRequest(new GetExperimentTemplateRequestPrivate(FisRequest::GetExperimentTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetExperimentTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExperimentTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExperimentTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetExperimentTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::GetExperimentTemplateRequestPrivate
 * \brief The GetExperimentTemplateRequestPrivate class provides private implementation for GetExperimentTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a GetExperimentTemplateRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
GetExperimentTemplateRequestPrivate::GetExperimentTemplateRequestPrivate(
    const FisRequest::Action action, GetExperimentTemplateRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExperimentTemplateRequest
 * class' copy constructor.
 */
GetExperimentTemplateRequestPrivate::GetExperimentTemplateRequestPrivate(
    const GetExperimentTemplateRequestPrivate &other, GetExperimentTemplateRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
