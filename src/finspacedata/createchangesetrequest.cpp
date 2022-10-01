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

#include "createchangesetrequest.h"
#include "createchangesetrequest_p.h"
#include "createchangesetresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::CreateChangesetRequest
 * \brief The CreateChangesetRequest class provides an interface for FinspaceData CreateChangeset requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::createChangeset
 */

/*!
 * Constructs a copy of \a other.
 */
CreateChangesetRequest::CreateChangesetRequest(const CreateChangesetRequest &other)
    : FinspaceDataRequest(new CreateChangesetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateChangesetRequest object.
 */
CreateChangesetRequest::CreateChangesetRequest()
    : FinspaceDataRequest(new CreateChangesetRequestPrivate(FinspaceDataRequest::CreateChangesetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateChangesetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateChangesetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateChangesetRequest::response(QNetworkReply * const reply) const
{
    return new CreateChangesetResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::CreateChangesetRequestPrivate
 * \brief The CreateChangesetRequestPrivate class provides private implementation for CreateChangesetRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a CreateChangesetRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
CreateChangesetRequestPrivate::CreateChangesetRequestPrivate(
    const FinspaceDataRequest::Action action, CreateChangesetRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateChangesetRequest
 * class' copy constructor.
 */
CreateChangesetRequestPrivate::CreateChangesetRequestPrivate(
    const CreateChangesetRequestPrivate &other, CreateChangesetRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
