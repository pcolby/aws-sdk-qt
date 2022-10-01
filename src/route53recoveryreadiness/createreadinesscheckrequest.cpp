// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
