// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putresourceattributesrequest.h"
#include "putresourceattributesrequest_p.h"
#include "putresourceattributesresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::PutResourceAttributesRequest
 * \brief The PutResourceAttributesRequest class provides an interface for MigrationHub PutResourceAttributes requests.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
 *
 * \sa MigrationHubClient::putResourceAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
PutResourceAttributesRequest::PutResourceAttributesRequest(const PutResourceAttributesRequest &other)
    : MigrationHubRequest(new PutResourceAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutResourceAttributesRequest object.
 */
PutResourceAttributesRequest::PutResourceAttributesRequest()
    : MigrationHubRequest(new PutResourceAttributesRequestPrivate(MigrationHubRequest::PutResourceAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool PutResourceAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutResourceAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutResourceAttributesRequest::response(QNetworkReply * const reply) const
{
    return new PutResourceAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::PutResourceAttributesRequestPrivate
 * \brief The PutResourceAttributesRequestPrivate class provides private implementation for PutResourceAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a PutResourceAttributesRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
PutResourceAttributesRequestPrivate::PutResourceAttributesRequestPrivate(
    const MigrationHubRequest::Action action, PutResourceAttributesRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutResourceAttributesRequest
 * class' copy constructor.
 */
PutResourceAttributesRequestPrivate::PutResourceAttributesRequestPrivate(
    const PutResourceAttributesRequestPrivate &other, PutResourceAttributesRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
