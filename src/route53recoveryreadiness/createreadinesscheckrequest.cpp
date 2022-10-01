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

#include "createreadinesscheckrequest.h"
#include "createreadinesscheckrequest_p.h"
#include "createreadinesscheckresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateReadinessCheckRequest
 * \brief The CreateReadinessCheckRequest class provides an interface for Route53RecoveryReadiness CreateReadinessCheck requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createReadinessCheck
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReadinessCheckRequest::CreateReadinessCheckRequest(const CreateReadinessCheckRequest &other)
    : Route53RecoveryReadinessRequest(new CreateReadinessCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReadinessCheckRequest object.
 */
CreateReadinessCheckRequest::CreateReadinessCheckRequest()
    : Route53RecoveryReadinessRequest(new CreateReadinessCheckRequestPrivate(Route53RecoveryReadinessRequest::CreateReadinessCheckAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReadinessCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReadinessCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReadinessCheckRequest::response(QNetworkReply * const reply) const
{
    return new CreateReadinessCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateReadinessCheckRequestPrivate
 * \brief The CreateReadinessCheckRequestPrivate class provides private implementation for CreateReadinessCheckRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateReadinessCheckRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
CreateReadinessCheckRequestPrivate::CreateReadinessCheckRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, CreateReadinessCheckRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReadinessCheckRequest
 * class' copy constructor.
 */
CreateReadinessCheckRequestPrivate::CreateReadinessCheckRequestPrivate(
    const CreateReadinessCheckRequestPrivate &other, CreateReadinessCheckRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
