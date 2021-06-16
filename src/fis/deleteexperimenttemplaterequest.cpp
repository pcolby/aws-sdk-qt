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

#include "deleteexperimenttemplaterequest.h"
#include "deleteexperimenttemplaterequest_p.h"
#include "deleteexperimenttemplateresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace FIS {

/*!
 * \class QtAws::FIS::DeleteExperimentTemplateRequest
 * \brief The DeleteExperimentTemplateRequest class provides an interface for FIS DeleteExperimentTemplate requests.
 *
 * \inmodule QtAwsFIS
 *
 *  AWS Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your AWS
 *  workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
 *  Simulator User
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
 * \class QtAws::FIS::DeleteExperimentTemplateRequestPrivate
 * \brief The DeleteExperimentTemplateRequestPrivate class provides private implementation for DeleteExperimentTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsFIS
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

} // namespace FIS
} // namespace QtAws
