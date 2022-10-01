// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startstudiossoconfigurationrepairrequest.h"
#include "startstudiossoconfigurationrepairrequest_p.h"
#include "startstudiossoconfigurationrepairresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::StartStudioSSOConfigurationRepairRequest
 * \brief The StartStudioSSOConfigurationRepairRequest class provides an interface for Nimble StartStudioSSOConfigurationRepair requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::startStudioSSOConfigurationRepair
 */

/*!
 * Constructs a copy of \a other.
 */
StartStudioSSOConfigurationRepairRequest::StartStudioSSOConfigurationRepairRequest(const StartStudioSSOConfigurationRepairRequest &other)
    : NimbleRequest(new StartStudioSSOConfigurationRepairRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartStudioSSOConfigurationRepairRequest object.
 */
StartStudioSSOConfigurationRepairRequest::StartStudioSSOConfigurationRepairRequest()
    : NimbleRequest(new StartStudioSSOConfigurationRepairRequestPrivate(NimbleRequest::StartStudioSSOConfigurationRepairAction, this))
{

}

/*!
 * \reimp
 */
bool StartStudioSSOConfigurationRepairRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartStudioSSOConfigurationRepairResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartStudioSSOConfigurationRepairRequest::response(QNetworkReply * const reply) const
{
    return new StartStudioSSOConfigurationRepairResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::StartStudioSSOConfigurationRepairRequestPrivate
 * \brief The StartStudioSSOConfigurationRepairRequestPrivate class provides private implementation for StartStudioSSOConfigurationRepairRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a StartStudioSSOConfigurationRepairRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
StartStudioSSOConfigurationRepairRequestPrivate::StartStudioSSOConfigurationRepairRequestPrivate(
    const NimbleRequest::Action action, StartStudioSSOConfigurationRepairRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartStudioSSOConfigurationRepairRequest
 * class' copy constructor.
 */
StartStudioSSOConfigurationRepairRequestPrivate::StartStudioSSOConfigurationRepairRequestPrivate(
    const StartStudioSSOConfigurationRepairRequestPrivate &other, StartStudioSSOConfigurationRepairRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
