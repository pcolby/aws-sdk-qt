// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
