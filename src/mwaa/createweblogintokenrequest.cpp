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

#include "createweblogintokenrequest.h"
#include "createweblogintokenrequest_p.h"
#include "createweblogintokenresponse.h"
#include "mwaarequest_p.h"

namespace QtAws {
namespace MWAA {

/*!
 * \class QtAws::MWAA::CreateWebLoginTokenRequest
 * \brief The CreateWebLoginTokenRequest class provides an interface for MWAA CreateWebLoginToken requests.
 *
 * \inmodule QtAwsMWAA
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
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
 * \class QtAws::MWAA::CreateWebLoginTokenRequestPrivate
 * \brief The CreateWebLoginTokenRequestPrivate class provides private implementation for CreateWebLoginTokenRequest.
 * \internal
 *
 * \inmodule QtAwsMWAA
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

} // namespace MWAA
} // namespace QtAws
