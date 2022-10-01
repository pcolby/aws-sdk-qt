// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexperimentrequest.h"
#include "getexperimentrequest_p.h"
#include "getexperimentresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetExperimentRequest
 * \brief The GetExperimentRequest class provides an interface for Fis GetExperiment requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
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
 * \class QtAws::Fis::GetExperimentRequestPrivate
 * \brief The GetExperimentRequestPrivate class provides private implementation for GetExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsFis
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

} // namespace Fis
} // namespace QtAws
