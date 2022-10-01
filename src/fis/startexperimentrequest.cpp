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

#include "startexperimentrequest.h"
#include "startexperimentrequest_p.h"
#include "startexperimentresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::StartExperimentRequest
 * \brief The StartExperimentRequest class provides an interface for Fis StartExperiment requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::startExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
StartExperimentRequest::StartExperimentRequest(const StartExperimentRequest &other)
    : FisRequest(new StartExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartExperimentRequest object.
 */
StartExperimentRequest::StartExperimentRequest()
    : FisRequest(new StartExperimentRequestPrivate(FisRequest::StartExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool StartExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartExperimentRequest::response(QNetworkReply * const reply) const
{
    return new StartExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::StartExperimentRequestPrivate
 * \brief The StartExperimentRequestPrivate class provides private implementation for StartExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a StartExperimentRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
StartExperimentRequestPrivate::StartExperimentRequestPrivate(
    const FisRequest::Action action, StartExperimentRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartExperimentRequest
 * class' copy constructor.
 */
StartExperimentRequestPrivate::StartExperimentRequestPrivate(
    const StartExperimentRequestPrivate &other, StartExperimentRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
