// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereplicationconfigurationrequest.h"
#include "updatereplicationconfigurationrequest_p.h"
#include "updatereplicationconfigurationresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::UpdateReplicationConfigurationRequest
 * \brief The UpdateReplicationConfigurationRequest class provides an interface for Drs UpdateReplicationConfiguration requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::updateReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReplicationConfigurationRequest::UpdateReplicationConfigurationRequest(const UpdateReplicationConfigurationRequest &other)
    : DrsRequest(new UpdateReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReplicationConfigurationRequest object.
 */
UpdateReplicationConfigurationRequest::UpdateReplicationConfigurationRequest()
    : DrsRequest(new UpdateReplicationConfigurationRequestPrivate(DrsRequest::UpdateReplicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReplicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReplicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReplicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReplicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::UpdateReplicationConfigurationRequestPrivate
 * \brief The UpdateReplicationConfigurationRequestPrivate class provides private implementation for UpdateReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a UpdateReplicationConfigurationRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
UpdateReplicationConfigurationRequestPrivate::UpdateReplicationConfigurationRequestPrivate(
    const DrsRequest::Action action, UpdateReplicationConfigurationRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReplicationConfigurationRequest
 * class' copy constructor.
 */
UpdateReplicationConfigurationRequestPrivate::UpdateReplicationConfigurationRequestPrivate(
    const UpdateReplicationConfigurationRequestPrivate &other, UpdateReplicationConfigurationRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
