// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createweblogintokenrequest.h"
#include "createweblogintokenrequest_p.h"
#include "createweblogintokenresponse.h"
#include "mwaarequest_p.h"

namespace QtAws {
namespace Mwaa {

/*!
 * \class QtAws::Mwaa::CreateWebLoginTokenRequest
 * \brief The CreateWebLoginTokenRequest class provides an interface for Mwaa CreateWebLoginToken requests.
 *
 * \inmodule QtAwsMwaa
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
 * 
 *  MWAA?</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <code>api.airflow.{region}.amazonaws.com</code> - This endpoint is used for environment
 * 
 *  management> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateEnvironment.html">CreateEnvironment</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_DeleteEnvironment.html">DeleteEnvironment</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_GetEnvironment.html">GetEnvironment</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_ListEnvironments.html">ListEnvironments</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_ListTagsForResource.html">ListTagsForResource</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_TagResource.html">TagResource</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_UntagResource.html">UntagResource</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_UpdateEnvironment.html">UpdateEnvironment</a>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <code>env.airflow.{region}.amazonaws.com</code> - This endpoint is used to operate the Airflow
 * 
 *  environment> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateCliToken.html ">CreateCliToken</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateWebLoginToken.html">CreateWebLoginToken</a>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <code>ops.airflow.{region}.amazonaws.com</code> - This endpoint is used to push environment metrics that track
 *  environment
 * 
 *  health> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_PublishMetrics.html ">PublishMetrics</a>
 * 
 *  </p </li> </ul> </li> </ul>
 * 
 *  <b>Regions</b>
 * 
 *  </p
 * 
 *  For a list of regions that Amazon MWAA supports, see <a
 *  href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html#regions-mwaa">Region availability</a> in the
 *  <i>Amazon MWAA User
 *
 * \sa MwaaClient::createWebLoginToken
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWebLoginTokenRequest::CreateWebLoginTokenRequest(const CreateWebLoginTokenRequest &other)
    : MwaaRequest(new CreateWebLoginTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWebLoginTokenRequest object.
 */
CreateWebLoginTokenRequest::CreateWebLoginTokenRequest()
    : MwaaRequest(new CreateWebLoginTokenRequestPrivate(MwaaRequest::CreateWebLoginTokenAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWebLoginTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWebLoginTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWebLoginTokenRequest::response(QNetworkReply * const reply) const
{
    return new CreateWebLoginTokenResponse(*this, reply);
}

/*!
 * \class QtAws::Mwaa::CreateWebLoginTokenRequestPrivate
 * \brief The CreateWebLoginTokenRequestPrivate class provides private implementation for CreateWebLoginTokenRequest.
 * \internal
 *
 * \inmodule QtAwsMwaa
 */

/*!
 * Constructs a CreateWebLoginTokenRequestPrivate object for Mwaa \a action,
 * with public implementation \a q.
 */
CreateWebLoginTokenRequestPrivate::CreateWebLoginTokenRequestPrivate(
    const MwaaRequest::Action action, CreateWebLoginTokenRequest * const q)
    : MwaaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWebLoginTokenRequest
 * class' copy constructor.
 */
CreateWebLoginTokenRequestPrivate::CreateWebLoginTokenRequestPrivate(
    const CreateWebLoginTokenRequestPrivate &other, CreateWebLoginTokenRequest * const q)
    : MwaaRequestPrivate(other, q)
{

}

} // namespace Mwaa
} // namespace QtAws
