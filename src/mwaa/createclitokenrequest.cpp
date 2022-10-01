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

#include "createclitokenrequest.h"
#include "createclitokenrequest_p.h"
#include "createclitokenresponse.h"
#include "mwaarequest_p.h"

namespace QtAws {
namespace Mwaa {

/*!
 * \class QtAws::Mwaa::CreateCliTokenRequest
 * \brief The CreateCliTokenRequest class provides an interface for Mwaa CreateCliToken requests.
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
 * \sa MwaaClient::createCliToken
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCliTokenRequest::CreateCliTokenRequest(const CreateCliTokenRequest &other)
    : MwaaRequest(new CreateCliTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCliTokenRequest object.
 */
CreateCliTokenRequest::CreateCliTokenRequest()
    : MwaaRequest(new CreateCliTokenRequestPrivate(MwaaRequest::CreateCliTokenAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCliTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCliTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCliTokenRequest::response(QNetworkReply * const reply) const
{
    return new CreateCliTokenResponse(*this, reply);
}

/*!
 * \class QtAws::Mwaa::CreateCliTokenRequestPrivate
 * \brief The CreateCliTokenRequestPrivate class provides private implementation for CreateCliTokenRequest.
 * \internal
 *
 * \inmodule QtAwsMwaa
 */

/*!
 * Constructs a CreateCliTokenRequestPrivate object for Mwaa \a action,
 * with public implementation \a q.
 */
CreateCliTokenRequestPrivate::CreateCliTokenRequestPrivate(
    const MwaaRequest::Action action, CreateCliTokenRequest * const q)
    : MwaaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCliTokenRequest
 * class' copy constructor.
 */
CreateCliTokenRequestPrivate::CreateCliTokenRequestPrivate(
    const CreateCliTokenRequestPrivate &other, CreateCliTokenRequest * const q)
    : MwaaRequestPrivate(other, q)
{

}

} // namespace Mwaa
} // namespace QtAws
