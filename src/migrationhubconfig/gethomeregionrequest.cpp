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

#include "gethomeregionrequest.h"
#include "gethomeregionrequest_p.h"
#include "gethomeregionresponse.h"
#include "migrationhubconfigrequest_p.h"

namespace QtAws {
namespace MigrationHubConfig {

/*!
 * \class QtAws::MigrationHubConfig::GetHomeRegionRequest
 * \brief The GetHomeRegionRequest class provides an interface for MigrationHubConfig GetHomeRegion requests.
 *
 * \inmodule QtAwsMigrationHubConfig
 *
 *  The AWS Migration Hub home region APIs are available specifically for working with your Migration Hub home region. You
 *  can use these APIs to determine a home region, as well as to create and work with controls that describe the home
 * 
 *  region> <ul> <li>
 * 
 *  You must make API calls for write actions (create, notify, associate, disassociate, import, or put) while in your home
 *  region, or a <code>HomeRegionNotSetException</code> error is
 * 
 *  returned> </li> <li>
 * 
 *  API calls for read actions (list, describe, stop, and delete) are permitted outside of your home
 * 
 *  region> </li> <li>
 * 
 *  If you call a write API outside the home region, an <code>InvalidInputException</code> is
 * 
 *  returned> </li> <li>
 * 
 *  You can call <code>GetHomeRegion</code> action to obtain the account's Migration Hub home
 * 
 *  region> </li> </ul>
 * 
 *  For specific API usage, see the sections that follow in this AWS Migration Hub Home Region API reference.
 *
 * \sa MigrationHubConfigClient::getHomeRegion
 */

/*!
 * Constructs a copy of \a other.
 */
GetHomeRegionRequest::GetHomeRegionRequest(const GetHomeRegionRequest &other)
    : MigrationHubConfigRequest(new GetHomeRegionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHomeRegionRequest object.
 */
GetHomeRegionRequest::GetHomeRegionRequest()
    : MigrationHubConfigRequest(new GetHomeRegionRequestPrivate(MigrationHubConfigRequest::GetHomeRegionAction, this))
{

}

/*!
 * \reimp
 */
bool GetHomeRegionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHomeRegionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHomeRegionRequest::response(QNetworkReply * const reply) const
{
    return new GetHomeRegionResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubConfig::GetHomeRegionRequestPrivate
 * \brief The GetHomeRegionRequestPrivate class provides private implementation for GetHomeRegionRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubConfig
 */

/*!
 * Constructs a GetHomeRegionRequestPrivate object for MigrationHubConfig \a action,
 * with public implementation \a q.
 */
GetHomeRegionRequestPrivate::GetHomeRegionRequestPrivate(
    const MigrationHubConfigRequest::Action action, GetHomeRegionRequest * const q)
    : MigrationHubConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHomeRegionRequest
 * class' copy constructor.
 */
GetHomeRegionRequestPrivate::GetHomeRegionRequestPrivate(
    const GetHomeRegionRequestPrivate &other, GetHomeRegionRequest * const q)
    : MigrationHubConfigRequestPrivate(other, q)
{

}

} // namespace MigrationHubConfig
} // namespace QtAws
