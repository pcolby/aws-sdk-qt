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
namespace MWAA {

/*!
 * \class QtAws::MWAA::CreateCliTokenRequest
 * \brief The CreateCliTokenRequest class provides an interface for MWAA CreateCliToken requests.
 *
 * \inmodule QtAwsMWAA
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
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
 * \class QtAws::MWAA::CreateCliTokenRequestPrivate
 * \brief The CreateCliTokenRequestPrivate class provides private implementation for CreateCliTokenRequest.
 * \internal
 *
 * \inmodule QtAwsMWAA
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

} // namespace MWAA
} // namespace QtAws
