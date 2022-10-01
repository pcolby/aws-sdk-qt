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

#include "createcellrequest.h"
#include "createcellrequest_p.h"
#include "createcellresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateCellRequest
 * \brief The CreateCellRequest class provides an interface for Route53RecoveryReadiness CreateCell requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createCell
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCellRequest::CreateCellRequest(const CreateCellRequest &other)
    : Route53RecoveryReadinessRequest(new CreateCellRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCellRequest object.
 */
CreateCellRequest::CreateCellRequest()
    : Route53RecoveryReadinessRequest(new CreateCellRequestPrivate(Route53RecoveryReadinessRequest::CreateCellAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCellRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCellResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCellRequest::response(QNetworkReply * const reply) const
{
    return new CreateCellResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateCellRequestPrivate
 * \brief The CreateCellRequestPrivate class provides private implementation for CreateCellRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateCellRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
CreateCellRequestPrivate::CreateCellRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, CreateCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCellRequest
 * class' copy constructor.
 */
CreateCellRequestPrivate::CreateCellRequestPrivate(
    const CreateCellRequestPrivate &other, CreateCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
