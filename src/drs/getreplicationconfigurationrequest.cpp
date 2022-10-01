// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreplicationconfigurationrequest.h"
#include "getreplicationconfigurationrequest_p.h"
#include "getreplicationconfigurationresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::GetReplicationConfigurationRequest
 * \brief The GetReplicationConfigurationRequest class provides an interface for Drs GetReplicationConfiguration requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::getReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetReplicationConfigurationRequest::GetReplicationConfigurationRequest(const GetReplicationConfigurationRequest &other)
    : DrsRequest(new GetReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReplicationConfigurationRequest object.
 */
GetReplicationConfigurationRequest::GetReplicationConfigurationRequest()
    : DrsRequest(new GetReplicationConfigurationRequestPrivate(DrsRequest::GetReplicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetReplicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReplicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReplicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetReplicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::GetReplicationConfigurationRequestPrivate
 * \brief The GetReplicationConfigurationRequestPrivate class provides private implementation for GetReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a GetReplicationConfigurationRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
GetReplicationConfigurationRequestPrivate::GetReplicationConfigurationRequestPrivate(
    const DrsRequest::Action action, GetReplicationConfigurationRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReplicationConfigurationRequest
 * class' copy constructor.
 */
GetReplicationConfigurationRequestPrivate::GetReplicationConfigurationRequestPrivate(
    const GetReplicationConfigurationRequestPrivate &other, GetReplicationConfigurationRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
