// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopexperimentrequest.h"
#include "stopexperimentrequest_p.h"
#include "stopexperimentresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::StopExperimentRequest
 * \brief The StopExperimentRequest class provides an interface for Fis StopExperiment requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
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
 * \class QtAws::Fis::StopExperimentRequestPrivate
 * \brief The StopExperimentRequestPrivate class provides private implementation for StopExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsFis
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

} // namespace Fis
} // namespace QtAws
