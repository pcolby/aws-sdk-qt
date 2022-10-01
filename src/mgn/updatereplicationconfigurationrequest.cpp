// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereplicationconfigurationrequest.h"
#include "updatereplicationconfigurationrequest_p.h"
#include "updatereplicationconfigurationresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::UpdateReplicationConfigurationRequest
 * \brief The UpdateReplicationConfigurationRequest class provides an interface for Mgn UpdateReplicationConfiguration requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::updateReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReplicationConfigurationRequest::UpdateReplicationConfigurationRequest(const UpdateReplicationConfigurationRequest &other)
    : MgnRequest(new UpdateReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReplicationConfigurationRequest object.
 */
UpdateReplicationConfigurationRequest::UpdateReplicationConfigurationRequest()
    : MgnRequest(new UpdateReplicationConfigurationRequestPrivate(MgnRequest::UpdateReplicationConfigurationAction, this))
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
 * \class QtAws::Mgn::UpdateReplicationConfigurationRequestPrivate
 * \brief The UpdateReplicationConfigurationRequestPrivate class provides private implementation for UpdateReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a UpdateReplicationConfigurationRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
UpdateReplicationConfigurationRequestPrivate::UpdateReplicationConfigurationRequestPrivate(
    const MgnRequest::Action action, UpdateReplicationConfigurationRequest * const q)
    : MgnRequestPrivate(action, q)
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
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
