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
