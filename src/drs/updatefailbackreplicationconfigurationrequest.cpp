// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefailbackreplicationconfigurationrequest.h"
#include "updatefailbackreplicationconfigurationrequest_p.h"
#include "updatefailbackreplicationconfigurationresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::UpdateFailbackReplicationConfigurationRequest
 * \brief The UpdateFailbackReplicationConfigurationRequest class provides an interface for Drs UpdateFailbackReplicationConfiguration requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::updateFailbackReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFailbackReplicationConfigurationRequest::UpdateFailbackReplicationConfigurationRequest(const UpdateFailbackReplicationConfigurationRequest &other)
    : DrsRequest(new UpdateFailbackReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFailbackReplicationConfigurationRequest object.
 */
UpdateFailbackReplicationConfigurationRequest::UpdateFailbackReplicationConfigurationRequest()
    : DrsRequest(new UpdateFailbackReplicationConfigurationRequestPrivate(DrsRequest::UpdateFailbackReplicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFailbackReplicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFailbackReplicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFailbackReplicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFailbackReplicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::UpdateFailbackReplicationConfigurationRequestPrivate
 * \brief The UpdateFailbackReplicationConfigurationRequestPrivate class provides private implementation for UpdateFailbackReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a UpdateFailbackReplicationConfigurationRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
UpdateFailbackReplicationConfigurationRequestPrivate::UpdateFailbackReplicationConfigurationRequestPrivate(
    const DrsRequest::Action action, UpdateFailbackReplicationConfigurationRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFailbackReplicationConfigurationRequest
 * class' copy constructor.
 */
UpdateFailbackReplicationConfigurationRequestPrivate::UpdateFailbackReplicationConfigurationRequestPrivate(
    const UpdateFailbackReplicationConfigurationRequestPrivate &other, UpdateFailbackReplicationConfigurationRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
