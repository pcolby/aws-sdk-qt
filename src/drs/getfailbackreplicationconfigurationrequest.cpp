// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfailbackreplicationconfigurationrequest.h"
#include "getfailbackreplicationconfigurationrequest_p.h"
#include "getfailbackreplicationconfigurationresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::GetFailbackReplicationConfigurationRequest
 * \brief The GetFailbackReplicationConfigurationRequest class provides an interface for Drs GetFailbackReplicationConfiguration requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::getFailbackReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetFailbackReplicationConfigurationRequest::GetFailbackReplicationConfigurationRequest(const GetFailbackReplicationConfigurationRequest &other)
    : DrsRequest(new GetFailbackReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFailbackReplicationConfigurationRequest object.
 */
GetFailbackReplicationConfigurationRequest::GetFailbackReplicationConfigurationRequest()
    : DrsRequest(new GetFailbackReplicationConfigurationRequestPrivate(DrsRequest::GetFailbackReplicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetFailbackReplicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFailbackReplicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFailbackReplicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetFailbackReplicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::GetFailbackReplicationConfigurationRequestPrivate
 * \brief The GetFailbackReplicationConfigurationRequestPrivate class provides private implementation for GetFailbackReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a GetFailbackReplicationConfigurationRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
GetFailbackReplicationConfigurationRequestPrivate::GetFailbackReplicationConfigurationRequestPrivate(
    const DrsRequest::Action action, GetFailbackReplicationConfigurationRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFailbackReplicationConfigurationRequest
 * class' copy constructor.
 */
GetFailbackReplicationConfigurationRequestPrivate::GetFailbackReplicationConfigurationRequestPrivate(
    const GetFailbackReplicationConfigurationRequestPrivate &other, GetFailbackReplicationConfigurationRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
