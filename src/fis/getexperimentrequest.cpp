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

#include "getexperimentrequest.h"
#include "getexperimentrequest_p.h"
#include "getexperimentresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace FIS {

/*!
 * \class QtAws::FIS::GetExperimentRequest
 * \brief The GetExperimentRequest class provides an interface for FIS GetExperiment requests.
 *
 * \inmodule QtAwsFIS
 *
 *  AWS Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your AWS
 *  workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
 *  Simulator User
 *
 * \sa FisClient::getExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
GetExperimentRequest::GetExperimentRequest(const GetExperimentRequest &other)
    : FisRequest(new GetExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExperimentRequest object.
 */
GetExperimentRequest::GetExperimentRequest()
    : FisRequest(new GetExperimentRequestPrivate(FisRequest::GetExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool GetExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExperimentRequest::response(QNetworkReply * const reply) const
{
    return new GetExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::FIS::GetExperimentRequestPrivate
 * \brief The GetExperimentRequestPrivate class provides private implementation for GetExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsFIS
 */

/*!
 * Constructs a GetExperimentRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
GetExperimentRequestPrivate::GetExperimentRequestPrivate(
    const FisRequest::Action action, GetExperimentRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExperimentRequest
 * class' copy constructor.
 */
GetExperimentRequestPrivate::GetExperimentRequestPrivate(
    const GetExperimentRequestPrivate &other, GetExperimentRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace FIS
} // namespace QtAws
