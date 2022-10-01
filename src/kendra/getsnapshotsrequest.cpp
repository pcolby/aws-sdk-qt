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
