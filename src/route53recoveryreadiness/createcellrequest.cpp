// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
