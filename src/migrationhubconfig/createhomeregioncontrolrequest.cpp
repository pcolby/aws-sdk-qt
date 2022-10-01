// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhomeregioncontrolrequest.h"
#include "createhomeregioncontrolrequest_p.h"
#include "createhomeregioncontrolresponse.h"
#include "migrationhubconfigrequest_p.h"

namespace QtAws {
namespace MigrationHubConfig {

/*!
 * \class QtAws::MigrationHubConfig::CreateHomeRegionControlRequest
 * \brief The CreateHomeRegionControlRequest class provides an interface for MigrationHubConfig CreateHomeRegionControl requests.
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
 * \sa MigrationHubConfigClient::createHomeRegionControl
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHomeRegionControlRequest::CreateHomeRegionControlRequest(const CreateHomeRegionControlRequest &other)
    : MigrationHubConfigRequest(new CreateHomeRegionControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHomeRegionControlRequest object.
 */
CreateHomeRegionControlRequest::CreateHomeRegionControlRequest()
    : MigrationHubConfigRequest(new CreateHomeRegionControlRequestPrivate(MigrationHubConfigRequest::CreateHomeRegionControlAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHomeRegionControlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHomeRegionControlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHomeRegionControlRequest::response(QNetworkReply * const reply) const
{
    return new CreateHomeRegionControlResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubConfig::CreateHomeRegionControlRequestPrivate
 * \brief The CreateHomeRegionControlRequestPrivate class provides private implementation for CreateHomeRegionControlRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubConfig
 */

/*!
 * Constructs a CreateHomeRegionControlRequestPrivate object for MigrationHubConfig \a action,
 * with public implementation \a q.
 */
CreateHomeRegionControlRequestPrivate::CreateHomeRegionControlRequestPrivate(
    const MigrationHubConfigRequest::Action action, CreateHomeRegionControlRequest * const q)
    : MigrationHubConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHomeRegionControlRequest
 * class' copy constructor.
 */
CreateHomeRegionControlRequestPrivate::CreateHomeRegionControlRequestPrivate(
    const CreateHomeRegionControlRequestPrivate &other, CreateHomeRegionControlRequest * const q)
    : MigrationHubConfigRequestPrivate(other, q)
{

}

} // namespace MigrationHubConfig
} // namespace QtAws
