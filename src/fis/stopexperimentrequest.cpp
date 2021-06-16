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

#include "stopexperimentrequest.h"
#include "stopexperimentrequest_p.h"
#include "stopexperimentresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace FIS {

/*!
 * \class QtAws::FIS::StopExperimentRequest
 * \brief The StopExperimentRequest class provides an interface for FIS StopExperiment requests.
 *
 * \inmodule QtAwsFIS
 *
 *  AWS Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your AWS
 *  workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
 *  Simulator User
 *
 * \sa FisClient::stopExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
StopExperimentRequest::StopExperimentRequest(const StopExperimentRequest &other)
    : FisRequest(new StopExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopExperimentRequest object.
 */
StopExperimentRequest::StopExperimentRequest()
    : FisRequest(new StopExperimentRequestPrivate(FisRequest::StopExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool StopExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopExperimentRequest::response(QNetworkReply * const reply) const
{
    return new StopExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::FIS::StopExperimentRequestPrivate
 * \brief The StopExperimentRequestPrivate class provides private implementation for StopExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsFIS
 */

/*!
 * Constructs a StopExperimentRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
StopExperimentRequestPrivate::StopExperimentRequestPrivate(
    const FisRequest::Action action, StopExperimentRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopExperimentRequest
 * class' copy constructor.
 */
StopExperimentRequestPrivate::StopExperimentRequestPrivate(
    const StopExperimentRequestPrivate &other, StopExperimentRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace FIS
} // namespace QtAws
