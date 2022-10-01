// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreplicationconfigurationrequest.h"
#include "getreplicationconfigurationrequest_p.h"
#include "getreplicationconfigurationresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::GetReplicationConfigurationRequest
 * \brief The GetReplicationConfigurationRequest class provides an interface for Mgn GetReplicationConfiguration requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::getReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetReplicationConfigurationRequest::GetReplicationConfigurationRequest(const GetReplicationConfigurationRequest &other)
    : MgnRequest(new GetReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReplicationConfigurationRequest object.
 */
GetReplicationConfigurationRequest::GetReplicationConfigurationRequest()
    : MgnRequest(new GetReplicationConfigurationRequestPrivate(MgnRequest::GetReplicationConfigurationAction, this))
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
 * \class QtAws::Mgn::GetReplicationConfigurationRequestPrivate
 * \brief The GetReplicationConfigurationRequestPrivate class provides private implementation for GetReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a GetReplicationConfigurationRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
GetReplicationConfigurationRequestPrivate::GetReplicationConfigurationRequestPrivate(
    const MgnRequest::Action action, GetReplicationConfigurationRequest * const q)
    : MgnRequestPrivate(action, q)
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
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
