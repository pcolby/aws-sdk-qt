// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsnapshotsrequest.h"
#include "getsnapshotsrequest_p.h"
#include "getsnapshotsresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::GetSnapshotsRequest
 * \brief The GetSnapshotsRequest class provides an interface for Kendra GetSnapshots requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::getSnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
GetSnapshotsRequest::GetSnapshotsRequest(const GetSnapshotsRequest &other)
    : KendraRequest(new GetSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSnapshotsRequest object.
 */
GetSnapshotsRequest::GetSnapshotsRequest()
    : KendraRequest(new GetSnapshotsRequestPrivate(KendraRequest::GetSnapshotsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSnapshotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSnapshotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new GetSnapshotsResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::GetSnapshotsRequestPrivate
 * \brief The GetSnapshotsRequestPrivate class provides private implementation for GetSnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a GetSnapshotsRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
GetSnapshotsRequestPrivate::GetSnapshotsRequestPrivate(
    const KendraRequest::Action action, GetSnapshotsRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSnapshotsRequest
 * class' copy constructor.
 */
GetSnapshotsRequestPrivate::GetSnapshotsRequestPrivate(
    const GetSnapshotsRequestPrivate &other, GetSnapshotsRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
