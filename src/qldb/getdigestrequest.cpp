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

#include "getdigestrequest.h"
#include "getdigestrequest_p.h"
#include "getdigestresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::GetDigestRequest
 * \brief The GetDigestRequest class provides an interface for QLDB GetDigest requests.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::getDigest
 */

/*!
 * Constructs a copy of \a other.
 */
GetDigestRequest::GetDigestRequest(const GetDigestRequest &other)
    : QldbRequest(new GetDigestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDigestRequest object.
 */
GetDigestRequest::GetDigestRequest()
    : QldbRequest(new GetDigestRequestPrivate(QldbRequest::GetDigestAction, this))
{

}

/*!
 * \reimp
 */
bool GetDigestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDigestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDigestRequest::response(QNetworkReply * const reply) const
{
    return new GetDigestResponse(*this, reply);
}

/*!
 * \class QtAws::QLDB::GetDigestRequestPrivate
 * \brief The GetDigestRequestPrivate class provides private implementation for GetDigestRequest.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a GetDigestRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
GetDigestRequestPrivate::GetDigestRequestPrivate(
    const QldbRequest::Action action, GetDigestRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDigestRequest
 * class' copy constructor.
 */
GetDigestRequestPrivate::GetDigestRequestPrivate(
    const GetDigestRequestPrivate &other, GetDigestRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace QLDB
} // namespace QtAws
